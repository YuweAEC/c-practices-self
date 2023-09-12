#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void arrayName();

int main()
{
    arrayName();
    return 0;
}

/* Exchange names using 2-D array of characters */ 

void arrayName( ) 
{ 
    char names[ ][10] = 
    { 
        "akshay", 
        "parag", 
        "raman", 
        "srinivas", 
        "gopal", 
        "rajesh" 
    } ; 
    
    int i ; 
    char t ; 
    
    printf ( "\nOriginal: %s %s", &names[2][0], &names[3][0] ) ; 
    
    for ( i = 0 ; i <= 9 ; i++ ) 
    { 
        t = names[2][i] ; 
        names[2][i] = names[3][i] ; 
        names[3][i] = t ; 
    } 
    printf ( "\nNew: %s %s", &names[2][0], &names[3][0] ) ; 
} 
