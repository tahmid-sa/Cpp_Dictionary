#include <iostream>
#include <sstream> // Need to include sstream

#include <string>
#include <vector>

using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};

int main(void) {

    // istringstream example
    string line, word;
    vector<PersonInfo> people;

    while (getline(cin, line)) {
        PersonInfo info;
        istringstream record(line);

        // Read the first word in record which is the name, and put it into info.name
        record >> info.name;
        cout << info.name << endl;

        while (record >> word) {
            info.phones.push_back(word);
            cout << word << endl;
        }

        people.push_back(info);
    }

    // For ostringstream example, refer to pg 414

    return 0;
}