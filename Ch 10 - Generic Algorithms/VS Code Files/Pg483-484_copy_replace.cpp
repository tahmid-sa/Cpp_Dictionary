#include <iostream>

#include <vector>
#include <list>
#include <forward_list>
#include <stack>
#include <queue>
#include <deque>

#include <array>
#include <string>

#include <algorithm>
#include <numeric>
#include <iterator>

using namespace std;

int main(void) {
    int a1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int a2[sizeof(a1) / sizeof(*a1)];

    auto ret = copy(begin(a1), end(a1), a2);

    // Printing
    for (auto &c : a1) {
        cout << c << endl;
    }
    cout << endl;

    for (auto &c : a2) {
        cout << c << endl;
    }
    cout << endl;

    // Pg 484 parts
    list<int> ilist = {0, 5, 6};
    vector<int> ivec = {1, 2, 3};

    replace(ilist.begin(), ilist.end(), 0, 42);
    replace_copy(ilist.cbegin(), ilist.cend(), back_inserter(ivec), 42, 22);

    // Printing
    for (auto &c : ilist) {
        cout << c << endl;
    }
    cout << endl;

    for (auto &c : ivec) {
        cout << c << endl;
    }
    cout << endl;

    return 0;
}