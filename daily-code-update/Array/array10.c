#include<stdio.h>
#include<conio.h>

void singleCharacterArray( );

int main()
{
    singleCharacterArray();
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