#include<stdio.h>
#include<conio.h>

int add15(int x){
    return add10(add5(x));
}

int add5(int y){
    return y+=5;
}

int add10(int x){  // func defination
    return x+=10;
}

void practice(int a)
{
    if (a >= 60)
    {
        printf("Pass\n");
    }
    else
    {
        printf("fail\n");
    }
}
void main()
{
    int a,b,t;
    t=&b;
    
    printf(a);//  printf("%d\n", &a);
    printf("Enter a number/marks:-");
    scanf("%d", &a);

    printf("\n Address of a=%u", &a);
    printf("\n Address of b=%u", &b);

    practice(a); // func invocation or calling a func
    b=add10(a);
    b=add10(add5(30));
    printf(b); // output is
    printf("Value in t=%dz", *t);
    printf(add10(add5(b)));
    printf(add15(25));
    printf(add10(add5)); // > type mismatch
    printf("\n Address of a=%u", &a);
    printf("\n Address of b=%u", &b);
}

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

 