// ocunt upc and lwc and other characters

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int chr;
    int uppercase_ctr = 0, lowercase_ctr = 0, other_ctr = 0;
    printf("\nInput characters: On Linux systems and OS X EOF is CTRL+D. For Windows EOF is CTRL+Z.\n");
    while ((chr = getchar()) != EOF)
    {
        if (isupper(chr))
            uppercase_ctr++;
        else if (islower(chr))
            lowercase_ctr++;
        else
            other_ctr++;
    }

    printf("\nUppercase letters: %d\n", uppercase_ctr);
    printf("Lowercase letters: %d\n", lowercase_ctr);
    printf("Other characters: %d\n", other_ctr);
    return 0;
}
