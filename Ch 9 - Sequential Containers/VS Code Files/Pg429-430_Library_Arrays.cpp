#include <iostream>
#include <string>

#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

using namespace std;

int main(void) {
    // Pg 429 parts
    array<int, 42> iarr;
    array<string, 10> sarr;

    // Pg 430 parts
    array<int, 10>::size_type i;
    // array<int>::size_type j; error

    array<int, 10> ia1;
    array<int, 10> ia2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    array<int, 10> ia3 = {42};

    int digs[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int cpy[10] = digs; error
    array<int, 10> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    array<int, 10> copy = digits;

    // Printing the contents in the containers and arrays
    for (auto &c : ia1) {
        cout << c << " ";
    }

    cout << endl;

    for (auto &c : ia2) {
        cout << c << " ";
    }

    cout << endl;

    for (auto &c : ia3) {
        cout << c << " ";
    }

    cout << endl << endl;

    for (auto &c : digs) {
        cout << c << " ";
    }

    cout << endl;

    for (auto &c : digits) {
        cout << c << " ";
    }

    cout << endl;

    for (auto &c : copy) {
        cout << c << " ";
    }

    cout << endl;

    return 0;
}