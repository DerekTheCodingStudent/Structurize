#include <iostream>
#include <fstream>
#include <string>

#include "extractFunctions.h"

using namespace std;

int main(int argc, char* argv[]) {

    FILE *file = fopen("main.yaml","r");

    char *line = NULL;
    size_t buffer = 10;

    while(getline(&line, &buffer, file) != -1) {
        if(line[0] != ' ') {
            cout << line;
        }
    }

    free(line);
    fclose(file);

    printEnums();
    cout << "\n";
    return 0;
}