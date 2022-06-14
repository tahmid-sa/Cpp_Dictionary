#include <iostream>

#include <vector>
#include <list>
#include <forward_list>
#include <stack>
#include <queue>
#include <deque>

#include <array>
#include <string>

#include <algorithm>
#include <numeric>
#include <iterator>

#include <functional>

using namespace std;
using namespace std::placeholders;

bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

// Pg 505 parts
ostream &print(ostream &os, const string &s, char c) {
    return os << s << c;
}

int main(void) {
    vector<string> words = {"hiii", "byeeee", "hiii", "bye"};
    int sz = 5;

    // Pg 504 parts
    sort(words.begin(), words.end(), isShorter);
    sort(words.begin(), words.end(), bind(isShorter, _2, _1));

    // Printing
    for (auto &c : words) {
        cout << c << endl;
    }
    cout << endl;

    // Pg 505 parts
    ostream &os = cout;
    char c = ' ';
    for_each(words.begin(), words.end(), [&os, c](const string &s){os << s << c;});
    cout << endl;
    
    for (auto &c : words) {
        print(cout, c, ' ');
    }
    cout << endl;
    
    for_each(words.begin(), words.end(), bind(print, ref(os), _1, ' '));

    return 0;
}