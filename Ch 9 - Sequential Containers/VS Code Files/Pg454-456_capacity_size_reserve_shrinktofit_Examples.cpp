#include <iostream>
#include <string>

#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>
#include <string>

using namespace std;

int main(void) {
    vector<int> ivec;

    cout << "ivec: size: " << ivec.size() << " capacity: " << ivec.capacity() << endl;

    for (vector<int>::size_type ix = 0; ix != 24; ++ix) {
        ivec.push_back(ix);
    }

    cout << "ivec: size: " << ivec.size() << " capacity: " << ivec.capacity() << endl;

    // Printing the contents of the containers
    for (auto &c : ivec) {
        cout << c << " ";
    }
    cout << endl << endl;

    // Pg 455 parts
    ivec.reserve(50);
    cout << "ivec: size: " << ivec.size() << " capacity: " << ivec.capacity() << endl;

    while (ivec.size() != ivec.capacity()) {
        ivec.push_back(0);
    }

    cout << "ivec: size: " << ivec.size() << " capacity: " << ivec.capacity() << endl;

    // Printing the contents of the containers
    for (auto &c : ivec) {
        cout << c << " ";
    }
    cout << endl << endl;

    // Pg 456 parts
    ivec.push_back(42);
    cout << "ivec: size: " << ivec.size() << " capacity: " << ivec.capacity() << endl;

    ivec.shrink_to_fit();
    cout << "ivec: size: " << ivec.size() << " capacity: " << ivec.capacity() << endl;

    // Printing the contents of the containers
    for (auto &c : ivec) {
        cout << c << " ";
    }
    cout << endl << endl;

    return 0;
}