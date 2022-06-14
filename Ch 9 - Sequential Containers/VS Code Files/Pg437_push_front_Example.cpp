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
    list<int> ilist;

    for (size_t ix = 0; ix != 4; ++ix) {
        ilist.push_front(ix);
    }

    // Printing the contents of the containers
    for (auto &c : ilist) {
        cout << c << " ";
    }

    cout << endl;

    return 0;
}