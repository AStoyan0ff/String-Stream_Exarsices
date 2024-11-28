#include <iostream>
#include <string>
using namespace std;

bool mathematicEx(const string& express) {
    
    int idx = 0; 

    for (char c : express) {
        if (c == '(') {
            idx++; 
        }
        else if (c == ')') {
            idx--; 
            
            if (idx < 0) {
                return false;
                
            }
        }
    }
       
    return idx == 0;
}

int main() {
    
    string express;  
    getline(cin, express);
        
    if (mathematicEx(express)) {
        cout << "correct" << endl;
    }
    else {
        cout << "incorrect" << endl;
    }

    return 0;
}
