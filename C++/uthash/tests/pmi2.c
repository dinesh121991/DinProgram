#include <stdio.h>   /* gets */
#include <stdlib.h>  /* atoi, malloc */
#include <string.h>  /* strcpy */
#include "uthash.h"

struct my_struct {
    int id;                    /* key */
    char name[10];
    UT_hash_handle hh;         /* makes this structure hashable */
};

struct my_struct *users = NULL;

void add_user(int user_id, char *name)
{
    struct my_struct *s;

    HASH_FIND_STR(users, name, s);  /* id already in the hash? */
    if (s==NULL) {
        s = (struct my_struct*)malloc(sizeof(struct my_struct));
    	strcpy(s->name, name);
        s->id = user_id;
        HASH_ADD_STR( users, name, s );  /* id: name of key field */
    }
}

struct my_struct *find_user(char *key)
{
    struct my_struct *s;

    HASH_FIND_STR( users, key, s );  /* s: output pointer */
    return s;
}

void delete_user(struct my_struct *user)
{
    HASH_DEL( users, user);  /* user: pointer to deletee */
    free(user);
}

void delete_all()
{
    struct my_struct *current_user, *tmp;

    HASH_ITER(hh, users, current_user, tmp) {
        HASH_DEL(users,current_user);  /* delete it (users advances to next) */
        free(current_user);            /* free it */
    }
}

void print_users()
{
    struct my_struct *s;

    for(s=users; s != NULL; s=(struct my_struct*)(s->hh.next)) {
        printf("user id %d: name %s\n", s->id, s->name);
    }
}

int name_sort(struct my_struct *a, struct my_struct *b)
{
    return strcmp(a->name,b->name);
}

int id_sort(struct my_struct *a, struct my_struct *b)
{
    return (a->id - b->id);
}

void sort_by_name()
{
    HASH_SORT(users, name_sort);
}

void sort_by_id()
{
    HASH_SORT(users, id_sort);
}
void print_hash_internal()
{
	unsigned num_bukets = users->hh.tbl->num_buckets;
	unsigned log2_num_bukets = users->hh.tbl->log2_num_buckets;
	unsigned num_items = users->hh.tbl->num_items;
	int i = 0;

	printf("num_bukets: %u log2_num_bukets: %u, num_items: %u \n", 
				num_bukets, log2_num_bukets, num_items);
	for (i = 0; i < num_bukets; i++) {
		printf("bucket: %d bucket_cnt: %u \n", i, users->hh.tbl->buckets[i].count);
	}
}

int main(int argc, char *argv[])
{
	char in[10];
	int id=1, running=1, i = 0;
	struct my_struct *s;
	char temp[30]="dinesh";
	unsigned num_users;
	time_t t;

	srand((unsigned) time(&t));
	add_user(i , temp);
	print_hash_internal();
	for(i = 1; i < 200000; i++) {
		sprintf(temp, "21806-%d-key%d", i, rand() % 10000);
                add_user(i , temp);
		if ((i % 1000) == 0) {
			print_hash_internal();
		}
	}
	num_users=HASH_COUNT(users);
	printf("there are %u keys\n", num_users);
	sort_by_name();
	sort_by_id();
	print_users();
	delete_all();  /* free any structures */
	num_users=HASH_COUNT(users);
	printf("there are %u keys\n", num_users);

	return 0;
}
