#include<stdio.h>
#include<conio.h>

void swapv(int , int);

void main() 
{ 
    int a = 10, b = 20 ; 
    
    swapv( a, b ) ; 
    printf( "\na = %d b = %d", a, b ) ; 
}

void swapv( int x, int y ) 
{ 
    int t ; 
    t = x ; 
    x = y ; 
    y = t ; 
    
    printf( "\nx = %d y = %d", x, y ) ; 
}
