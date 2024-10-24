#include <stdio.h>

int stats(double* array, int* n, double* min, double* mean, double* max) 
{
    // error check input parameters
    if (array == NULL || n == NULL || min == NULL || mean == NULL || max == NULL || *n <= 0) {
        return 1; // return 1 for error
    }

    *min = array[0]; // initialize min
    *max = array[0]; // initialize max
    double sum = 0.0; // initialize sum

    for (int i = 0; i < *n; i++) { // loop through array
        if (array[i] < *min) { // compare and store min value
            *min = array[i];
        }
        if (array[i] > *max) { // compare and store max value
            *max = array[i];
        }
        sum += array[i]; // add each value into sum
    }

    *mean = sum / (*n); // calculate mean

    return 0; // return 0 for success
}

int main(void) 
{
    // initialize variables needed for test case
    double min;
    double mean;
    double max;

    // test case 1
    double array1[] = {0, -5, 3.5, 2.1, 8.0, -1.3};
    int n1 = sizeof(array1) / sizeof(array1[0]);

    if (stats(array1, &n1, &min, &mean, &max) == 0) {
        printf("Test 1: Min = %.1f, Mean = %.1f, Max = %.1f\n", min, mean, max);
    } else {
        printf("Test 1: Error in input parameters\n");
    }

    // test case 2
    double array2[] = {5, 1, 3, 2, 6, 9, 4, 0};
    int n2 = sizeof(array2) / sizeof(array2[0]);

    if (stats(array2, &n2, &min, &mean, &max) == 0) {
        printf("Test 2: Min = %.1f, Mean = %.1f, Max = %.1f\n", min, mean, max);
    } else {
        printf("Test 2: Error in input parameters\n");
    }

    // test case 3
    double array3[] = {9.2, 8.3, 2.1, -10.6, -9.1, 10.2};
    int n3 = sizeof(array3) / sizeof(array3[0]);

    if (stats(array3, &n3, &min, &mean, &max) == 0) {
        printf("Test 3: Min = %.1f, Mean = %.1f, Max = %.1f\n", min, mean, max);
    } else {
        printf("Test 3: Error in input parameters\n");
    }

    return 0; // exit
}