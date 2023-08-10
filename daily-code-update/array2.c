#include<stdio.h>
#include<conio.h>

int display( ); // prototype declare
int pointersAndArrays( ); // prototype declare 


int main( ) 
{ 
    int i ; 
    int marks[ ] = { 55, 65, 75, 56, 78, 78, 90 } ; 
    for ( i = 0 ; i <= 6 ; i++ ) 
    display( &marks[i] ) ;  // function call
    pointersAndArrays( ); // function call 
} 

int display( int *n ) // function invocation
{ 
    printf ( " \n %d \t", *n ) ; // print value of n 
} 


int pointersAndArrays( ) // function invocation
{ 
    int i = 3, *x ; 
    float j = 1.5, *y ; 
    char k = 'c', *z ; 
    printf ( "\n\n\nValue of i = %d", i ) ; 
    printf ( "\nValue of j = %f", j ) ; 
    printf ( "\nValue of k = %c", k ) ; 
    x = &i ; 
    y = &j ; 
    z = &k ; 
    printf ( "\nOriginal address in x = %u", x ) ; 
    printf ( "\nOriginal address in y = %u", y ) ; 
    printf ( "\nOriginal address in z = %u", z ) ; 
    x++ ; 
    y++ ; 
    z++ ; 
    printf ( "\nNew address in x = %u", x ) ; 
    printf ( "\nNew address in y = %u", y ) ; 
    printf ( "\nNew address in z = %u", z ) ; 
}