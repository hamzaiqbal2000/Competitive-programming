#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	int arr[30];
	while (T--) {
		int count = 0;
		for (int i = 0; i < 30; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < 30; i++) {
			if (arr[i] == 1) {
				count++;
				if (count == 6) {
					break;
				}
			}
			else if(arr[i]==0){
				count = 0;
			}
		}
		if (count == 6) {
			cout << "#coderlifematters" << endl;
		}
		else {
			cout << "#allcodersarefun" << endl;
		}
		
	}
}