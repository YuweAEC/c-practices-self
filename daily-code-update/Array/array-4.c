#include<stdio.h>
#include<conio.h>

/* Demonstration of passing an entire array to a function */ 

int display( int *, int ) ;

int main( ) 
{ 
    int num[ ] = { 24, 34, 12, 44, 56, 17 } ; 
    int i ; 
    
    for ( i = 0 ; i <= 5 ; i++ ) 
    { 
        printf ( "\naddress = %u ", &num[i] ) ; 
        printf ( "element = %d %d ", num[i], *( num + i ) ) ; 
        printf ( "%d %d", *( i + num ), i[num] ) ; 
    }
    
    display ( &num[0], 6 ) ; 
} 

int display( int *j, int n ) 
{ 
    int i ; 
    
    for ( i = 0 ; i <= n - 1 ; i++ ) 
    { 
        printf ( "\n\nelement = %d", *j ) ;
        j++ ; /* increment pointer to point to next element */ 
    } 
} 
