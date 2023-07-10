#include<stdio.h>
#include<conio.h>

void main( ) 
{ 
    int a, fact ; 
    printf ( "\nEnter any number " ) ; 
    scanf ( "%d", &a ) ; 
    fact = factorial ( a ) ; 
    printf ( "Factorial value = %d", fact ) ; 
} 

void factorial ( int x ) 
{ 
    int f = 1, i ; 
    for ( i = x ; i >= 1 ; i-- ) 
    f = f * i ; 
    return ( f ) ; 
}  