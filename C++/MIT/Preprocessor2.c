#include <stdio.h>

int main()
{
   /* The age of TechOnTheNet in seconds */
   int age;

   #warning "The variable age may exceed the size of a 32 bit integer"

   /* 12 years, 365 days/year, 24 hours/day, 60 minutes/hour, 60 seconds/min */
   age = 12 * 365 * 24 * 60 * 60;

   printf("TechOnTheNet is %d seconds old\n", age);

   return 0;
}
