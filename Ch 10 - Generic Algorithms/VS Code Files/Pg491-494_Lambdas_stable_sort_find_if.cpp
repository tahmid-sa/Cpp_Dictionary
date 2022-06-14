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

void biggies(vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);

    stable_sort(words.begin(), words.end(), [](const string &a, const string &b){return a.size() < b.size();});

    auto wc = find_if(words.begin(), words.end(), [sz](const string &a){return a.size() >= sz;});

    // count and plural code is not used here

    for_each(wc, words.end(), [](const string &s){cout << s << " ";});
}

int main(void) {
    vector<string> words = {"hiii", "byeeee", "hiii", "bye"};
    int sz = 5;

    stable_sort(words.begin(), words.end(), [](const string &a, const string &b) -> bool {return a.size() < b.size();});

    // Printing
    for (auto &c : words) {
        cout << c << endl;
    }
    cout << endl;

    // Pg 492 parts
    auto wc = find_if(words.begin(), words.end(), [sz](const string &a) -> bool {return a.size() >= sz;});

    // Printing
    for (auto &c : words) {
        cout << c << endl;
    }
    cout << endl;

    // Pg 493 parts
    for_each(wc, words.end(), [](const string &s){cout << s << " ";});

    // Pg 494 parts is in the function biggies
    biggies(words, sz);

    return 0;
}