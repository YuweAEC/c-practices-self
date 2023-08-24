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
