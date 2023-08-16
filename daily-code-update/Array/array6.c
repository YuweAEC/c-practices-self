#include <stdio.h>
#include <conio.h>

int twoDimensionalArray( ); // prototype declare

int main ()
{
    twoDimensionalArray( ); // function call
    return 0;
}

/* Demo: 2-D array is an array of arrays */ 

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