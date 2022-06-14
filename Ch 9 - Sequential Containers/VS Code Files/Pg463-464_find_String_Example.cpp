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
    // Pg 463 and 464 parts
    string name("AnnaBelle");
    auto pos1 = name.find("Anna");

    // Printing
    cout << name << endl;
    cout << pos1 << endl;
    cout << endl;

    // Pg 464 parts
    string lowercase("annabelle");
    pos1 = lowercase.find("Anna");

    // Printing
    cout << lowercase << endl;
    cout << pos1 << endl;
    cout << endl;

    // Pg 464 later parts
    string numbers("0123456789");
    auto pos = numbers.find_first_of("2");

    // Printing
    cout << numbers << endl;
    cout << pos << endl;
    cout << endl;

    // Pg 464 later parts
    string dept("03714p3");
    pos = dept.find_first_not_of(numbers);

    // Printing
    cout << dept << endl;
    cout << pos << endl;
    cout << endl;

    // Pg 464 later parts
    pos = 0;
    name += "1234";

    while ((pos = name.find_first_of(numbers, pos)) != string::npos) {
        cout << "found number at index: " << pos << " element is " << name[pos] << endl;
        ++pos;
    }

    // Printing
    cout << pos << endl;
    cout << name << endl;
    cout << endl;

    return 0;
}