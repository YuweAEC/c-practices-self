#include<stdio.h>
#include<conio.h>

// loops to print ASCII value 

int main() 
{
    char ch = 291;
    char chr;
    unsigned char cht;

    printf("\n%d %c", ch, ch);

    for (chr = 0; chr <= 255; chr++) {
        printf("\n%d %c", chr, chr);
    }

    for (cht = 0; cht <= 254; cht++) {
        printf("\n%d %c", cht, cht);
    }
    printf("\n%d %c", cht, cht);

// Code for input/output operations with different variable types

    char c;
    unsigned char d;
    int i;
    unsigned int j;
    short int k;
    unsigned short int l;
    long int m;
    unsigned long int n;
    float x;
    double y;
    long double z;

    /* char */
    scanf(" %c %c", &c, &d);
    printf("%c %c\n", c, d);

    /* int */
    scanf("%d %u", &i, &j);
    printf("%d %u\n", i, j);

    /* short int */
    scanf("%hd %hu", &k, &l);
    printf("%hd %hu\n", k, l);

    /* long int */
    scanf("%ld %lu", &m, &n);
    printf("%ld %lu\n", m, n);

    /* float, double, long double */
    scanf("%f %lf %Lf", &x, &y, &z);
    printf("%f %lf %Lf\n", x, y, z);

    return 0;
}
