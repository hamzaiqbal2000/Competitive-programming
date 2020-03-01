#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a;
		vector<int> b;
		for (int i = 0; i < n; i++) {
			int c;
			cin >> c;
			a.push_back(c);
		}
		for (int i = 0; i < n; i++) {
			int c;
			cin >> c;
			b.push_back(c);
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		int sumA = 0, sumB = 0;
		for (int i = 0; i < n-1; i++) {
			sumA = sumA + a[i];
			sumB = sumB + b[i];
		}

		if (sumA < sumB) {
			cout << "Alice" << endl;
		}
		else if (sumA > sumB) {
			cout << "Bob" << endl;
		}
		else
		{
			cout << "Draw" << endl;
		}

	}
}