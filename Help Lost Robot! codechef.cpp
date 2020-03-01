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
		for (int i = 0; n % 2 == 0 ? i < n - 1 : i < n - 2; i=i+2) {
			int temp = s[i];
			s[i] = s[i + 1];
			s[i + 1] = temp;
		}	
		for (int i = 0; i < n; i++) {
			char x = s[i];
			int p = (int)x;
			p = p - 97;
			p = 122 - p;
			x = (char)p;
			s[i] = x;
		}
		cout << s << endl;
		
	}
}