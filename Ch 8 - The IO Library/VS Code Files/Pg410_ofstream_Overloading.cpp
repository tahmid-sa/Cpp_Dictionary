#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
    ofstream out("file1.txt");
    ofstream out2("file1.txt", ofstream::out);
    ofstream out3("file1.txt", ofstream::out | ofstream::trunc);

    ofstream app("file2.txt", ofstream::app);
    ofstream app2("file2.txt", ofstream::out | ofstream::app);

    return 0;
}