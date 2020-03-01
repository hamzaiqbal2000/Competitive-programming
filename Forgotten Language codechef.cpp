#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		int n, k;
		cin >> n >> k;
		vector<string> words(n);
		for (int i = 0; i < n; i++) {
			cin >> words[i];
		}
		vector<string> lang;
		while (k--) {
			int l;
			cin >> l;
			string s;
			for (int i = 0; i < l; i++) {
				cin >> s;
				lang.push_back(s);
			}			
		}
		for (int i = 0; i < n; i++) {
			int flag = 0;
			for (int j = 0; j < lang.size(); j++) {
				if (words[i] == lang[j]) {
					flag = 1;
					break;
				}
			}
			if (flag == 1) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}
}