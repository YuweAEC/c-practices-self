#include<stdio.h>
#include<conio.h>

/* sending value to the parameter ro argument 
using call by value to swap and call the function inside main
*/

void swapv(int ,int);
void swapr( int *x, int *y );
void areaperi ( int r, float *a, float *p );

void main() 
{ 
    int a = 10, b = 20 ; 
    int radius ; 
    float area, perimeter ;     
    
    swapv( a, b ) ; 
    swapr( &a, &b ) ; 
    
    printf( "\na = %d b = %d", a, b ) ; 
    
    printf ( "\nEnter radius of a circle " ) ; 
    scanf ( "%d", &radius ) ; 
    areaperi ( radius, &area, &perimeter ) ; 
    
    printf ( "Area = %f", area ) ; 
    printf ( "\nPerimeter = %f", perimeter ) ; 
}

void swapv( int x, int y ) 
{ 
    int t ; 
    t = x ; 
    x = y ; 
    y = t ; 
    
    printf( "\nx = %d y = %d", x, y ) ; 
}

//using call by reference to swap and call the function inside main

void swapr( int *x, int *y ) 
{
    int t ; 
    t = *x ; 
    *x = *y ; 
    *y = t ; 
}

// to find area and perimeter of a circle

void areaperi ( int r, float *a, float *p ) 
{ 
 *a = 3.14 * r * r ; 
 *p = 2 * 3.14 * r ; 
}

