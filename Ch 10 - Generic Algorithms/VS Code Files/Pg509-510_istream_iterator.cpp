#include <iostream>
#include <fstream>

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

int main(void) {
    vector<int> vec;

    istream_iterator<int> int_it(cin);
    istream_iterator<int> int_eof;
    ifstream in("afile.txt");
    istream_iterator<string> str_it(in);

    istream_iterator<int> in_iter(cin);
    istream_iterator<int> eof;

    while (in_iter != eof) {
        vec.push_back(*in_iter++);
    }

    // Printing
    for (auto &c : vec) {
        cout << c << endl;
    }
    cout << endl;

    // Pg 510 parts (vector construction)
    vector<int> vec2(in_iter, eof);

    // Printing
    for (auto &c : vec) {
        cout << c << endl;
    }
    cout << endl;

    return 0;
}