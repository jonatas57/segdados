#include <iostream>
#include <map>
#include <vector>

using namespace std;

char first = ' ';
char second = 'z';
int range = second - first + 1;

string encode(string msg, string key) {
	int l = key.length();
	for (int i = 0, j = 0;msg[i];i++, j++) {
		int ch = msg[i];
		ch -= first;
		ch += key[j % l] - first;
		ch %= range;
		ch += first;
		msg[i] = ch;
	}
	return msg;
}

string decode(string msg, string key) {
	int l = key.length();
	for (int i = 0, j = 0;msg[i];i++) {
		int ch = msg[i];
		ch -= key[j++ % l] - range;
		ch %= range;
		ch += first;
		msg[i] = ch;
	}
	return msg;
}

string crack(string s, int keylength) {
	vector<vector<int>> freq(keylength, vector<int>(range, 0));
	for (int i = 0;s[i];i++) {
		freq[i % keylength][s[i] - first]++;/*@*/
		if (s[i] - first >= range) cerr << s[i] << endl;/*@*/
	}
	string key = "";
	for (int i = 0;i < keylength;i++) {
		int maxf = 0, id;
		for (int j = 0;j < range;j++) {
			if (maxf <= freq[i][j]) {
				maxf = freq[i][j];
				id = j;
			}
		}/*@*/cerr << id << endl;/*@*/
		key += (char)id + first;
	}
	return key;
}/*@*/


string crack2(string s, string hint) {
	string key = "";
	for(int i = 0;hint[i];i++) {
		key += (s[i] - hint[i] + range) % range + first;
	}
	return key;
}
