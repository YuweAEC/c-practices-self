#include<stdio.h>
#include<conio.h>

void singleCharacterArray( );
void structureBook();

int main()
{
    singleCharacterArray();
    structureBook();
    return 0;
}

 // single character array 

void singleCharacterArray( ) 
{ 
    char name[3] ; 
    float price[3] ; 
    int pages[3], i ; 
    printf ( "\nEnter names, prices and no. of pages of 3 books\n" ) ; 
    for ( i = 0 ; i <= 2 ; i++ ) 
    scanf ( "%c %f %d", &name[i], &price[i], &pages[i] ); 
    printf ( "\nAnd this is what you entered\n" ) ; 
    for ( i = 0 ; i <= 2 ; i++ ) 
    printf ( "%c %f %d\n", name[i], price[i], pages[i] ); 
} 

void structureBook( ) 
{ 
    struct book 
    { 
    char name ; 
    float price ; 
    int pages ; 
    } ; 
    struct book b1, b2, b3 ; 
    printf ( "\nEnter names, prices & no. of pages of 3 books\n" ) ; 
    scanf ( "%c %f %d", &b1.name, &b1.price, &b1.pages ) ; 
    scanf ( "%c %f %d", &b2.name, &b2.price, &b2.pages ) ; 
    scanf ( "%c %f %d", &b3.name, &b3.price, &b3.pages ) ; 
    printf ( "\nAnd this is what you entered" ) ; 
    printf ( "\n%c %f %d", b1.name, b1.price, b1.pages ) ; 
    printf ( "\n%c %f %d", b2.name, b2.price, b2.pages ) ; 
    printf ( "\n%c %f %d", b3.name, b3.price, b3.pages ) ; 
} 