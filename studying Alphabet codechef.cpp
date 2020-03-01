#include <iostream>
using namespace std;

int main() {
	string s; cin >> s;
	int arr[26] = { 0 };
	int len = s.size();
	for (int i = 0; i < len; i++) {
		char x = s[i];
		int p = (int)x;
		p = p - 97;
		arr[p] = 1;
	}

	int n; cin >> n;
	while (n--) {
		string w; cin >> w;
		int len1 = w.size();
		int lettercount = 0;
		for (int i = 0; i < len1; i++) {
			char x1 = w[i];
			int p1 = (int)x1;
			p1 = p1 - 97;
			if (arr[p1] == 0) {
				lettercount++;
			}
		}
		if (lettercount > 0) {
			cout << "No"<<endl;
		}
		else {
			cout << "Yes"<<endl;
		}
	}
}
/*
#include <sstream>
int main() {
	string s;
	getline(cin, s);
	stringstream str(s);
	string word;
	while (str >> word) {
		cout << word << endl;
	}
}*/