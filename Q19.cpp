#include <iostream>
using namespace std;

int main() {
	float val, sum = 0;
	int count = 0;
	for (int i = 1; i <= 12; i++) {
		cout << "Enter sensor reading " << i << ":";
		cin >> val;
		if (val == 999) {
			cout << "Faulty sensor value skipped" << endl;
			continue;
		}
		sum += val;
		count++;
	}
	if (count > 0)
	    cout << "Aversge of valid readings = " << sum / count << endl;
	else
	    cout << "No valid readings." << endl;
	return 0;
}
