#include <stdio.h>
#include<conio.h>
#include<string.h>

// program to illustrate the use of string library functions.
/*
int main( ) 
{ 
    char arr[ ] = "Bamboozled" ; 
    int len1, len2 ; 
    len1 = strlen ( arr ) ; 
    len2 = strlen ( "Humpty Dumpty" ) ; 
    printf ( "\nstring = %s length = %d", arr, len1 ) ; 
    printf ( "\nstring = %s length = %d", "Humpty Dumpty", len2 ) ; 
}

int main( ) 
{ 
    char source[ ] = "Sayonara" ; 
    char target[20] ; 
    strcpy ( target, source ) ; 
    printf ( "\nsource string = %s", source ) ; 
    printf ( "\ntarget string = %s", target ) ; 
}

int main( )  // program to illustrate the use of strcat ( )
{ 
    char source[ ] = "Folks!" ; 
    char target[30] = "Hello" ; 
    strcat ( target, source ) ; 
    printf ( "\nsource string = %s", source ) ; 
    printf ( "\ntarget string = %s", target ) ; 
}

int main( ) 
{ 
    char string1[ ] = "Jerry" ; 
    char string2[ ] = "Ferry" ; 
    int i, j, k ; 
    i = strcmp ( string1, "Jerry" ) ; 
    j = strcmp ( string1, string2 ) ; 
    k = strcmp ( string1, "Jerry boy" ) ; 
    printf ( "\n%d %d %d", i, j, k ) ; 
} 
*/

/* using user defined string length function */ 

int lengthString(const char *s);
int stringCopy( char *t, char *s );

int main() 
{ 
    char arr[] = "Bamboozled"; 
    int len1, len2; 
    len1 = lengthString(arr); 
    len2 = lengthString("Humpty Dumpty"); 
    printf("\nstring = %s length = %d", arr, len1); 
    printf("\nstring = %s length = %d", "Humpty Dumpty", len2); 
    char source[ ] = "Sayonara" ; 
    char target[20] ; 
    stringCopy( target, source ) ; 
    printf ( "\nsource string = %s", source ) ; 
    printf ( "\ntarget string = %s", target ) ; 
}

int lengthString(const char *s) 
{ 
    int length = 0; 
    while (*s != '\0') 
    { 
        length++; 
        s++; 
    } 
    printf("\nLength = %d", length); 
}

// using user defined string copy function 

int stringCopy( char *t, char *s ) 
{ 
    while ( *s != '\0' ) 
    { 
        *t = *s ; 
        s++ ; 
        t++ ; 
    } 
    *t = '\0' ; 
} 

