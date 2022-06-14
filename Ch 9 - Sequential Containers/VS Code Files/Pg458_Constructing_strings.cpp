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
    const char *cp = "Hello World!!!";
    char noNull[] = {'H', 'i'};
    string s1(cp);
    // string s2(noNull, 2); error
    string s3(noNull);
    string s4(cp + 6, 5);
    string s5(s1, 6, 5);
    string s6(s1, 6);
    string s7(s1, 6, 20);
    // string s8(s1, 16); error

    // Printing
    cout << cp << endl;
    cout << noNull << endl;
    cout << s1 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;
    cout << s7 << endl;
}