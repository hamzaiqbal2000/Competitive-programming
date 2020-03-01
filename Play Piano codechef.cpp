#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		int len = s.size();
		bool flag = true;
		for (int i = 0; i < len; i=i+2) {
			if (s[i] == s[i + 1]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
}