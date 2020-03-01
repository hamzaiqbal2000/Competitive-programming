#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n; cin >> n;//n=length of string //k=no. of avaiable flips
		int k; cin >> k;
		string s; cin >> s;
		int capital = 0;
		int small = 0;
		for (int i = 0; i < n; i++) {
			char x = s[i];
			int p = (int)x;
			if (p >= 65 && p <= 90) {
				capital++;
			}
			else {
				small++;
			}
		}
		//case 1
		if (capital == small) {
			if (k >= capital) {
				cout << "both" << endl;
			}
			else if (k < capital) {
				cout << "none" << endl;
			}
		}
		//case 2
		else if (capital > small) {
			if (k >= capital) {
				cout << "both" << endl;
			}
			else if (k < small) {
				cout << "none" << endl;
			}
			else {
				cout << "brother" << endl;
			}
		}
		//case 3
		else if (capital < small) {
			if (k >= small) {
				cout << "both" << endl;
			}
			else if (k < capital) {
				cout << "none" << endl;
			}
			else {
				cout << "chef" << endl;
			}
		}
	}
}