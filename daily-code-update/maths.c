#include <stdio.h>
#include<conio.h>

int main() 
{
    float number1,number2;
    char choice;

    printf("Enter the first number: ");
    scanf("%f", &number1);

    printf("Enter the second number: ");
    scanf("%f", number2);

    printf("Choose an operation:\n");
    printf("a. Addition\n");
    printf("b. Subtraction\n");
    printf("c. Division\n");
    printf("d. Multiplication\n");

    printf("Enter choice (a/b/c/d): "); // ask user to enter choice
    scanf(" %c", &choice); // read the choice

    //menu driven program using switch case

    switch (choice) // switch statement to perform addition, subtraction, multiplication and division based on choice entered by user
    {
        case 'a':  // addition
            printf("Result: %f\n", addNumber(number1,number2));
            break;      // break out of switch statement
        case 'b':  // subtraction
            printf("Result: %f\n", subtractNumber(number1,number2));
            break;
        case 'c': // division
            printf("Result: %f\n", divideNumber(number1,number2));
            break;
        case 'd': //    multiplication
            printf("Result: %f\n", multiplyNumber(number1,number2));
            break;
        default: // invalid choice
            printf("Invalid choice\n");
            break;
    }
    return 0; // return 0 to operating system
}

// Function to addNumber two numbers

float addNumber(float a, float b) 
{
    return a + b;
}

// Function to subtractNumber two numbers

float subtractNumber(float a, float b) 
{
    return a - b;
}


// Function to multiplyNumber two numbers

float multiplyNumber(float a, float b) 
{
    return a * b;
}

// Function to divideNumber two numbers

float divideNumber(float a, float b) 
{
    if (b == 0) 
    {
        printf("Error: Cannot divideNumber by zero\n");
        return 0;
    }
    return a / b;
}
