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
    list<int> ilist(10, 42);
    ilist.resize(15);
    ilist.resize(25, -1);
    ilist.resize(5);

    // Printing the contents of the containers
    for (auto &c : ilist) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}