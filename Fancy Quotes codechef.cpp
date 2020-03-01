#include <iostream>
#include <sstream>
using namespace std;
int main() {
	int T;
	cin >> T;
	cin.ignore();
	while (T--) {
		string s;
		getline(cin, s);
		stringstream str(s);
		string word;
		int flag = 0;
		while (str >> word) {
			if (word == "not") {
				flag = 1;
				break;
			}
		}
		if (flag == 1) {
			cout << "Real Fancy" << endl;
		}
		else if (flag==0) {
			cout << "regularly fancy" << endl;
		}
	}
}