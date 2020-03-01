#include <iostream>
#include <sstream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		long long int n;
		cin >> n;
		ostringstream str1;
		str1 << n;
		string s = str1.str();
		int len = s.length();
		int count=0;
		for (int i = 0; i < len; i++) {
			if (s[i] == 52) {
				count++;
			}
		}
		cout << count << endl;
	}
}