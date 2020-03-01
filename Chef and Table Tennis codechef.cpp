#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		string s; int i;
		cin >> s;
		int len = s.length();
		int count = 0, count2 = 0;
		for (i = 0; i < len; i++) {
			if (s[i] == '1') {
				count++;
			}
			else {
				count2++;
			}
		}
		if (count > count2) {
			cout << "WIN" << endl;
		}
		else {
			cout << "LOSE" << endl;
		}
	}
}