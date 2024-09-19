#include "utils.h"

// finds the length of the string
int stringLength(char* string) {
    int i = 0;

    while(string[i] != '\0') {
        i++;
    }

    return i;
}
