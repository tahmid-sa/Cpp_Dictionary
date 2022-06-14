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
    int i = 42;
    string s = to_string(i);
    double d = stod(s);

    // Printing
    cout << s << endl;
    cout << d << endl;
    cout << endl;

    string s2 = "pi = 3.14";
    d = stod(s2.substr(s2.find_first_of("+-.0123456789")));

    // Printing
    cout << s2 << endl;
    cout << d << endl;
    cout << endl;

    return 0;
}