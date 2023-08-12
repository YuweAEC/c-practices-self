#include<stdio.h>
#include<canio.h>
#include<stdlib.h>
int arrayElement( ); // prototype declare

int main()
{
    arrayElement( ); // function call
}

int arrayElement( ) 
{
    int num[ ] = { 24, 34, 12, 44, 56, 17 } ; 
    int i, *j ; 
    j = &num[0] ; /* assign address of zeroth element */ 
    
    for( i = 0 ; i <= 5 ; i++ ) 
    { 
        printf ( "\naddress = %u ", j ) ; 
        printf ( "element = %d", *j ) ; 
        j++ ; /* increment pointer to point to next location */ 
    } 
}