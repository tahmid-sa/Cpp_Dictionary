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

int main(void) {
    vector<string> words = {"hiii", "byeeee", "hiii", "bye"};
    int sz = 5;

    auto wc = find_if(words.begin(), words.end(), [=](const string &s){return s.size() >= sz;});

    // Printing
    cout << *wc << endl;

    return 0;
}