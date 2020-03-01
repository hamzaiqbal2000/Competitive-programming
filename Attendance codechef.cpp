#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<string> s1;
		vector<string> s2;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			string c,s;
			cin >> c;
			s1.push_back(c);
			cin >> s;
			s2.push_back(s);
		}
		for (int i = 0; i < n-1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (s1[i] == s1[j]) {
					v[i] = 1;
					v[j] = 1;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			if (v[i] == 1) {
				cout << s1[i]<< " " << s2[i] << endl;
			}
			else {
				cout << s1[i] << endl;
			}
		}
	}
}