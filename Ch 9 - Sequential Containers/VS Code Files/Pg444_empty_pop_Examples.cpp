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
    list<int> ilist = {1, 2, 3};

    while (!ilist.empty()) {
        cout << ilist.front();
        ilist.pop_front();
    }

    return 0;
}