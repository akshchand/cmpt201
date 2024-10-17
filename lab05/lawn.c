#include <stdio.h>
#include <stdlib.h> // need for atof
#include <math.h>   // need for pow

int main(int temp, char *argv[]) 
{
    int max_iterations = 200; // initialize var
    double total = 0.0; // initialize var
    int k; // initialize var

    double x = atof(argv[1]); // convert user input into double

    if (x <= 0 || x > 1) { // error check. Ensure x is within the specified range
        printf("x must be in the range 0 < x <= 1.\n"); // inform user that x is not within range
        return 1; // exit
    }

    for (k = 1; k <= max_iterations; k++) { // perform calculation using given formula
        double term = pow(-1, k-1) * pow(x - 1, k) / k; // given formula
        total += term; // add loop value to total
    }

    printf("The ln(%f) value is %f\n", x, total); // output result to user

    return 0; // exit
}
