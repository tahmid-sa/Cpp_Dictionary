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

using namespace std;

int main(void) {
    vector<int> vec = {1, 2, 3, 4, 5};

    fill(vec.begin(), vec.end(), 0);
    fill(vec.begin(), vec.begin() + vec.size() / 2, 10);

    // Printing
    for (auto &c : vec) {
        cout << c << endl;
    }
    cout << endl;
    
    // Pg 481-482 parts
    vector<int> vec2 = {1, 2, 5, 6, 7};
    auto dest = vec2.begin();

    fill_n(vec2.begin(), vec2.size(), 0);
    fill_n(dest, 4, 3);

    vector<int> vec3;
    // fill_n(vec3.begin(), 10, 0); error
    
    // Printing
    for (auto &c : vec2) {
        cout << c << endl;
    }
    cout << endl;
    

    return 0;
}