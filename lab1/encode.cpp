#include <iostream>

#include "vigenere.hpp"

using namespace std;

int main() {
	string msg;
	getline(cin, msg);
	cout << encode(msg, "ufab") << endl;
	return 0;
}
