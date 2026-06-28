#include <iostream>
using namespace std;

int main() {
	float V;
	cout << "Enter voltage: ";
	cin >> V;
	while (V >= 18) {
		cout << "Voltage ok, enter next: ";
		cin >> V;
	} 
	cout << "Solar panel voltage blow operating level." << endl;
	return 0;
}
