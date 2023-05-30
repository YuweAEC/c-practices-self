/*
#include<stdio.h>

void formain();

void main()
{
    formain();
}

void formain()
{
    printf("Learning C programing once again");
    main();
}
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int avg, sum = 0;
    int i;
    int marks[5]; /* array declaration */
    
    for (i = 0; i <= 4; i++)
    {
        printf("\nEnter marks ");
        scanf("%d", &marks[i]); /* store data in array */
    }
    
    for (i = 0; i <= 4; i++)
        sum = sum + marks[i]; /* read data from an array*/
    avg = sum / 5;
    printf("\nAverage marks = %d", avg);
}

/**
 * 28 -> take 30 marks input from the user
 * 29 -> display the avg of the marks
 */