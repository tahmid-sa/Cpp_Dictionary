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
    string line = "hi, bye, hiiii, kdsafa";
    auto comma = find(line.cbegin(), line.cend(), ',');
    cout << string(line.cbegin(), comma) << endl;

    // Pg 515 later parts
    auto rcomma = find(line.crbegin(), line.crend(), ',');
    // cout << string(line.crbegin(), rcomma) << endl; error
    cout << string(rcomma.base(), line.cend()) << endl;

    return 0;
}