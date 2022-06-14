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
    string river("Mississippi");
    auto first_pos = river.find("is");
    auto last_pos = river.rfind("is");

    // Printing
    cout << river << endl;
    cout << first_pos << endl;
    cout << last_pos << endl;

    return 0;
}