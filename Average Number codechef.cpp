#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k, v;
		cin >> n >> k >> v;
		vector<int> p;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			int c;
			cin >> c;
			p.push_back(c);
			sum = sum + c;
		}
		v = ((v * (k + n)) - sum) / k;
		if (v>0 && v%k==0) {
			cout << v/k << endl;
		}
		else {
			cout << "-1" << endl;
		}
	}
}