#include <stdio.h>
#include<conio.h>
#include<string.h>
//initialise 4x3 array

//int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

//int arr[6]={1,2,3,4,5,6};

//int x[2][4]={{1,2,3,4},{5,6,7,8}};

//char x[7][5]={{,,,,},{,,,,},{,,,,},{,,,,},{,,,,},{,,,,},{,,,,}};

void main() 
{
    char x[3][2] = {{'a','b'},{'c','d'},{'e','f'}};
    char y[3][2] = {"ab","cd","ef"};
    char t[3] = "abc";
    char s[3] = {'a','b','c'};
    printf("%c",x[2][0]);
    printf("\n%c",y[2][0]);
    printf("%c",y);
    int a = 2;
    printf("\n%p",a);
}

// line no 10,17 and 23 draw the memory address diagram  