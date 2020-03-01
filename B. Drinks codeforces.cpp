#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	double sum = 0;
	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		sum = sum + p;
	}
	double avg = sum / n;
	cout << fixed << setprecision(4) << avg << endl;
}