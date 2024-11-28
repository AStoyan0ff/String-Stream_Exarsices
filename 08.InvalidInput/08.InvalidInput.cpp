#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

bool isNumber(const string& str) {
    
    if (str.empty()) return false;
    size_t start = (str[0] == '-') ? 1 : 0; 
    
    for (size_t i = start; i < str.size(); i++) {
        if (!isdigit(str[i])) return false;
    }
    return true;
}

int main() {

    string input;
    getline(cin, input);

    istringstream iss(input);
    string idx;

    int sum = 0;

    vector<string> words;

    while (iss >> idx) {
        
        if (isNumber(idx)) {
            sum += stoi(idx);
        }
        else {
            words.push_back(idx);
        }
    }

    cout << sum << endl;

    for (size_t i = 0; i < words.size(); i++) {
        cout << words[i];

        if (i < words.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
