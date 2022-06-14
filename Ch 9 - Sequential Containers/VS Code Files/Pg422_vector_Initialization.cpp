#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int init = 5;
    vector<int> v1(10, init);

    // Printing the contents in v1
    for (auto &v : v1) {
        cout << v << " ";
    }

    return 0;
}