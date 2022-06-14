#include <iostream>

using namespace std;

void process_input(istream &is) {
    // process the istream input parameter
}

int main(void) {
    auto old_state = cin.rdstate();
    cin.clear();
    process_input(cin);
    cin.setstate(old_state);

    return 0;
}