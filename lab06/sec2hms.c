#include <stdio.h>

int sec2hms(double* totalSec, int* hr, int* min, int* sec) 
{
    // error check the input parameters
    if (totalSec == NULL || hr == NULL || min == NULL || sec == NULL) {
        return 1; // returns 1 for error
    }

    int totalSeconds = (int)(*totalSec); // store input as int in new var to perform calculations

    *hr = totalSeconds / 3600;  // calculate hours
    int remainingSeconds = totalSeconds % 3600; // remove hours from total
    *min = remainingSeconds / 60;  // calculate minutes
    *sec = remainingSeconds % 60; // calculate seconds

    return 0; // returns 0 for success
}

int main(void) 
{
    // declare variables needed for test case
    double totalSec;
    int hr;
    int min;
    int sec;

    // test case 1 (500 seconds)
    totalSec = 500.0;
    if (sec2hms(&totalSec, &hr, &min, &sec) == 0) {
        printf("Test 1: %.0f seconds = %d hours %d minutes %d seconds\n", totalSec, hr, min, sec);
    } else {
        printf("Test 1: Error in input parameters\n");
    }

    // test case 2 (1,000 seconds)
    totalSec = 1000.0;
    if (sec2hms(&totalSec, &hr, &min, &sec) == 0) {
        printf("Test 2: %.0f seconds = %d hours %d minutes %d seconds\n", totalSec, hr, min, sec);
    } else {
        printf("Test 2: Error in input parameters\n");
    }

    // test case 3 (10,000 seconds)
    totalSec = 10000.0;
    if (sec2hms(&totalSec, &hr, &min, &sec) == 0) {
        printf("Test 3: %.0f seconds = %d hours %d minutes %d seconds\n", totalSec, hr, min, sec);
    } else {
        printf("Test 3: Error in input parameters\n");
    }

    return 0; // exit
}