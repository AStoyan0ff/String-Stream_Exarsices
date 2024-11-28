#include <iostream>
#include <string>
using namespace std;

string encryptText(const string& text) {
    string encryptedText;

    for (char c : text) {
        encryptedText += (char)(c + 3);
    }
    return encryptedText;
}

int main() {

    string input;
    getline(cin, input);

    string encrypted = encryptText(input);

    cout << encrypted << endl;

    return 0;
}

