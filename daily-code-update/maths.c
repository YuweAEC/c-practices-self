#include<stdio.h>
#include<conio.h>

float addNumber(float a, float b);
float subtractNumber(float a, float b);
float multiplyNumber(float a, float b);
float divideNumber(float a, float b);

int main() // Main function of the program starts here
{
    float number1, number2;
    char choice;

    while (1) // Infinite loop to run the program until user exits the program using option 5 from the menu
    {
        printf("Enter the first number: ");
        scanf("%f", &number1);

        printf("Enter the second number: ");
        scanf("%f", &number2);

        printf("Choose an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Division\n");
        printf("4. Multiplication\n");
        printf("5. Exit\n");

        printf("Enter choice (1/2/3/4/5): ");   
        scanf(" %c", &choice); // Note the space before %c. This is to clear the input buffer (clear the newline character)

        switch (choice) // Switch case to perform the operation based on user input from the menu
        {
        case 'a':
            printf("Result: %f\n", addNumber(number1, number2));
            break;
        case 'b':
            printf("Result: %f\n", subtractNumber(number1, number2));
            break;
        case 'c':
            printf("Result: %f\n", divideNumber(number1, number2));
            break;
        case 'd':
            printf("Result: %f\n", multiplyNumber(number1, number2));
            break;
        case 'e':
            printf("Exiting the program.\n");
            return 0; // Return 0 to exit the program
        default:
            printf("Invalid choice\n");
            break; // Break statement to break out of the switch case
        }
    }

    return 0; // Return 0 to exit the program
}

float addNumber(float a, float b)
{
    return a + b;
}

float subtractNumber(float a, float b)
{
    return a - b;
}

float multiplyNumber(float a, float b)
{
    return a * b;
}

float divideNumber(float a, float b)
{
    if (b == 0)
    {
        printf("Error: Cannot divide by zero\n");
        return 0;
    }
    return a / b;
}
