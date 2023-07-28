#include<stdio.h>
#include<conio.h>
#include<math.h> // For pow() function in divideNumber() function below 

float addNumber(float a, float b);
float subtractNumber(float a, float b);
float multiplyNumber(float a, float b);
float divideNumber(float a, float b);

int main() // Main function starts here 
{
    float number1, number2;
    char choice;

    while (1) // Infinite loop to run the program again and again
    {
        printf("Choose an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Division\n");
        printf("4. Multiplication\n");
        printf("5. Exit\n");

        printf("Enter choice (1/2/3/4/5): ");
        scanf(" %c", &choice); // Note the space before %c to consume the newline character

        switch (choice) // Switch case to perform the desired operation 
        {
        case '1': // Use '1' instead of 'a' for addition
            printf("Enter the first number: ");
            scanf("%f", &number1);

            printf("Enter the second number: ");
            scanf("%f", &number2);

            printf("Result: %f\n", addNumber(number1, number2));
            break;
        case '2': // Use '2' instead of 'b' for subtraction
            printf("Enter the first number: ");
            scanf("%f", &number1);

            printf("Enter the second number: ");
            scanf("%f", &number2);

            printf("Result: %f\n", subtractNumber(number1, number2));
            break;
        case '3': // Use '3'  for division
            printf("Enter the numerator: ");
            scanf("%f", &number1);

            printf("Enter the denominator (non-zero): ");
            scanf("%f", &number2);

            printf("Result: %f\n", divideNumber(number1, number2));
            break;
        case '4': // Use '4' for multiplication
            printf("Enter the first number: ");
            scanf("%f", &number1);

            printf("Enter the second number: ");
            scanf("%f", &number2);

            printf("Result: %f\n", multiplyNumber(number1, number2));
            break;
        case '5':
            printf("Exiting the program.\n");
            return 0;
        default:
            printf("Invalid choice\n");
            break;
        }
    }

    return 0; // Return 0 to indicate successful termination of program
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
        return NAN; // NAN represents "Not a Number" and is returned for an invalid division
    }
    return a / b;
}
