#include <stdio.h>
#include <ctype.h> // need for islower
#include <string.h> // need for strlen, strstr, strcmp
#include <stdlib.h> // need for atoi

// checks if given lab number is 2 digits and between 0-13
int checkLabNumber(char *labNumber) {
    if (strlen(labNumber) != 2) { // check if lab number is 2 digits
        return 0; // exit
    }

    int newlabNumber = atoi(labNumber); // convert string into int

    if (newlabNumber >= 0 && newlabNumber <= 13) { // check if number is between 0-13
        return 1; // returns 1 for valid lab number
    } else {
        return 0; // if the number is not valid, exit
    }
    return 0; // exit
}

// checks if given text is lowercase
int isLowercase(const char *str) {
    for (int i =0; str[i]; i++) { // loops for each letter
        if (!islower(str[i])) { // check if letter is lowercase
            return 0; // exit
        }
    }
    return 1; // returns if given text is lowercase
}

int main (int argc, char *argv[]) {

    char *filename = argv[1]; // store given filename
    char *text1 = "cmpt201_";
    char *text2 = ".tar.gz";
    char *text3 = "lab";

    if (strncmp(filename, text1, strlen(text1)) !=0) { // checks if the first text is correct
        printf("rename before submitting\n"); // inform user to rename file
        return 0; // exit
    }

    if (strlen(filename) < strlen(text2) || strcmp(filename + strlen(filename) - strlen(text2), text2) != 0) { // checks if second text is correct
            printf("rename before submitting\n"); // inform user to rename file
            return 0; // exit
        }

    char *labPos = strstr(filename, text3); // check for 'lab' text in the filename
    if (!labPos) { // checks if the position is NULL
        printf("rename before submitting\n"); // inform user to rename file
        return 0; // exit
    }

    char newlabNumber[3] = {0}; // store only 3 digits and null terminate
    strncpy(newlabNumber, labPos + strlen(text3), 2); // extract lab number from filename and store

    if (!checkLabNumber(newlabNumber)) { // Check if the lab number is valid, using the checkLabNumber function
        printf("rename before submitting\n"); // inform user to rename file
        return 0; // exit
    }

    printf("good to submit\n"); // inform user the given file name follows the required criteria

    return 0; // exit
}