#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		char c;
		string ship_class;
		cin >> c;
		if (c == 'F' || c == 'f') {
			ship_class = "Frigate";
		}
		else if (c == 'B' || c == 'b') {
			ship_class = "BattleShip";
		}
		else if (c == 'C' || c == 'c') {
			ship_class = "	Cruiser";
		}
		else if (c == 'D' || c == 'd') {
			ship_class = "Destroyer";
		}
		cout << ship_class << endl;
	}
}