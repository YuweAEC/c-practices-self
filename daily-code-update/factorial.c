#include<stdio.h>
#include<conio.h>
#include<factorial.h>
//here we include the user defined function and invoke it in main function to find factorial of a number
void main( ) 
{ 
    int a, fact ; 
    printf ( "\nEnter any number " ) ; 
    scanf ( "%d", &a ) ; 
    fact = header ( a ) ; 
    printf ( "Factorial value = %d", fact ) ; 
} 