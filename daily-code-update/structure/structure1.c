#include <stdio.h>
#include <conio.h>

void structureElements( );

int main()
{
    structureElements();
    return 0;
}

/* Memory map of structure elements */ 
void structureElements( ) // program to print the memory map of structure elements 
{ 
    struct book // structure declaration 
    { 
        char name ; 
        float price ; 
        int pages ; 
    } ; 
    struct book b1 = { 'B', 130.00, 550 } ; // structure variable initialization 
    
    printf ( "\nAddress of name = %u", &b1.name ) ; 
    printf ( "\nAddress of price = %u", &b1.price ) ; 
    printf ( "\nAddress of pages = %u", &b1.pages ) ; 
} // end of program 