#include <iostream>
#include <sstream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		string n;
		cin >> n;
		int len = n.size();
		string m;
		int j = 0;
		//cout << "help";
		for (int i = len - 1; i >= 0; i--) {
			m[j] = n[i];
			j++;
		}
		if (n == m) {
			cout << "wins" << endl;
		}
		else {
			cout << "losses" << endl;
		}

	}
}