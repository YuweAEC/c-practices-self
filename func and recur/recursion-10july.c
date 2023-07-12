#include<stdio.h>
#include<conio.h>

//code for factorial using simple function

int factorial ( int ); 
int factorialusingRec( int x ); 

void main( ) 
{ 
    int a, fact1, fact ; 
    printf ( "\nEnter any number " ) ; 
    scanf ( "%d", &a ) ; 
    fact1 = factorial ( a ) ; 
    fact = factorialusingRec( a ) ; 
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

int factorialusingRec( int x ) 
{ 
    int f ; 
    if ( x == 1 ) 
    return ( 1 ) ; 
    else 
    f = x * factorialusingRec( x - 1 ) ; 
    return ( f ) ; 
}
