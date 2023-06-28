#include <stdio.h>
#include<conio.h>

int main()
{
    int i, space, rows, k = 0, count = 0, count1 = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            printf("  ");
            ++count;
        }
        while (k != 2 * i - 1)
        {
            if (count <= rows - 1)
            {
                printf("%d ", i + k);
                ++count;
            }
            else
            {
                ++count1;
                printf("%d ", (i + k - 2 * count1));
            }
            ++k;
        }
        count1 = count = k = 0;
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>
// #include<conio.h>

// int main()
// {
//     int i, space, rows, k = 0, count = 0, count1 = 0;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; ++i)
//     {
//         for (space = 1; space <= rows - i; ++space)
//         {
//             printf("  ");
//             ++count;
//         }
//         while (k != 2 * i - 1)
//         {
//             if (count <= rows - 1)
//             {
//                 printf("%d ", i + k);
//                 ++count;
//             }
//             else
//             {
//                 ++count1;
//                 printf("%d ", (i + k - 2 * count1));
//             }
//             ++k;
//         }
//         count1 = count = k = 0;
//         printf("\n");
//     }
//     return 0;
// }


//pascals triangle


#include <stdio.h>
#include<conio.h>

int main()
{
    int rows, coef = 1, space, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
            printf("  ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
    return 0;
}
