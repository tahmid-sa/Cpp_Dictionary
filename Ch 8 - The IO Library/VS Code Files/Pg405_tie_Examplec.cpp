#include <iostream>

using namespace std;

int main(void) {
    cin.tie(&cout);
    ostream *old_tie = cin.tie(nullptr);

    cin.tie(&cerr);
    cin.tie(old_tie);

    return 0;
}