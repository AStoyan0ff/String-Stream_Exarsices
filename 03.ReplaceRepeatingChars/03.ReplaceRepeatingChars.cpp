#include <iostream>
#include <string>
using namespace std;

string replaceDuplicate(const string& input) {
	string result;

	for (size_t i = 0; i < input.size(); i++) {
		
		if (i == 0 || input[i] != input[i - 1]) {
			result += input[i];
		}
	}
	return result;
}

int main() {

	string input;
	getline(cin, input);

	string result = replaceDuplicate(input);

	cout << result << endl;

	return 0;
}