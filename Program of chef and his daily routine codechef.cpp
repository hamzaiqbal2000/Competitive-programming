#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		int count = 0;
		for (int i = 0; i < s.size()-1; i++) {
			if (s[i] == 'C') {
				if (s[i + 1] == 'C' || s[i + 1] == 'E' || s[i + 1] == 'S') {
					count++;
				}
			}
			if (s[i] == 'E') {
				if (s[i + 1] == 'E' || s[i + 1] == 'S') {
					count++;
				}
			}
			if (s[i] == 'S') {
				if (s[i + 1] == 'S') {
					count++;
				}
			}
		}
		if (count == s.size() - 1) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
}