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
            find(line, ':');
            cout << line;
        } else {
            int beforeColon = -1;
            int afterColon = -1; // Should be -1 if there is a multi-line!
            int spaceCounter = -1;
            bool isMultiLine = find(line, beforeColon, afterColon, spaceCounter, ':');
            
            printf("\nbefore:%2d, after: %2d of the string:%s", beforeColon, afterColon, line);
            cout << "\nSpace counter: " << spaceCounter;
            // to avoid the Werror for now.
            if (isMultiLine) {
                continue;
            } 
        }
    }

    free(line);
    fclose(file);

    //printEnums();
    cout << "\n";
    return 0;
}