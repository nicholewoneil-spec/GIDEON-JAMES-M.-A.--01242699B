#include <iostream>
using namespace std;

int main () {
	float V, I, P;
	char choice;
	do {
		cout << "Enter voltage (V) and current (A): ";
		cin >> V >> I;
		P = V * I;
		cout << "Power = " << P << "W" << endl;
		cout << "Continue? (Y/N): ";
		cin >> choice; 
	}while (choice == 'Y' || choice == 'y');
	return 0;
}
