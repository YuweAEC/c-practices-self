#include<stdio.h>
#include<conio.h>

//code for factorial using simple function

int factorial ( int ); 
int rec( int x ); 

void main( ) 
{ 
    int a, fact1, fact ; 
    printf ( "\nEnter any number " ) ; 
    scanf ( "%d", &a ) ; 
    fact1 = factorial ( a ) ; 
    fact = rec ( a ) ; 
    printf ( "Factorial value = %d", fact ) ; 
} 

int factorial ( int x ) 
{ 
    int f = 1, i ; 
    for ( i = x ; i >= 1 ; i-- ) 
    f = f * i ; 
    return ( f ) ; 
}  

//code to find factorial using recursion

int rec( int x ) 
{ 
    int f ; 
    if ( x == 1 ) 
    return ( 1 ) ; 
    else 
    f = x * rec ( x - 1 ) ; 
    return ( f ) ; 
}