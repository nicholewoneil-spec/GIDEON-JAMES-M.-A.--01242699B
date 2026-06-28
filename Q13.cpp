#include <iostream>
using namespace std;

int main() {
	float R;
	cout << "Enter resistance (Ohms): ";
	cin >> R;
	while (R <= 5) {
		cout << "Resistance ok, enter next: ";
		cin >> R;
	}
	cout << "Earth resistance too high improve earthiing system." << endl;
	return 0;
}
