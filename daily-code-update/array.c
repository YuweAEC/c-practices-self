#include<stdio.h>
#include<conio.h>

int average();
int callByValue();

int main()
{
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            average();
            break;
        case 2:
            callByValue();
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}

// Demonstration of array

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

/* Demonstration of call by value */

int callByValue()
{ 
    int i ; 
    int marks[ ] = { 55, 65, 75, 56, 78, 78, 90 } ; 
    for ( i = 0 ; i <= 6 ; i++ ) 
    display ( marks[i] ) ; 
} 
display ( int m ) 
{ 
    printf ( "%d ", m ) ; 
}
