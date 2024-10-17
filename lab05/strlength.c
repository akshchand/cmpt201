#include <stdio.h>

int main(int temp, char *word[]) 
{
    int length = 0; // initialize counter

    while (word[1][length] != '\0') { // loop through each character
        length++; // each loop adds 1 to the counter
    }

    printf("The length of %s is %d.\n", word[1], length); // print output to user

    return 0; // exit
}
