#include <stdio.h>
#include <math.h> // need for sin and log functions
#include "trig.h" // need for n
#include "math_constants.h" // need for pi

int main(void)
{
    double q = sin(N * PI) + cos(N * PI) + cos((N * PI) /2); // calculate for q using the given formula

    printf("The value of q is %.16f\n", q); // print value of q

    return 0; // exit function
}