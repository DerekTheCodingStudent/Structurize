#include "extractFunctions.h"
#include "utils.cpp"

void printEnums() {
    for(int i = ZERO; i <= SIX; i += 2) {
        cout << i << " ";
    }
}

void find(char* line, char needle) {
    int i = 0;

    while(line[i] != needle) {
        i++;
    }

    line[i] = '\0';
}

// Finds the length of a field before the semicolon and after the semicolon. 
// If after a semicolon, it has a '|', then it is a multi-line extraction.
bool find(char* line, int &lengthBeforeColon, int &lengthAfterColon, int &spaceCounter, char needle) {
    //int length = stringLength(line);
    int i = 0;
    /*
    for(int k = 0; k < length; k++) {
        printf("%d: %c\n", k, line[k]);
    }
    */

    // checks for how much spaces there is on a line.
    while(line[i] == ' ') {
        i++;
    }

    spaceCounter = i; 

    while(line[i] != needle) {
        i++;
    }

    lengthBeforeColon = i;
    int j = i;

    while(line[j] != '\0') {
        if(line[j] == '|') {
            return true;
        }

        j++;
    }

    lengthAfterColon = j-i;
    
    return false;
}