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

using namespace std;

int main(void) {
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<string> v = {"hii", "byeee"};

    int sum = accumulate(vec.cbegin(), vec.cend(), 0);
    string sum2 = accumulate(v.cbegin(), v.cend(), string(""));

    // Printing
    cout << sum << endl;
    cout << sum2 << endl;
    
    return 0;
}