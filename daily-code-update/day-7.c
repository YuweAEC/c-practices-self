#include<stdio.h>
#include<conio.h>
#define UPPER 50
#define PRINTNAME printf("\nYuvi");
#define ADD5 

int add5(int);

void main()
{
    int x;
    printf("%d",UPPER);

    PRINTNAME;

    x=add5(5);
    printf("\n%d",x);

}

int add5(int a)
{
    return a+5;
}