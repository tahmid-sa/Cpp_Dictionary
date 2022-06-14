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
    vector<int> v1 = {1, 5, 2, 8, 1};
    vector<int> v2;
    
    remove_if(v1.begin(), v1.end(), [](int i){return i % 2;});
    remove_copy_if(v1.begin(), v1.end(), back_inserter(v2), [](int i){return i % 2;});

    // Printing
    for (auto &c: v1) {
        cout << c << endl;
    }
    cout << endl;

    for (auto &c: v2) {
        cout << c << endl;
    }
    cout << endl;

    return 0;
}