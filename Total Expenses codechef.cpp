#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		double quantity, price, bill;
		cin >> quantity >> price;
		if (quantity > 1000) {
			bill = quantity * price * 0.9;
		}
		else {
			bill = quantity * price;
		}
		cout << bill << endl;
	}
}