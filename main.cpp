#include <iostream>
#include <fstream>
#include <string>

#include "extractFunctions.h"
#include "dataStructures.h"

using namespace std;

/* Specifications for the .yaml file
Main headers: fields that doesn't have a space before the first character.
Sub headers: fields that are under a main header because they contain a space before the first character.
*/

int main(int argc, char* argv[]) {

    FILE *file = fopen("main.yaml","r");

    char *line = NULL;
    size_t buffer = 10;

    int currentSpaceCounter = -1;
    int previousSpaceCounter = -1;
    char *mainHeader = NULL;

    topicHeadersLL *headers = new topicHeadersLL;

    while(getline(&line, &buffer, file) != -1) {
        // If a line is just a newline, then it will cause alot of errors in valgrind. 
        // I don't want that to happen so I am getting a check against it.
        if(*line != '\n') {

            currentSpaceCounter = spaceChecker(line);
            
            // Main headers
            if(currentSpaceCounter == 0) {
                find(line, ':');
                mainHeader = line;
                cout << mainHeader << "\n";
            } else { // Sub headers
            
                // Multi-line extraction!
                if(previousSpaceCounter == currentSpaceCounter) {

                } else { // Single line extraction!

                }   


            }

            previousSpaceCounter = currentSpaceCounter;
            /*
            if(line[0] != ' ') {
                find(line, ':');
                cout << line;
            } else {
                int beforeColon = -1;
                int afterColon = -1; // Should be -1 if there is a multi-line!
                bool isMultiLine = find(line, beforeColon, afterColon, spaceCounter, ':');
                
                printf("\nbefore:%2d, after: %2d of the string:%s", beforeColon, afterColon, line);
                cout << "\nSpace counter: " << spaceCounter;
                // to avoid the Werror for now.
                if (isMultiLine) {
                    continue;
                } 
            }
            */
        }
    }
    
    free(line);
    fclose(file);

    //printEnums();
    cout << "\n";
    return 0;
}