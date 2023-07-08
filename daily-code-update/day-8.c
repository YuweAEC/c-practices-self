#include<stdio.h>
#include<conio.h>

/*topic: return type of a functon
ptoblem: square of a number using a function
*/

float square(float);

void main()
{
    float a, b;
    printf("\nEnter any number ");
    scanf("%f", &a);
    b = square(a);
    printf("\nSquare of %f is %f", a, b);
}
float square(float x)
{
    float y;
    y = x * x;
    return (y);
}

