#include <iostream>
using namespace std;

int main() {
	int ch;
	cout << "Fuse rating menu:\n";
	cout << "1.5 A Fuse\n2. 10 A Fuse\n3.13 A Fuse\n4. 20 A Fuse\n5. 32 A Fuse\n";
	cout << " Enter your choice: ";
	cin >> ch;
	
	switch (ch) {
		case 1: cout << "Suitable for lighting circuits" << endl; break;
		case 2: cout << "Suitable for small appliances" << endl; break;
		case 3: cout << "Suitable for heavy domestic appliances"<< endl; break;
		case 4: cout << "Suitable for industrial equipment" << endl; break;
		case 5: cout << "Suitable for large motors" << endl; break;
		default: cout << "invalid choice" << endl;
	}
	return 0;
}
