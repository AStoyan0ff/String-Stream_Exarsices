#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
using namespace std;

string titleWords(const string& text) {

    string result;
    bool newWord = true; 

    for (char c : text) {
        if (isalpha(c)) {
            
            if (newWord) {
                result += toupper(c); 
                newWord = false;
            }
            else {
                result += c; 
            }
        }
        else {
            result += c; 
            newWord = true;
        }
    }

    return result;
}

int main() {

    string input;
    getline(cin, input);

    string output = titleWords(input);
             
    cout << output << endl;

    return 0;
}

