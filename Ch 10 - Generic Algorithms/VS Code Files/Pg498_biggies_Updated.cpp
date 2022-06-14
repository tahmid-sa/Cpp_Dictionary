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

using namespace std;

void biggies(vector<string> &words, vector<string>::size_type sz, ostream &os = cout, char c = ' ') {
    // Update for Pg 498
    for_each(words.begin(), words.end(), [&, c](const string &s){os << s << c;});
    cout << endl;

    for_each(words.begin(), words.end(), [=, &os](const string &s){os << s << c;});
}

int main(void) {
    vector<string> words = {"hiii", "byeeee", "hiii", "bye"};
    int sz = 5;

    biggies(words, sz);

    return 0;
}