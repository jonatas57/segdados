#include <fstream>
#include <iostream>

#include "vigenere.hpp"

using namespace std;

int main(int argc, char* argv[]) {
	string msg;
	if (argc == 1) {
		getline(cin, msg);
	}
	else {
		ifstream fin(argv[1]);
		getline(fin, msg);
	}
	cout << decode(msg, "ufabc") << endl;
	return 0;
}
