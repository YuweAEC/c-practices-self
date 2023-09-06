#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

// program about continue statement.

void continueState();

int main()
{
    continueState();
    return 0;
}
// swap numbers using continue statement.
void continueState( )
{ 
    int i, j ; 
    for ( i = 1 ; i <= 2 ; i++ ) 
    { 
    for ( j = 1 ; j <= 2 ; j++ ) 
    { 
    if ( i == j ) 
    continue ; 
    printf ( "\n%d %d\n", i, j ) ; 
    } 
    } 
} 