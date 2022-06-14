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
    array<int, 10> a1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    array<int, 10> a2 = {0};
    a1 = a2;
    // a2 = {0}; error

    // Printing the contents in the containers
    for (auto &c : a1) {
        cout << c << " ";
    }
    
    cout << endl;

    for (auto &c : a2) {
        cout << c << " ";
    }

    cout << endl;

    return 0;
}