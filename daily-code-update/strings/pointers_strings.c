#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

void arrayPointers();
void stringPointers();

int main()
{
    arrayPointers();
    stringPointers();
    return 0;
}
// program  to illustrate the use of pointers with arrays and strings.  
void arrayPointers( ) 
{ 
    char name[ ] = "Yuvraj Singh" ; 
    char *ptr ; 
    
    ptr = name ; /* store base address of string */ 
    
    while ( *ptr != '\0' ) 
    { 
        printf ( "%c", *ptr ) ; 
        ptr++ ; 
    } 
} 

void stringPointers( ) 
{ 
    char str1[ ] = "Hello" ; 
    char str2[20] ; 
    char *s = "Good Morning" ; 
    char *q ; 
    q = s ; /* works */ 
} 
