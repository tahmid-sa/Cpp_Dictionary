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

#include <functional>

using namespace std;
using namespace std::placeholders;

int main(void) {
    vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto r_iter = vec.crbegin(); r_iter != vec.crend(); ++r_iter) {
        cout << *r_iter << endl;
    }
    cout << endl;

    sort(vec.begin(), vec.end());

    // Printing
    for (auto &c : vec) {
        cout << c << endl;
    }
    cout << endl;

    sort(vec.rbegin(), vec.rend());

    // Printing
    for (auto &c : vec) {
        cout << c << endl;
    }
    cout << endl;

    return 0;
}