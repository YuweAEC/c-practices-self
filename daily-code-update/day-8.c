#include<stdio.h>
#include<conio.h>
#define AND &&
#define OR ||

void main()
{
    int f = 1, x = 4, y = 90;
    
    if ((f < 5) AND(x <= 20 OR y <= 45))
        printf("\nYour PC will always work fine...");
    
    else
        printf("\nIn front of the maintenance man");
}

#define AND &&
#define ARANGE (a > 25 AND a < 50)

void main()
{
    int a = 30;
    if (ARANGE)
        printf("within range");
    else
        printf("out of range");
}

#define FOUND printf("The Yankee Doodle Virus");

void main()
{
    char signature;
    if (signature == 'Y')
        FOUND
    else
        printf("Safe... as yet !");
}
