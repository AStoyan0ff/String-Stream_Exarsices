#include <iostream>
#include <sstream>
#include <vector>
#include <cctype>
using namespace std;

bool isValidUsername(const string& username) {

    if (username.size() < 3 || username.size() > 16) {
        return false;
    }

    for (char c : username) {
        if (!isalnum(c) && c != '-' && c != '_') {
            return false;
        }
    }
    return true;
}

int main() {

    string input;
    getline(cin, input);

    istringstream iss(input);
    string attempt;
    vector<string> validUsernames;

    while (getline(iss, attempt, ',')) {

        if (!attempt.empty() && attempt.front() == ' ') {
            attempt.erase(attempt.begin());
        }

        if (isValidUsername(attempt)) {
            validUsernames.push_back(attempt);
        }
    }

    for (const auto& username : validUsernames) {
        cout << username << endl;
    }

    return 0;
}
