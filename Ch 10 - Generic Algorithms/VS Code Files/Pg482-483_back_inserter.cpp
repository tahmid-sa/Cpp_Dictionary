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
    vector<int> vec;
    auto it = back_inserter(vec);
    *it = 42;

    // Printing
    for (auto &c : vec) {
        cout << c << endl;
    }
    cout << endl;

    // Pg 483 parts
    vector<int> vec2;
    fill_n(back_inserter(vec2), 10, 0);

    // Printing
    for (auto &c : vec2) {
        cout << c << endl;
    }
    cout << endl;

    return 0;
}