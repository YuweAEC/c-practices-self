#include<stdio.h>
#include<conio.h>

//square of a number using function

void main()
{
    float a, b;
    printf("\nEnter any number ");
    scanf("%f", &a);
    b = square(a);
    printf("\nSquare of %f is %f", a, b);
}
void square(float x)
{
    float y;
    y = x * x;
    return (y);
}
