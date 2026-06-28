#include <iostream>
using namespace std;

int main() {
	int choice;
	float value, result;
	cout << "unit conversion Menu:\n";
	cout << "1. Volts to millivolts\n2. Amperes to milliamperes\n";
	cout << "3. Kilowatts to watts\n4. Ohms to Kilo-ohms\n";
	cout << "Enter choice and value: ";
	cin >> choice >> value;
	
	switch (choice) {
		case 1: result = value * 1000; cout << value << "v =" << "mV" << endl; break;
		case 2: result = value * 1000; cout << value << "A =" << "mA" << endl; break;
		case 3: result = value * 1000; cout << value << "KW =" << "W" << endl; break;
		case 4: result = value / 1000; cout << value << "Ohms =" << "Kilo-Ohms" << endl; break;
		default: cout << "Invliad choice" << endl;
	}
	return 0;
}
