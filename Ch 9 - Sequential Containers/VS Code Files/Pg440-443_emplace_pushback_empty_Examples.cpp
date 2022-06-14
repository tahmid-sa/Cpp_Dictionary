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
    // Note a list is used instead of the Sales_data class

    list<int> c;
    auto iter = c.begin();

    c.emplace_back(1);
    c.push_back(2);
    c.push_back(3);

    c.emplace_back();
    c.emplace(iter, 5);
    c.emplace_front(6);

    // Pg 442 parts
    if (!c.empty()) {
        auto val = *c.begin(), val2 = c.front();
        auto last = c.end();
        auto val3 = *(--last);
        auto val4 = c.back();
    }

    // Pg 443 parts
    if (!c.empty()) {
        c.front() = 42;
        auto &v = c.back();
        v = 1024;
        auto v2 = c.back();
        v2 = 0;
    }

    // Printing the contents of the containers
    for (auto &v : c) {
        cout << v << " ";
    }
    cout << endl;


    return 0;
}