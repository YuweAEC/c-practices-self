#include<stdio.h>
#include<conio.h>

void intPointers( ) ;
void stringArray( ) ;

int main()
{
    intPointers();
    stringArray();
    return 0;
}

void intPointers( ) 
{ 
    int i = 31, j = 5, k = 19, l = 71, m ; 
    
    arr[0] = &i ; 
    arr[1] = &j ; 
    arr[2] = &k ; 
    arr[3] = &l ; 
    
    for ( m = 0 ; m <= 3 ; m++ ) // 1-D array traversal 
        printf ( "%d ", * ( arr[m] ) ) ;  // print value of arr[m] 
} 

/* print the value of string array */

void stringArray( ) 
{ 
    static int a[ ] = { 0, 1, 2, 3, 4 } ; 
    int *p[ ] = { a, a + 1, a + 2, a + 3, a + 4 } ; 
    printf ( "\n%u %u %d", p, *p, * ( *p ) ) ; 
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