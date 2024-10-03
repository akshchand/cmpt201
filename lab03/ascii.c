#include <stdio.h>

int main(void)
{
    char input; // initialize variable to store user response

    printf("Please enter a single character : "); // instruct user
    scanf("%c", &input); // store user response
    printf("%c -> %d\n", input, input); // print the ASCII decimal number for the stored letter

    return 0;
}