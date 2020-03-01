#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		string* s = new string[n];
		for(int i=0;i<n;i++){
			cin >> s[i];
		}
		int count1 = 0,count2=0;
		string team;
		for (int i = 0; i < n; i++) {
			if (s[0] == s[i]) {
				count1++;
			}
			else {
				team = s[i];
				count2++;
			}
		}
		if (count1 == count2) {
			cout << "Draw" << endl;
		}
		else if (count1 > count2) {
			cout << s[0] << endl;
		}
		else {
			cout << team << endl;
		}
	}
}