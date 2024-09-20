#ifndef extractFunctions
#define extractFunctions

#include <iostream>
#include <fstream>

using namespace std;

enum spaces {
    ZERO=0,
    TWO=2,
    FOUR=4,
    SIX=6
};

void printEnums();

int spaceChecker(char* line);

void find(char* line, char needle);
bool find(char* line, int &lengthBeforeColon, int &lengthAfterColon, int &spaceCounter, char needle);

#endif