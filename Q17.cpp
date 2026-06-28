#include <iostream>
using namespace std;

int main() {
	float R;
	for (int i = 1; i <= 10; i++) {
		cout << "Reading " << i << "(M-Ohms):";
		cin >> R;
		if (R < 1) {
			cout << "Insulation failure detected. Test stopped." << endl;
			break;
		}else{
			cout << "Insulation reading acceptalbe." << endl;
		}
	}
	return 0;
} 
