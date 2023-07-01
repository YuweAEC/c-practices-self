// #include<stdio.h>
// #include<conio.h>

// int add15(int x){
//     return add10(add5(x));
// }

// int add5(int y){
//     return y+=5;
// }

// int add10(int x){  // func defination
//     return x+=10;
// }

// void practice(int a)
// {
//     if (a >= 60)
//     {
//         printf("Pass\n");
//     }
//     else
//     {
//         printf("fail\n");
//     }
// }
// void main()
// {
//     int a,b,t;
//     t=&b;
    
//     printf(a);//  printf("%d\n", &a);
//     printf("Enter a number/marks:-");
//     scanf("%d", &a);

//     printf("\n Address of a=%u", &a);
//     printf("\n Address of b=%u", &b);

//     practice(a); // func invocation or calling a func
//     b=add10(a);
//     b=add10(add5(30));
//     printf(b); // output is
//     printf("Value in t=%dz", *t);
//     printf(add10(add5(b)));
//     printf(add15(25));
//     printf(add10(add5)); // > type mismatch
//     printf("\n Address of a=%u", &a);
//     printf("\n Address of b=%u", &b);
// }

/*
30 => a = 7
31 => b = 17 , a = 7
32 => a = 7 , b = add10(35) > 45
33 => a = 7 , b = 45
34 => add10(add5(b)) > add10(add5(45)) > add10(50) > 60
39 => add15(25)
              4 => x = 25 ,
              5 => add10(add5(25)) > add10(30) > 40
      add15(25) > 40 


 *to wirte a new code with add10 calling another func add5
 and to make a new func add(10+5) and return  its value inside add10
*/

// sending and receiving values between the functions


#include<stdio.h>
#include<conio.h>


int main()
{
    int a, b, c, sum;

    printf("\n Enter any three numbers :-");
    scanf("%d %d %d", &a, &b, &c);

    sum = calsum(a, b, c);

    printf("\n Sum= %d", sum);      
} 

int calsum(x, y, z)
int x, y, z;
{
    int d;

    d= x+y+z;
    return(d);
}

// #include <stdio.h>

// int isEven(int num);
// void nestloop(int rows, int cols);
// void userinput(int *rows, int *cols);

// int main()
// {
//     int rows, cols;

//     userinput(&rows, &cols);

//     nestloop(rows, cols);

//     return 0;
// }

// // Function to check if a number is even or odd
// int isEven(int num)
// {
//     if (num % 2 == 0)
//     {
//         return 1; // Even
//     }
//     else
//     {
//         return 0; // Odd
//     }
// }

// // Function to perform a nested loop and if-else logic
// void nestloop(int rows, int cols)
// {
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= cols; j++)
//         {
//             if (isEven(i) && isEven(j))
//             {
//                 printf("(%d, %d) - Even\n", i, j);
//             }
//             else if (!isEven(i) && !isEven(j))
//             {
//                 printf("(%d, %d) - Odd\n", i, j);
//             }
//             else
//             {
//                 printf("(%d, %d)\n", i, j);
//             }

//             // Add a condition to stop the infinite loop
//             if (i == rows && j == cols)
//             {
//                 return; // Exit the function
//             }
//         }
//     }
// }

// // Function to get user input for number of rows and columns
// void userinput(int *rows, int *cols)
// {
//     printf("Enter the number of rows: ");
//     scanf("%d", rows);

//     printf("Enter the number of columns: ");
//     scanf("%d", cols);
// }

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
