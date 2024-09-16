#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {

    ifstream file("main.yaml");

    string line = "";

    while(getline(file, line)) {
        cout << line << endl;
    }

    file.close();

    return 0;
}