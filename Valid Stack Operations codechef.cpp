#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;//no. of instructions
		cin >> n;
		vector<int> v;
		for (int i = 0; i < n; i++) {
			int c;
			cin >> c;
			v.push_back(c);
		}
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] == 1) {
				count++;
			}
			else if (v[i] == 0) {
				count--;
			}
			if (count < 0) {
				break;
			}
		}
		if (count < 0) {
			cout << "Invalid" << endl;
		}
		else {
			cout << "Valid" << endl;
		}
	}
}