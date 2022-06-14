#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>

using namespace std;

int main(void) {
    vector<int> ivec(10, -1);
    list<string> svec(10, "hi!");
    forward_list<int> ilist(10);
    deque<string> sdeq(10);

    // Printing contents of containers
    for (auto &c : ivec) {
        cout << c << " ";
    }

    cout << endl;

    for (auto &c : svec) {
        cout << c << " ";
    }

    cout << endl;

    for (auto &c : ilist) {
        cout << c << " ";
    }

    cout << endl;

    for (auto &c : sdeq) {
        cout << c << " ";
    }

    cout << endl;

    return 0;
}