#include<stdio.h>
#include<conio.h>
/* sending value to the parameter ro argument 
and the use call by value to swap and call the function inside main
*/
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
