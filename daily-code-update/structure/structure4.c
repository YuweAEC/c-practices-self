/* Passing address of a structure variable */ 
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

void displayAddress(struct book *b); // function prototype

struct book 
{ 
    char name[25] ; 
    char author[25] ; 
    int callno ; 
} ; 

int main( ) 
{ 
    struct book b1 = { "Let us C", "YPK", 101 } ; 
    displayAddress ( &b1 ) ; 
} 

void displayAddress ( struct book *b ) 
{ 
    printf ( "\n%s %s %d", b->name, b->author, b->callno ) ; 
} 