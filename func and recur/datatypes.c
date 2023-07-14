#include<stdio.h>
#include<conio.h>
//code to understand chars signed and unsigned rolls in program 
int main( ) 
{ 
    char ch = 291 ; 
    char chr ; 
    unsigned char cht ; 
    
    printf ( "\n %d %c", ch, ch ) ;        
    
    for ( chr = 0 ; chr <= 255 ; chr++ ) 
    printf ( "\n%d %c", chr, chr ) ; 

    for ( cht = 0 ; cht <= 254 ; cht++ ) 
    printf ( "\n%d %c", cht, cht ) ; 
    printf ( "\n%d %c", cht, cht ) ; 
} 
