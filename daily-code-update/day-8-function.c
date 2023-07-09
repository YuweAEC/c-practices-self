#include <stdio.h>
#include <conio.h>
#define UPPER 50
#define PRINTNAME printf("\nmacro1- Yuvi");
#define ADD5(int) {return a + 5};
#define AND &&
#define OR ||
#define ARANGE (a > 25 AND a < 50)
#define FOUND printf("The Yankee Doodle Virus");

void macro1();
void macro2();
void macro3();
void macro4();

void main()
{
    macro1();
    macro2();
    macro3();
    macro4();
}

int add5(int);

void macro1()
{
    int x, y;
    printf("%d", UPPER);

    PRINTNAME;

    x = add5(5);
    y = add5(100);
    printf("\nmacro1- %d", x);
    printf("\nmacro1- %d", y);
}

int add5(int a) { return a + 5; }

void macro2()
{
    int f = 1, x = 4, y = 90;

    if ((f < 5) AND(x <= 20 OR y <= 45))
        printf("\nmacro2- Your PC will always work fine...");

    else
        printf("\nIn front of the maintenance man");
}


void macro3()
{
    int a = 30;
    if (ARANGE)
        printf("\nmacro3- within range");
    else
        printf("out of range");
}

void macro4()
{
    char signature;
    if (signature == 'Y')
        FOUND
    else
        printf("\nmacro4- Safe... as yet !");
}


