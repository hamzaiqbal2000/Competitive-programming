#include <iostream>
#include <sstream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		ostringstream str1;
		str1 << n;
		string s = str1.str();
		int len = s.length();
		int x = (int)s[len];
		if (x == 5) {
			cout << "1" << endl;
		}
		else if (x == 0) {
			cout << "0" << endl;
		}
		else {
			cout << "-1" << endl;
		}
	}
}
