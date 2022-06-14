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
    size_t v1 = 42;
    auto f = [v1]{return v1;};
    auto j = f();
    v1 = 0;

    // Printing
    cout << j << endl;

    return 0;
}