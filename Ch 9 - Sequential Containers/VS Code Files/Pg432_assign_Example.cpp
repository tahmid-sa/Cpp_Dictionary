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
    list<string> names;
    vector<const char*> oldstyle = {"an", "the", "this"};
    // names = oldstyle; error
    names.assign(oldstyle.cbegin(), oldstyle.cend());

    list<string> slist1(1);
    slist1.assign(10, "Hiya!");

    // Printing the contents in the containers
    for (auto &c : names) {
        cout << c << " ";
    }

    cout << endl;

    for (auto &c : oldstyle) {
        cout << c << " ";
    }

    cout << endl;

    for (auto &c : slist1) {
        cout << c << " ";
    }

    cout << endl;

    return 0;
}