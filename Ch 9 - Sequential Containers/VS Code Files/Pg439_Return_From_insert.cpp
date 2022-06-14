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
    list<string> lst;
    auto iter = lst.begin();
    string word;

    while (cin >> word) {
        iter = lst.insert(iter, word);
    }

    return 0;
}