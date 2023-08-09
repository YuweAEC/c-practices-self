#include<stdio.h>
#include<conio.h>

int average();

int main( ) 
{ 
    average();
}

int average()
{ 
    int avg, sum = 0 ; 
    int i ; 
    int marks[6] ; /* array declaration */ 
    
    for ( i = 0 ; i <= 5 ; i++ ) 
    { 
    printf ( "\nEnter marks " ) ; 
    scanf ( "%d", &marks[i] ) ; /* store data in array */ 
    } 
    
    for ( i = 0 ; i <= 5 ; i++ ) 
    sum = sum + marks[i] ; /* read data from an array*/ 
    avg = sum / 6 ; 
    
    printf ( "\nAverage marks = %d", avg ) ; 
}
