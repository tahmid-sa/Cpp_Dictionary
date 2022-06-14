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

    auto f = [v1]() mutable {return ++v1;};
    v1 = 0;
    auto j = f();

    // Printing
    cout << j << endl;

    // Pg 499 later parts
    v1 = 42;

    auto f2 = [&v1]() {return ++v1;};
    v1 = 0;
    j = f2();

    // Printing
    cout << j << endl;

    return 0;
}