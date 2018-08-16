#include <iostream>
using namespace std;

int main()
{
	int *p_int = NULL;
	p_int = new int;
	if(!p_int){
		cerr << "Heap Out of Memmory..." << endl;
	}
	cout << "*p_int:" << *p_int << endl;
	*p_int = 10;
	cout << "*p_int:" << *p_int << endl;
	delete p_int;

	int *p_int_array = NULL;
	int size =10;
	p_int_array = new int[size];
	for( int i=0; i<size; i++ ) {
		p_int_array[i] = i*2;
	}
	for( int i=0; i<size; i++ ) {
		cout << "p_int_array["<<i<<"] : " << p_int_array[i] << endl;
	}
	delete []p_int_array;

	int column = 7;
	double **array_2d = new double* [size];
	
	for ( int i =0 ; i < size ; i++ ) {
		array_2d[i] = new double[column];
	}
	for ( int i=0 ; i< size  ; i++ ) {
		for ( int j=0 ;  j<column ;  j++ ) {
			array_2d[i][j]= i*j + j;
		}
	}
	for ( int i=0 ; i< size  ; i++ ) {
		for ( int j=0 ;  j<column ;  j++ ) {
			cout << "Array_2D: " <<array_2d[i][j] << endl ;
		}
	}
	for ( int i=0 ; i< size  ; i++ ) {
		delete []array_2d[i]  ;
	}
	delete []array_2d;

	int ***array_3d =NULL;
	int 3d_a = 5,3d_b=10, 3d_c=15;

	array_3d = new int** [3d_a];
	for ( int i=0 ; i<3d_a ; i++ ){
		**(array_3d+i) = new int* [3d_b]; 	
	}

	return 0;
}
