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
    list<string> slist;
    auto iter = slist.begin();

    slist.insert(iter, "Hello!");

    // Pg 438 second part examples
    vector<string> svec;
    //list<string> slist;

    slist.insert(slist.begin(), "Hello!");
    svec.insert(svec.begin(), "Hello!");

    // Pg 439 parts
    svec.insert(svec.end(), 10, "Anna");

    vector<string> v = {"quasi", "simba", "frollo", "scar"};
    slist.insert(slist.begin(), v.end() - 2, v.end());
    slist.insert(slist.end(), {"these", "words", "will", "go", "at", "the", "end"});
    slist.insert(slist.begin(), slist.begin(), slist.end());

    // Printing the contents of the containers
    for (auto &c : slist) {
        cout << c << " ";
    }
    cout << endl;

    for (auto &c : svec) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}