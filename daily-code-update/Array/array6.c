#include <stdio.h>
#include <conio.h>

int twoDimensionalArray( ); // prototype declare
int pointers2dArray( ); // prototype declare

int main ()
{
    twoDimensionalArray( ); // function call
    pointers2dArray( ); // function call
    return 0;
}

/* 2-D array is an array of arrays */ 

int twoDimensionalArray( )  // function invocation 
{ 
    int s[4][2] =              // 2-D array declaration
    { 
        { 1234, 56 }, 
        { 1212, 33 }, 
        { 1434, 80 }, 
        { 1312, 78 } 
    } ; 
    
    int i ;    // i is the row subscript 
    
    for ( i = 0 ; i <= 3 ; i++ )  // 2-D array traversal 
        printf ( "\nAddress of %d th 1-D array = %u", i, s[i] ) ;  // address of each 1-D array  
}

/* Pointer notation to access 2-D array elements */ 

int pointers2dArray( ) 
{ 
    int s[4][2] = 
    { 
        { 1234, 56 }, 
        { 1212, 33 }, 
        { 1434, 80 }, 
        { 1312, 78 } 
    } ; 
    
    int i, j ; 
    
    for ( i = 0 ; i <= 3 ; i++ ) 
    { 
        printf ( "\n" ) ; 
        for ( j = 0 ; j <= 1 ; j++ ) 
        printf ( "%d ", *( *( s + i ) + j ) ) ; 
    } 
}

