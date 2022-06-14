#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(void) {
    list<string> a = {"Milton", "Shakespeare", "Austen"};
    auto it1 = a.begin();
    auto it2 = a.rbegin();
    auto it3 = a.cbegin();
    auto it4 = a.crbegin();

    // Pg 427 part
    list<string>::iterator it5 = a.begin();
    list<string>::const_iterator it6 = a.begin();
    auto it7 = a.begin();
    auto it8 = a.cbegin();

    // Printing the dereferenced iterators
    cout << *it1 << endl;
    cout << *it2 << endl;
    cout << *it3 << endl;
    cout << *it4 << endl << endl;

    cout << *it5 << endl;
    cout << *it6 << endl;
    cout << *it7 << endl;
    cout << *it8 << endl;

    return 0;
}