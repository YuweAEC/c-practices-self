#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// program to print the square of a number entered by the user. 
void gotoKeyword();
void gotoOut();

int main()
{
    gotoKeyword();
    gotoOut();
    return 0;
}

void gotoKeyword( ) 
{ 
    int goals ; 
    printf ( "Enter the number of goals scored against India" ) ; 
    scanf ( "%d", &goals ) ; 
    
    if ( goals <= 5 ) 
        goto sos ; 
    
    else 
    { 
        printf ( "About time soccer players learnt C\n" ) ; 
        printf ( "and said goodbye! adieu! to soccer" ) ; 
 /* terminates program execution */ 
    } 
    sos : 
    printf ( "To err is human!" ) ; 
}

void gotoOut( ) 
{ 
    int i, j, k ; 
    
    for ( i = 1 ; i <= 3 ; i++ ) 
    { 
        for ( j = 1 ; j <= 3 ; j++ ) 
        { 
            for ( k = 1 ; k <= 3 ; k++ ) 
            { 
            if ( i == 3 && j == 3 && k == 3 ) 
            goto out ; 
            else 
            printf ( "%d %d %d\n", i, j, k ) ; 
            } 
        } 
    } 
    out : 
    printf ( "Out of the loop at last!" ) ; 
} 