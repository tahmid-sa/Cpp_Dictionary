#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(void) {
    fstream fileTest;
    fileTest.open("test.txt");
    stringstream fileTestStr;
    string s;

    fileTestStr << fileTest.rdbuf();
    s = fileTestStr.str();

    cout << s;

    fileTest.close();

    return 0;
}