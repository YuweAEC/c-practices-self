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

#include <math.h>
#include <stdio.h>

// A function to print all prime factors of a given number n
void primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        printf("%d ", 2);
        n = n / 2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        printf("%d ", n);
}

/* Driver program to test above function */
int main()
{
    int n = 315;
    primeFactors(n);
    return 0;
}
