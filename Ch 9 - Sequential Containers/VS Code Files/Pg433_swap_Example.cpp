#include <iostream>
#include <string>

#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>
#include <string>

using namespace std;

int main(void) {
    vector<string> svec1(10);
    vector<string> svec2(24);
    swap(svec1, svec2);

    // Printing the contents of the containers
    for (auto &c : svec1) {
        cout << c << " ";
    }

    cout << endl;

    for (auto &c : svec2) {
        cout << c << " ";
    }

    cout << endl;

    return 0;
}