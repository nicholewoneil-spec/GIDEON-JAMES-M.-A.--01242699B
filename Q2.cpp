#include <iostream>
using namespace std;

int main() {
	float temp;
	cout << "Enter cable temperature (C): ";
	cin >> temp;
	if (temp > 70)
	cout << "Cable coverheating detection"<< endl;
	else
	cout << "Cable tempratue is within safe range" << endl;
	
	return 0;
}
