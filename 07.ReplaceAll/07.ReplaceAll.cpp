#include <iostream>
#include <string>
using namespace std;

string replaceAll(const string& text, const string& findStr, const string& replaceStr) {

	string result = text;
	size_t idx = 0;

	while ((idx = result.find(findStr, idx)) != string::npos) {
		
		result.replace(idx, findStr.size(), replaceStr);
		idx += replaceStr.size();
	}

	return result;
}

int main() {

	string text, findStr, replaceStr;
	
	getline(cin, text);
	getline(cin, findStr);
	getline(cin, replaceStr);

	string result = replaceAll(text, findStr, replaceStr);

	cout << result << endl;
	
	return 0;
}