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
    vector<int> c = {1, 2, 3, 4, 6};
    auto it = c.begin() + 1;

    it = c.insert(it, 100);
    ++it;

    // Printing
    cout << *it << endl << endl;;

    // Printing
    for (auto &c : c) {
        cout << c << endl;
    }

    return 0;
}