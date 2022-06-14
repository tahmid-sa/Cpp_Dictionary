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
    string s("hello world");

    s.insert(s.size(), 5, '!');
    s.erase(s.size() -5, 5);

    // Printing
    cout << s << endl;

    // Pg 460 parts
    const char *cp = "Stately, plump Buck";
    s.assign(cp, 7);
    s.insert(s.size(), cp + 7);

    s = "some string";
    string s2 = "some other string";
    s.insert(0, s2);
    s.insert(0, s2, 0, s2.size());

    // Printing
    cout << s << endl;
    cout << s2 << endl;

    s = "C++ Primer";
    s2 = s;

    s.insert(s.size(), " 4th Ed.");
    s2.append(" 4th Ed.");

    // Printing
    cout << s << endl;
    cout << s2 << endl;

    // Pg 461 and 462 parts
    s.erase(11, 3);
    s.insert(11, "5th");
    s.replace(11, 3, "5th");
    s.replace(11, 3, "Fifth");

    // Printing
    cout << s << endl;

    return 0;
}