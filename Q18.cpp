#include <iostream>
using namespace std;

int main() {
	float P, total = 0;
	for (int i = 1; i <=20; i++) {
		cout << "Enter power rating of appliance " << i << "(W): ";
		cin >> P;
		total += P;
		if (total > 5000) {
			cout << "Maximum load excceded. stop adding appliances." << endl;
			cout << "Final total load = " << total << "W" << endl;
			break; 
		}
	} 
	if (total <= 5000)
	    cout << "Total load = " << total << "W" <<endl;
	return 0;
}
