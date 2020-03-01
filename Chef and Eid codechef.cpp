#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;

		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			int c;
			cin >> c;
			v.push_back(c);
		}
		
		sort(v.begin(), v.end());

		vector<int> result;
		for (int i = 0; i < n; i++) {
			int c;
			c = (v[i + 1] - v[i]);
			result.push_back(c);

		}
		sort(result.begin(), result.end());
		cout << result[0] << endl;
	}
}