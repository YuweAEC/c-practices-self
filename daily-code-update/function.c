#include <stdio.h>
#include <conio.h>
#define UPPER 50
#define PRINTNAME printf("\nYuvi");
#define ADD5(int) {return a + 5};
#define AND &&
#define OR ||
#define ARANGE (a > 25 AND a < 50)
#define FOUND printf("The Yankee Doodle Virus");

void func1();
void func2();
void func3();
void func4();

void main()
{
    func1();
    func2();
    func3();
    func4();
}

int add5(int);

void func1()
{
    int x, y;
    printf("%d", UPPER);

    PRINTNAME;

    x = add5(5);
    y = add5(100);
    printf("\n%d", x);
    printf("\n%d", y);
}

int add5(int a) { return a + 5; }

void func2()
{
    int f = 1, x = 4, y = 90;

    if ((f < 5) AND(x <= 20 OR y <= 45))
        printf("\nYour PC will always work fine...");

    else
        printf("\nIn front of the maintenance man");
}


void func3()
{
    int a = 30;
    if (ARANGE)
        printf("\nwithin range");
    else
        printf("out of range");
}

void func4()
{
    char signature;
    if (signature == 'Y')
        FOUND
    else
        printf("\nSafe... as yet !");
}


