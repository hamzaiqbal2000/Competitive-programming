#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n;//length of track in km
		cin >> k;//max distance he can run at max speed
		vector<int> v;
		for (int i = 0; i < n; i++) {
			int c;
			cin >> c;
			v.push_back(c);
		}
		int result = 0, sum = 0;
		for (int i = 0; i < n; i++) {
			
			for (int j = i; i < k; j++) {
				sum = sum + v[i];
			}
			if (result < sum ) {
				result = sum;
			}
		}
		cout << result << endl;
	}
}