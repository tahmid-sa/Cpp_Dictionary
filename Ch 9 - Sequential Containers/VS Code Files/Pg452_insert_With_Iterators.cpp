#include <iostream>
#include <string>

#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>
#include <string>

using namespace std;

int main(void) {
    vector<int> v = {1, 2};
    auto begin = v.begin();
    auto end = v.end();

    while (begin != v.end()) {
        ++begin;
        begin = v.insert(begin, 42);
        ++begin;
    }

    // Printing the contents of the containers
    for (auto &c : v) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}