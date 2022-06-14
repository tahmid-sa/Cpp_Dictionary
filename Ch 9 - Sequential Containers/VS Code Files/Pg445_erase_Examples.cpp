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
    list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto it = lst.begin();

    while (it != lst.end()) {
        if (*it % 2) {
            it = lst.erase(it);
        }
        else {
            ++it;
        }
    }

    // Pg 445 later parts
    list<int> slist = {1, 2, 3, 4};
    auto elem1 = ++slist.begin();
    auto elem2 = --slist.end();
    elem1 = slist.erase(elem1, elem2);

    // Printing the contents of the containers
    for (auto &c : slist) {
        cout << c << " ";
    }
    cout << endl;

    // Pg 445 end part
    slist.clear();
    slist.erase(slist.begin(), slist.end());

    return 0;
}