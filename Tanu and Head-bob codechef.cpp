#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'Y') {
				cout << "NOT INDIAN" << endl;
				break;
			}
			else if (s[i] == 'I') {
				cout << "INDIAN" << endl;
				break;
			}
			else {
				count++;
			}
		}
		if (count == n) {
			cout << "NOT SURE" << endl;
		}
	}
}