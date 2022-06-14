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
    int val = 42;
    vector<int> vec = {1, 4, 42, 5};

    auto result = find(vec.cbegin(), vec.cend(), val);

    cout << "The value " << val << (result == vec.cend() ? " is not present" : " is present") << endl;

    cout << endl;

    // Pg 475-476 later parts
    list<string> lst = {"hii", "a value", "byee"};

    string valStr = "a value";
    auto resultStr = find(lst.cbegin(), lst.cend(), valStr);

    int ia[] = {27, 210, 12, 47, 109, 83};
    int value = 83;
    int *resultInt = find(begin(ia), end(ia), value);

    auto resultInt2 = find(ia + 1, ia + 4, value); // Points to the last element, if the value looking for is not found

    
    // Printing
    cout << valStr << endl;
    if (resultStr != lst.end()) {
        cout << *resultStr << endl;
    }
    cout << endl;

    cout << value << endl;
    cout << *resultInt << endl;
    cout << endl;

    cout << value << endl;
    cout << *resultInt2 << endl;
    
    

    return 0;
}