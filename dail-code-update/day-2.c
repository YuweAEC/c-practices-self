//groos salary

#include<stdio.h>
#include<conio.h>

int main()
{
    float bs, gs, da, hra;

    printf("Enter basic salary");
    scanf("%f", &bs);
    
    if (bs<1500)
    {
        hra = bs*10/100;
        da = bs*90/100;
    }

    else
    {
        hra = 1000;
        da = bs*98/100;
    }

    gs = bs + hra + da ;
    printf("gross salary=Rs. %f", gs);
    
}