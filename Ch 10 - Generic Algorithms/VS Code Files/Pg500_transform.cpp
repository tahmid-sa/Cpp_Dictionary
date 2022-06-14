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
    vector<int> vi = {1, 3, -5, 6, -8};

    transform(vi.begin(), vi.end(), vi.begin(), [](int i){return i < 0 ? -i : i;});

    // Printing
    for (auto &c : vi) {
        cout << c << endl;
    }
    cout << endl;

    // Pg 500 later parts
    transform(vi.begin(), vi.end(), vi.begin(), [](int i)->int {if (i < 0) return -i; else return i;});

    // Printing
    for (auto &c : vi) {
        cout << c << endl;
    }
    cout << endl;

    return 0;
}