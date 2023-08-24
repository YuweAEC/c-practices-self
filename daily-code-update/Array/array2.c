#include<stdio.h>
#include<conio.h>

int display( ); // prototype declare
int pointersAndArrays( ); // prototype declare 
int pointerVariables( ); // prototype declare
int memoryLocation( ); // prototype declare
int main( ) 
{ 
    int i ; 

    int marks[ ] = { 55, 65, 75, 56, 78, 78, 90 } ;  

    for ( i = 0 ; i <= 6 ; i++ ) 
    display( &marks[i] ) ;  // function call
    pointersAndArrays( ); // function call 
    pointerVariables( ); // function call
    memoryLocation( ); // function call 
} 

int display( int *n ) // function invocation
{ 
    printf ( " \n %d \t", *n ) ; // print value of n 
} 


int pointersAndArrays( ) // function invocation
{ 
    int i = 3, *x ; // declare i and x
    float j = 1.5, *y ; 
    char k = 'c', *z ; 
    printf ( "\n\n\nValue of i = %d", i ) ; 
    printf ( "\nValue of j = %f", j ) ; 
    printf ( "\nValue of k = %c", k ) ; 
    x = &i ; // x stores the address of i 
    y = &j ; // y stores the address of j
    z = &k ;  // z stores the address of k
    printf ( "\nOriginal address in x = %u", x ) ; 
    printf ( "\nOriginal address in y = %u", y ) ; 
    printf ( "\nOriginal address in z = %u", z ) ; 
    x++ ; // increment x by 1 
    y++ ; // increment y by 1
    z++ ; // increment z by 1
    printf ( "\nNew address in x = %u", x ) ; 
    printf ( "\nNew address in y = %u", y ) ; 
    printf ( "\nNew address in z = %u", z ) ; 
}

int pointerVariables( ) 
{ 
    int arr[ ] = { 10, 20, 36, 72, 45, 36 } ; 
    int *j, *k ; 
    j = &arr [ 4 ] ; 
    k = ( arr + 4 ) ; 
    if ( j == k ) 
    printf ( "\n\n\nThe two pointers point to the same location" ) ; 
    else 
    printf ( "\n\n\nThe two pointers do not point to the same location" ) ; 
}


int memoryLocation( ) 
{ 
    int num[ ] = { 24, 34, 12, 44, 56, 17 } ; 
    int i ; 
    for ( i = 0 ; i <= 5 ; i++ ) 
    { 
    printf ( "\n\n\nelement no. %d ", i ) ; 
    printf ( "address = %u", &num[i] ) ; 
    } 
} 