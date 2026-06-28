#include <iostream>
using namespace std;

int main() {
	int choice;
	float Np,Ns,Vp,Vs, result;
	cout << "Transfromer Calculator:\n";
	cout << "1. Turns ratio\n2. secondary voltage\n3. Primary voltage\n";
	cout << "Enter choice:";
	cin >> choice;
	
	switch (choice) {
		case 1:
			cout << "Enter primary turns and secondary turns: ";
			cin >> Np >> Ns;
			if (Ns != 0) {
				result = Np/Ns;
				cout << "Turus ratio = " << result << endl;
			}else cout << "Secondary turns cannot be zero." << endl;
			break;
		case 2:
			cout << "Enter primary voltage, primary turns, secondary turns: ";
			cin >> Vp >> Np >> Ns;
			if (Np != 0) {
				result = Vp * Ns/Np;
				cout << "Secondary voltage = " << result << "V" << endl;
			}else cout << "Primary turus cannot be zore." << endl;
			break;
		case 3:
			cout << "Enter secondary voltage, primary turns, secondary turns: ";
			cin >> Vs >> Np >> Ns;
			if (Ns != 0) {
				result = Vs * Np/Ns;
				cout << "Primary voltage = " << result << "V" << endl;
			}else cout << "Secondary turns cannot be zero." <<endl;
			break;
		default:
			cout << "invalid choice" << endl;
	}
	return 0;
}
