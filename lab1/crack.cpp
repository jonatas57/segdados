#include <iostream>

#include "vigenere.hpp"

using namespace std;

int main() {
	string msg;
	getline(cin, msg);
	string key = crack(msg, 20);
	cout << key << endl;
	cout << decode(msg, key) << endl;
}
