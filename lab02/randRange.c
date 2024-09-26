#include <stdio.h>
#include <stdlib.h> // need for rand

int main(void)
{
    int R_min = 0; // define min number
    int R_max = 100; // define max number

    int r = R_min + rand() % (R_max - R_min + 1); // calculate a random number within the defined range

    printf("The random number within the range [%d, %d] is %d\n", R_min, R_max, r); // print r

    return 0; // exit function
}