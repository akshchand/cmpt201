#include <stdio.h>
#include <string.h> // need for strlen, strcmp, strchr
#include <stdlib.h> // need for atoi

int main(int argc, char *argv[]) {
    char *filename = argv[1]; // get file name
    FILE *file = fopen(filename, "r"); // open file in read mode
    int filenameLen = strlen(filename); // store length of filename
    char line[100]; // var to store lines in file

    if (!(filenameLen > 4 && strcmp(filename + filenameLen - 4, ".dat") == 0)) { // check if filename contains '.dat'
        printf("file not valid\n"); // inform user that the file is not valid
        return 0; // exit
    }

    fgets(line, sizeof(line), file); // read and ignore first line
    fgets(line, sizeof(line), file); // read second line
    int numEntries = atoi(line); // convert second line to int and store

    for (int i = 0; i < numEntries; i++) { // loop through each entry
        fgets(line, sizeof(line), file); // reads each line
        char *comma = strchr(line, ','); // finds comma in each line

        if (comma != NULL) { // runs only if comma exists
            *comma = '\0'; // spit string at comma
            int firstNum = atoi(line); // stores first num, but is not used
            int secondNum = atoi(comma + 1); // stores second num, but is not used
        } else { // if comma does not exist
            printf("file not valid\n"); // inform user that the file is invalid
            fclose(file); // close file
            return 0; // exit
        }
    }

    fclose(file); // close file
    printf("file valid\n"); // inform user that the file is valid
    return 0;
}