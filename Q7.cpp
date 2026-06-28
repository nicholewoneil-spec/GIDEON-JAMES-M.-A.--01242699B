#include <iostream>
using namespace std;

int main() {
	float w, total = 0;
	for (int i = 1;i<= 12; i++) {
		cout << "Enter wattage of point" << i << ":";
		cin >> w;
		total += w;
	}
	cout << "Total lighting load = " << total << "W" << endl;
	return 0;
}
