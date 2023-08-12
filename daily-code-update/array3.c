#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int accessArrayElement( ); // prototype declare
int arrayElement( ); // prototype declare

int main()
{
    accessArrayElement( ); // function call
    arrayElement( ); // function call
}

int accessArrayElement( ) 
{ 
    int num[ ] = { 24, 34, 12, 44, 56, 17 } ; 
    int i ; 
    for ( i = 0 ; i <= 5 ; i++ ) 
    { 
        printf ( "\naddress = %u ", &num[i] ) ; 
        printf ( "element = %d", num[i] ) ; 
    } 
}

int arrayElement( ) 
{
    int num[ ] = { 24, 34, 12, 44, 56, 17 } ; 
    int i, *j ; 
    j = &num[0] ; /* assign address of zeroth element */ 
    
    for( i = 0 ; i <= 5 ; i++ ) 
    { 
        printf ( "\n\naddress = %u ", j ) ; 
        printf ( "element = %d", *j ) ; 
        j++ ; /* increment pointer to point to next location */ 
    } 
}