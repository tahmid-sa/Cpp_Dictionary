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
    list<int> lst = {1, 2, 3, 4};
    list<int> lst2, lst3;

    copy(lst.cbegin(), lst.cend(), front_inserter(lst2));
    copy(lst.cbegin(), lst.cend(), inserter(lst3, lst3.begin()));

    // Printing
    for (auto &c : lst) {
        cout << c << endl;
    }
    cout << endl;

    for (auto &c : lst2) {
        cout << c << endl;
    }
    cout << endl;

    return 0;
}