#include <iostream>
using namespace std;

int main() {
	float Ir, Is;
	cout << "Enter rated current (A): ";
	cin >> Ir;
	
	if (Is > 3 * Ir)
	cout << "High starting current. use proper motor starter."<< endl;
	else
	cout << "Startiing current is acceptable." << endl;
	
	return 0;
}
