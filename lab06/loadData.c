#include <stdio.h>

int loadData(char* filename, int* stationNumber, double* temp, double* pres) 
{
    // error check input parameters
    if (filename == NULL || stationNumber == NULL || temp == NULL || pres == NULL) {
        return 1; // return 1 for error
    }

    FILE* file = fopen(filename, "r"); // open file

    int station; // used to store station value from file
    double pressure; // used to store pressure value from file
    double temperature; // used to store temperature value from file

    if (fscanf(file, "station: %d\n", &station) != 1 || // search for and store station value from file
        fscanf(file, "pressure [kPa] : %lf\n", &pressure) != 1 || // search for and store pressure value from file
        fscanf(file, "Temperature [C]: %lf\n", &temperature) != 1) { // search for and store temperature value from file
        fclose(file); // close file
        return 1; // return 1 for error
    }

    *stationNumber = station; // assign corresponding stored value to pointer
    *pres = pressure; // assign corresponding stored value to pointer
    *temp = temperature; // assign corresponding stored value to pointer

    fclose(file); // close file
    return 0; // return 0 for success
}

int main(void) 
{
    // initialize variables for test case
    int stationNumber;
    double temp;
    double pres;

    // test case 1
    if (loadData("data.dat", &stationNumber, &temp, &pres) == 0) {
        printf("Test 1(data.dat): Station: %d, Pressure: %.1f kPa, Temperature: %.1f C\n", stationNumber, pres, temp);
    } else {
        printf("Test 1(data.dat): Error in input parameters or while reading file\n");
    }

    // test case 2
    if (loadData("data2.dat", &stationNumber, &temp, &pres) == 0) {
        printf("Test 2(data2.dat): Station: %d, Pressure: %.1f kPa, Temperature: %.1f C\n", stationNumber, pres, temp);
    } else {
        printf("Test 2:(data2.dat) Error in input parameters or while reading file\n");
    }

    // test case 3
    if (loadData("data3.dat", &stationNumber, &temp, &pres) == 0) {
        printf("Test 3(data3.dat): Station: %d, Pressure: %.1f kPa, Temperature: %.1f C\n", stationNumber, pres, temp);
    } else {
        printf("Test 3(data3.dat): Error in input parameters or while reading file\n");
    }

    return 0; // exit
}