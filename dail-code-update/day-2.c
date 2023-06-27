//groos salary
/*
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
*/
// nested if else using logical operators

#include <stdio.h>
#include <conio.h>

int main()
{
    int m1, m2, m3, m4, m5, per;
    
    printf("enter marks in five subjects");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    per=(m1+m2+m3+m4+m5)/500*100;

    if(per>=60)
    {
        printf("first division");
    }

    else
    {
        if (per>=50)
        {
            printf("second division");
        }

        else
        {
            if (per>=40)
            {
                printf("third division");
            }
            
            else
            {
                printf("fail");
            }
            
        }
        
    }
}

