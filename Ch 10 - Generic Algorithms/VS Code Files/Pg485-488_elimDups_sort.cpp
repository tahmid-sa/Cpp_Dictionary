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

void elimDups(vector<string> &words) {
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

int main(void) {
    vector<string> words = {"hiii", "byeeee", "hiii", "bye"};

    elimDups(words);

    // Printing
    for (auto &c : words) {
        cout << c << endl;
    }
    cout << endl;

    // Pg 487-488 parts
    sort(words.begin(), words.end(), isShorter);

    // Printing
    for (auto &c : words) {
        cout << c << endl;
    }
    cout << endl;

    return 0;
}