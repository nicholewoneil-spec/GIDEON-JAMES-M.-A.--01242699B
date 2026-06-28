#include <iostream>
using namespace std;

int main() {
	float V, I, R;
	char choice;
	do {
		cout << "Enter voltage (V) and currnet (A): ";
		cin >> V >> I;
		if (I != 0) {R = V/I;
		cout << "Resistance = " << R << "Ohms" << endl;
		}else{
			cout << "Correct cannot be zero." << endl;
		}
		cout << "Do you want to continue? (Y/N): ";
		cin >> choice;
	}while (choice == 'Y' || choice == 'y');
	return 0;
}
