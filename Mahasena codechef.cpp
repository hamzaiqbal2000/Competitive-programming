#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	int s;
	int even = 0;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if ((s % 2) == 0) {
			even++;
		}
	}
	
	int a = n - even;
	if (even > a) {
		cout << "READY FOR BATTLE" << endl;
	}
	else {
		cout << "NOT READY" << endl;
	}
}