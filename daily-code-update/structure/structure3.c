#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

/* program to copy one structure to another structure */

void structure( ); // function prototype
void nestedStructure( );
void individualStructure( );

int main()
{
    structure();
    individualStructure();
    nestedStructure();
    return 0;
}

void structure( ) 
{ 
    struct employee 
    { 
    char name[10] ; 
    int age ; 
    float salary ; 
    } ; 
    struct employee e1 = { "Sanjay", 30, 5500.50 } ; 
    struct employee e2, e3 ; 
    /* piece-meal copying */ 
    strcpy ( e2.name, e1.name ) ; 
    e2.age = e1.age ; 
    e2.salary = e1.salary ; 
    /* copying all elements at one go */ 
    e3 = e2 ; 
    printf ( "\n%s %d %f", e1.name, e1.age, e1.salary ) ; 
    printf ( "\n%s %d %f", e2.name, e2.age, e2.salary ) ; 
    printf ( "\n%s %d %f", e3.name, e3.age, e3.salary ) ; 
} 

void nestedStructure( )
{ 
    struct address 
    { 
        char phone[15] ; 
        char city[25] ; 
        int pin ; 
    } ; 

    struct emp 
    { 
        char name[25] ; 
        struct address a ; 
    } ; 

    struct emp e = { "jeru", "531046", "nagpur", 10 }; 

    printf ( "\nname = %s phone = %s", e.name, e.a.phone ) ; 
    printf ( "\ncity = %s pin = %d", e.a.city, e.a.pin ) ; 
} 

/* Passing individual structure elements */ 
void individualStructure( ) // program to pass individual structure elements to a function
{ 
    struct book 
    { 
        char name[25] ; 
        char author[25] ; 
        int callno ; 
    } ; 

    struct book b1 = { "Let us C", "YPK", 101 } ; 
    
    display ( b1.name, b1.author, b1.callno ) ; 
    } 
        display ( char *s, char *t, int n ) 
    { 
    
    printf ( "\n%s %s %d", s, t, n ) ; 
} 

