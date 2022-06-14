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

bool check_size(const string &s, string::size_type sz) {
    return s.size() >= sz;
}

int main(void) {
    vector<string> words = {"hiii", "byeeee", "hiii", "bye"};
    int sz = 5;

    // Printing
    for (auto &s : words) {
        cout << check_size(s, sz) << endl;
    }
    
    // Pg 502 parts
    auto check6 = bind(check_size, placeholders::_1, 6);

    string s = "hello";
    bool b1 = check6(s);

    // Pg 503 parts
    auto wc = find_if(words.begin(), words.end(), [sz](const string &a){return bind(check_size, _1, sz);});
    

    return 0;
}