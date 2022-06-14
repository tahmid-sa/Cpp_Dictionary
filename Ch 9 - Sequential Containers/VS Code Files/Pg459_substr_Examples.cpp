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
    //Pg 459 parts
    string s("hello world");
    string s2 = s.substr(0, 5);
    string s3 = s.substr(6);
    string s4 = s.substr(6, 11);
    // string s5 = s.substr(12); error

    // Printing
    cout << s << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;

    return 0;
}
