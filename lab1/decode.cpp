#include <iostream>

#include "vigenere.hpp"

using namespace std;

int main() {
	string msg;
	getline(cin, msg);
	cout << decode(msg, "ufab") << endl;
}
