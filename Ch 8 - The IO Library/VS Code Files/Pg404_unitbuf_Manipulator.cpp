#include <iostream>

using namespace std;

int main(void) {
    cout << unitbuf; // All writes will be flushed immediately

    // Any output is flushed immediately, no buffering
    cout << nounitbuf; // Returns to normal buffering

    return 0;
}
