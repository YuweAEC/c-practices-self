#include<stdio.h>
#include<conio.h>

int display( ); // prototype declare

int main( ) 
{ 
    int i ; 
    int marks[ ] = { 55, 65, 75, 56, 78, 78, 90 } ; 
    for ( i = 0 ; i <= 6 ; i++ ) 
    display( &marks[i] ) ; 
} 

int display( int *n ) // function invocation
{ 
    printf ( "%d ", *n ) ; 
} 