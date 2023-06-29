// // ocunt upc and lwc and other characters

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     int chr;
//     int uppercase_ctr = 0, lowercase_ctr = 0, other_ctr = 0;
//     printf("\nInput characters: for other interface is CTRL+D. For Windows is CTRL+Z.\n");
//     while ((chr = getchar()) != EOF)
//     {
//         if (isupper(chr))
//             uppercase_ctr++;
//         else if (islower(chr))
//             lowercase_ctr++;
//         else
//             other_ctr++;
//     }

//     printf("\nUppercase letters: %d\n", uppercase_ctr);
//     printf("Lowercase letters: %d\n", lowercase_ctr);
//     printf("Other characters: %d\n", other_ctr);

//     return 0;
// }


// C Program to print all prime factors
// of a number using nested loop

// #include <math.h>
// #include <stdio.h>

// // A function to print all prime factors of a given number n
// void primeFactors(int n)
// {
//     // Print the number of 2s that divide n
//     while (n % 2 == 0)
//     {
//         printf("%d ", 2);
//         n = n / 2;
//     }

//     // n must be odd at this point. So we can skip
//     // one element (Note i = i +2)
//     for (int i = 3; i <= sqrt(n); i = i + 2)
//     {
//         // While i divides n, print i and divide n
//         while (n % i == 0)
//         {
//             printf("%d ", i);
//             n = n / i;
//         }
//     }

//     // This condition is to handle the case when n
//     // is a prime number greater than 2
//     if (n > 2)
//         printf("%d ", n);
// }

// /* Driver program to test above function */
// int main()
// {
//     int n = 315;
//     primeFactors(n);
//     return 0;
// }

#include<stdio.h>
#include<conio.h>

// Function to check if a number is even or odd

int isEven(int num)
{
    if (num % 2 == 0)
    {
        return 1; // Even
    }
    else
    {
        return 0; // Odd
    }
}

// Function to perform a nested loop and if-else logic

void nestedLoopWithIfElse(int rows, int cols)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (isEven(i) && isEven(j))
            {
                printf("(%d, %d) - Even\n", i, j);
            }
            else if (!isEven(i) && !isEven(j))
            {
                printf("(%d, %d) - Odd\n", i, j);
            }
            else
            {
                printf("(%d, %d)\n", i, j);
            }
        }
    }
}

// Function to get user input for number of rows and columns

void getUserInput(int *rows, int *cols)
{
    printf("Enter the number of rows: ");
    scanf("%d", rows);

    printf("Enter the number of columns: ");
    scanf("%d", cols);
}

int main()
{
    int rows, cols;

    getUserInput(&rows, &cols);

    nestedLoopWithIfElse(rows, cols);

    return 0;
}

