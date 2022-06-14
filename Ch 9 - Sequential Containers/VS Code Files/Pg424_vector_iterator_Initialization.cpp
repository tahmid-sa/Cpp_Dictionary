#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int val = 5;
    vector<int> v1(10);

    vector<int>::iterator begin = v1.begin();
    vector<int>::iterator end = v1.end();

    while (begin != end) {
        *begin = val;
        ++begin;
    }

    // Printing the contents in v1
    for (auto &v : v1) {
        cout << v << " ";
    }

    return 0;
}