#include<stdio.h>
#include<header.h>

void main( ) 
{ 
    int a, fact ; 
    printf ( "\nEnter any number " ) ; 
    scanf ( "%d", &a ) ; 
    fact = header ( a ) ; 
    printf ( "Factorial value = %d", fact ) ; 
} 