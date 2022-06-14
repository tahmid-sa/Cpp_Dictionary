#include <iostream>
#include <string>
#include <fstream> // Need to include fstream

using namespace std;

int main(void) {
    string ifile = "test.txt";
    string ifile2 = "test2.txt";

    ifstream in(ifile);
    ofstream out;
    out.open(ifile + ".copy");

    // Check that the open of out succeeded
    if (out) {
        // The open of out succeeded
    }

    // Close the file
    in.close();

    // Open another file
    in.open(ifile2);

    return 0;
}