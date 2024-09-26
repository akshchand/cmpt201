#include <stdio.h>
#include <math.h> // need for log function

int main(void)
{
    int A = 5; // initialize variable as a positive integer
    float B = 1.5; // initialize variable as a float
    float D = 1.5; // initialize variable as a float

    D = log10(B) / log10(A); // calculate using the given formula and store value

    printf("The value of D is %f\n", D); // print value of D

    return 0; // exit function
}