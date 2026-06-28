#include <iostream>
using namespace std;

int main() {
	float P, t, total = 0;
	for (int i = 1; i <= 8; i++) {
		cout << "Appliance" << i << "-power (W) and time (h):";
		cin >> P>> t;
		total += P * t;
	}
	cout << "Total energy = " << total << "Wh" << endl;
	return 0;
}
