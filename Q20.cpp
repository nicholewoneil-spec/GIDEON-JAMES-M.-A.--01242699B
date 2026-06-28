#include <iostream>
using namespace std;

int main() {
	float P, total = 0;
	for (int i = 1; i <= 10; i++) {
		cout << "Enter power reading " << i << "(W): ";
		cin >> P;
		if (P < 0) {
			cout << "Invalid reading skipped" << endl;
			continue;
		}
		total += P;
	}
	cout << "Total valid power = " << total << "W" << 
	5endl;
	return 0;
}
