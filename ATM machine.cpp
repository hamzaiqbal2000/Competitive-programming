#include <iostream>
using namespace std;
int main() {
	int amount;
	double balance;
	double remaining;
	cin >> amount;
	cin >> balance;
	if (amount % 5 == 0) {
		if (amount < balance && (amount + 0.5) <= balance) {
			remaining = balance - amount - 0.5;
			cout << remaining;
		}
		else {
			cout << balance;
		}
	}
	else {
		cout << balance;
	}
}