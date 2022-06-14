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
    vector<int> vec = {1, 3, 5, 7};
    ostream_iterator<int> out_iter(cout, " ");

    for (auto e : vec) {
        *out_iter++ = e;
    }
    cout << endl;

    // Pg 512 parts
    copy(vec.begin(), vec.end(), out_iter);
    cout << endl;

    return 0;
}