#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>

using namespace std;

int main(void) {
    list<string> authors = {"Milton", "Shakespeare", "Austen"};
    vector<const char*> articles = {"a", "an", "the"};
    list<string> list2(authors);
    // deque<string> authList(authors); error
    // vector<string> words(articles); error
    forward_list<string> words(articles.begin(), articles.end());

    auto it = authors.end();
    deque<string> authList(authors.begin(), it);

    // Printing the contents in containers
    for (auto &c : authors) {
        cout << c << " ";
    }

    cout << endl;

    for (auto &c : articles) {
        cout << c << " ";
    }

    cout << endl;

    for (auto &c : list2) {
        cout << c << " ";
    }

    cout << endl;

    for (auto &c : words) {
        cout << c << " ";
    }

    cout << endl;

    for (auto &c : authList) {
        cout << c << " ";
    }

    return 0;
}