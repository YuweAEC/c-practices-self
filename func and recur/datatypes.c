#include<stdio.h>
#include<conio.h>
//code to understand chars signed and unsigned rolls in program

void main( ) 
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
    //code floats and double 
    char c ; 
    unsigned char d ; 
    int i ; 
    unsigned int j ; 
    short int k ; 
    unsigned short int l ; 
    long int m ; 
    unsigned long int n ; 
    float x ; 
    double y ; 
    long double z ; 
    /* char */ 
    scanf ( "%c %c", &c, &d ) ; 
    printf ( "%c %c", c, d ) ; 
    /* int */ 
    scanf ( "%d %u", &i, &j ) ; 
    printf ( "%d %u", i, j ) ; 
    /* short int */ 
    scanf ( "%d %u", &k, &l ) ; 
    printf ( "%d %u", k, l ) ; 
    /* long int */ 
    scanf ( "%ld %lu", &m, &n ) ; 
    printf ( "%ld %lu", m, n ) ; 
    /* float, double, long double */ 
    scanf ( "%f %lf %Lf", &x, &y, &z ) ; 
    printf ( "%f %lf %Lf", x, y, z ) ; 
}