#include <iostream>

#include "vigenere.hpp"

using namespace std;

int main() {
	string msg;
	getline(cin, msg);
	cout << encode(msg, "ufabc") << endl;
	return 0;
}
