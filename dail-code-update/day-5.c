
#include <stdio.h>

void nestedLoopWithIfElse(int rows, int cols);

int main()
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    nestedLoopWithIfElse(rows, cols);

    return 0;
}

void nestedLoopWithIfElse(int rows, int cols)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i % 2 == 0 && j % 2 == 0)
            {
                printf("(%d, %d) - Even\n", i, j);
            }
            else if (i % 2 != 0 && j % 2 != 0)
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

