#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define FOUND 1 
#define NOTFOUND 0

void characterArray();

int main()
{
    characterArray();
    return 0;
}

void characterArray( ) 
{ 
    char masterlist[6][10] = 
    { 
        "yuvraj", 
        "yasshika", 
        "pawan", 
        "gungun", 
        "hrishav", 
        "nill" 
    } ; 
    
    int i, flag, a ; 
    char yourname[10] ; 
    
    printf ( "\nEnter your name " ) ; 
    scanf ( "%s", yourname ) ; 
    
    flag = NOTFOUND ; 
    
    for ( i = 0 ; i <= 5 ; i++ ) 
    { 
        a = strcmp ( &masterlist[i][0], yourname ) ; 
        
        if ( a == 0 ) 
        { 
            printf ( "Welcome, you can enter the palace" ) ; 
            flag = FOUND ; 
            break ; 
        } 
    } 

    if ( flag == NOTFOUND ) 
    printf ( "Sorry, you are a trespasser" ) ; 
}