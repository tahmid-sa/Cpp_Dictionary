#include <iostream>
#include <string>

#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>
#include <string>

using namespace std;

void pluralize(size_t cnt, string &word);

// Pg 437 parts
void pluralize(size_t cnt, string &word) {
    if (cnt > 1) {
        word.push_back('s');
    }
}

int main(void) {

    // Pg 436 parts
    vector<string> words;
    string word;

    while (cin >> word) {
        words.push_back(word);
    }

    return 0;
}