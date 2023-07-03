#include<stdio.h>
#include<conio.h>
#define UPPER 50
#define PRINTNAME printf("\nYuvi");
#define ADD5(int) { return a + 5};

int add5(int);

void main()
{
    int x,y;
    printf("%d",UPPER);

    PRINTNAME;

    x=add5(5);
    y=add5(100);
    printf("\n%d", x);
    printf("\n%d", y);
}

int add5(int a) {return a+5;}