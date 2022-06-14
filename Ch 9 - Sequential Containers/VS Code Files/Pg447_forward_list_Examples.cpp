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
    forward_list<int> flist = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto prev = flist.before_begin();
    auto curr = flist.begin();

    while (curr != flist.end()) {
        if (*curr % 2) {
            curr = flist.erase_after(prev);
        }
        else {
            prev = curr;
            ++curr;
        }
    }

    // Printing
    for (auto &c : flist) {
        cout << c << " ";
    }

    return 0;
}