#include<stdio.h>
#include<conio.h>

int way1 ( int *, int, int ) ;
int way2 ( int ( * )[4], int, int ) ;
int way3 ( int [ ][4], int, int ) ;

/* Three ways of accessing a 2-D array */ 

int main( ) 
{ 
    int a[3][4] = 
    { 
        1, 2, 3, 4, 
        5, 6, 7, 8, 
        9, 0, 1, 6 
    } ; 
    
    way1 ( a, 3, 4 ) ; 
    way2 ( a, 3, 4 ) ; 
    way3 ( a, 3, 4 ) ; 
} 

int way1 ( int *q, int row, int col ) 
{ 
    int i, j ; 
    
    for ( i = 0 ; i < row ; i++ ) 
    { 
        for ( j = 0 ; j < col ; j++ ) 
            printf ( "%d ", * ( q + i * col + j ) ) ; 
        printf ( "\n" ) ; 
    } 
    printf ("\n" ) ; 
} 
int way2 ( int ( *q )[4], int row, int col ) 
{ 
    int i, j ; 
    int *p ; 
    
    for ( i = 0 ; i < row ; i++ ) 
    { 
        p = q + i ; 
        for ( j = 0 ; j < col ; j++ ) 
            printf ( "%d ", * ( p + j ) ) ; 
        printf ( "\n" ) ; 
    } 
    printf ( "\n" ) ; 
} 
int way3 ( int q[ ][4], int row, int col ) 
{ 
    int i, j ; 
    
    for ( i = 0 ; i < row ; i++ ) 
    { 
    for ( j = 0 ; j < col ; j++ ) 
        printf ( "%d ", q[i][j] ) ; 
    printf ( "\n" ) ; 
    } 
    printf ( "\n" ) ; 
} 