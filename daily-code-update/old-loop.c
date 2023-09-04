#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/* odd loop using a for loop */ 
// program to print the square of a number entered by the user.

void squareFor();
void squareWhile();

int main()
{
    squareFor();
    squareWhile();
    return 0;
}
void squareFor( ) 
{ 
    char another = 'y' ; 
    int num ; 
    
    for ( ; another == 'y' ; ) 
    { 
        printf ( "Enter a number " ) ; 
        scanf ( "%d", &num ) ; 
        printf ( "square of %d is %d", num, num * num ) ; 
        printf ( "\nWant to enter another number y/n " ) ; 
        scanf ( " %c", &another ) ; 
    } 
} 

/* odd loop using a while loop */ 

void squareWhile( ) 
{ 
    char another = 'y' ; 
    int num ; 
    
    while ( another == 'y' ) 
    { 
        printf ( "Enter a number " ) ; 
        scanf ( "%d", &num ) ; 
        printf ( "square of %d is %d", num, num * num ) ; 
        printf ( "\nWant to enter another number y/n " ) ; 
        scanf ( " %c", &another ) ; 
    } 
} 
