#include <iostream>
using namespace std;

int main() {
	float temp;
	cout << "Enter temperature: ";
	cin >> temp;
	while (temp <= 90) {
		cout << "Temperature ok, enter next: ";
		cin >> temp;
	}
	cout << "Motor temperature unsafe. stop motor test." << endl;
	return 0;
}
