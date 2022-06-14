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
    auto f2 = [&v1]{return v1;};
    v1 = 0;
    auto j = f2();

    return 0;
}
