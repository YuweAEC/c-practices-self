#include<stdio.h>
#include<conio.h>

/* Demonstration of passing an entire array to a function */ 
int display( int *, int ) ;

int main( ) 
{ 
    int num[ ] = { 24, 34, 12, 44, 56, 17 } ; 
    display ( &num[0], 6 ) ; 
} 
int display( int *j, int n ) 
{ 
    int i ; 
    for ( i = 0 ; i <= n - 1 ; i++ ) 
    { 
        printf ( "\nelement = %d", *j ) ;
        j++ ; /* increment pointer to point to next element */ 
    } 
} 