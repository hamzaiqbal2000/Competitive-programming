#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	char v[25][25];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
		}
	}
	int count = 0;
	int i;
	for (i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (v[0][0] == '%' && v[0][2] == '%' && v[1][1] == '%') {
				count++;

			}
			if (v[i][j] == '.') {
				if ((v[i][j - 1] == '%' && v[i][j + 1] == '%' && v[i - 1][j] == '%') || (v[i][j + 1] == '%' && v[i + 1][j] == '%' && v[i - 1][j] == '%') || (v[i][j - 1] == '%' && v[i - 1][j] == '%' && v[i + 1][j] == '%') || (v[i][j - 1] == '%' && v[i][j + 1] == '%' && v[i + 1][j] == '%')) {
					count++;
				}
				if (i == 0 || i == n ) {
					if (v[i][j - 1] == '%' && v[i][j + 1] == '%') {
						count++;
					}
				}
				if (j == 0 || j == n) {
					if (v[i - 1][j] == '%' && v[i + 1][j] == '%') {
						count++;
					}
				}
			}
		}
	}
	cout << count << endl;

}