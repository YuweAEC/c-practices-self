#include <stdio.h>
#include<stdlib.h>
#include<conio.h>

// Function prototypes

void demonstrateArray();
void demonstrateCallByValue();
void displayValue(int value);

int main()
{
    int choice;
    
    while (1)
    {
        printf("\nEnter your choice:\n");
        printf("1. Demonstrate Array\n");
        printf("2. Demonstrate Call By Value\n");
        printf("3. Display Value\n");
        printf("4. Exit\n");
        scanf("\n%d", &choice);

        switch (choice)
        {
            case 1:
                demonstrateArray();
                break;
            case 2:
                demonstrateCallByValue();
                break;
            case 3:
                int value;
                printf("Enter a value: ");
                scanf("%d", &value);
                displayValue(value);
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

// Demonstration of array

void demonstrateArray()
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

void demonstrateCallByValue()
{
    int i;
    int marks[] = {55, 65, 75, 56, 78, 78, 90};

    for (i = 0; i < 7; i++)
        displayValue(marks[i]);
}

// Display function definition

void displayValue(int value)
{
    printf("%d ", value);
}
