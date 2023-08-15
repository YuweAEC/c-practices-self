#include <stdio.h>
#include<stdlib.h>
#include<conio.h>

// Function prototypes

void arrayAverage();
void callbyValue();
void displayValue(int);

int main()
{
    arrayAverage();
    callbyValue();
    return 0;
}

// Demonstration of array

void arrayAverage()
{
    int avg, sum = 0;
    int i;
    int marks[6]; // Array declaration

    for (i = 0; i < 6; i++)
    {
        printf("Enter marks: ");
        scanf("%d", &marks[i]); // Store data in array
    }

    for (i = 0; i < 6; i++)
        sum += marks[i]; // Read data from the array

    avg = sum / 6;

    printf("Average marks = %d\n", avg);
}

// Demonstration of call by value

void callbyValue()
{
    int i;
    int marks[] = {55, 65, 75, 56, 78, 78, 90};

    for (i = 0; i < 7; i++)
        displayValue(marks[i]);
}

void displayValue(int n)
{
    printf("%d\t", n);
}