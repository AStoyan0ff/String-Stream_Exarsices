#include <iostream>
#include <string>
using namespace std;

int calculateCharCode(const string& str, const string& str2) {
    
    int totalSum = 0;
    
    size_t length = str.size();
    size_t length2 = str2.size();
    size_t minLength = min(length, length2);
     
    for (size_t i = 0; i < minLength; i++) {
        totalSum += str[i] * str2[i];
    }
        
    if (length > length2) {
        for (size_t i = minLength; i < length; i++) {
            totalSum += str[i];
        }
    }
    else if (length2 > length) {
        for (size_t i = minLength; i < length2; i++) {
            totalSum += str2[i];
        }
    }

    return totalSum;
}

int main() {
    
    string input, str, str2;   
    getline(cin, input);
   
    size_t spaceIdx = input.find(' '); 
    
    if (spaceIdx != string::npos) {
        str = input.substr(0, spaceIdx);
        str2 = input.substr(spaceIdx + 1);
    }
    else {
       
        return 1;
    }
        
    int result = calculateCharCode(str, str2);

    cout << result << endl;

    return 0;
}
