#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> l;//length of chefs fingers
		vector<int> g;//lengths of sheaths of the glove
		for (int i = 0; i < n; i++) {
			int c;
			cin >> c;
			l.push_back(c);
		}
		for (int i = 0; i < n; i++) {
			int c;
			cin >> c;
			g.push_back(c);
		}
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (g[i] >= l[i]) {
				count++;
			}
		}
		int flag = 0;
		for (int i = n-1; i >= 0; i--) {
			if (g[i] >= l[n-i-1]) {
				flag++;
			}
		}
		if (count == n && flag == n) {
			cout << "both" << endl;
		}
		else if (flag == n) {
			cout << "back" << endl;
		}
		else if (count == n) {
			cout << "front" << endl;
		}
		else {
			cout << "none" << endl;
		}
	}
}