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
    for_each(words.begin(), words.end(), [&os, c](const string &s){os << s << c;});
}

int main(void) {
    vector<string> words = {"hiii", "byeeee", "hiii", "bye"};
    int sz = 5;

    biggies(words, sz);

    return 0;
}