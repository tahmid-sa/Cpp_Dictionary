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
    deque<int> deq = {1, 2, 3, 4};
    vector<string> svec = {"hii", "byee"};

    stack<int> stk(deq);

    stack<string, vector<string>> str_stk;
    stack<string, vector<string>> str_stk2(svec);

    // Printing
    for (auto &c : deq) {
        cout << c << " ";
    }
    cout << endl;

    for (auto &c : svec) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}