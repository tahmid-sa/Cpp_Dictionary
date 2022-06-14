#include <iostream>
#include <string>

#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <stack>

#include <array>
#include <string>

using namespace std;

int main(void) {
    stack<int> intStack;

    for (size_t ix = 0; ix != 10; ++ix) {
        intStack.push(ix);
    }

    while (!intStack.empty()) {
        int value = intStack.top();
        cout << value << endl;
        intStack.pop();
    }

    return 0;
}