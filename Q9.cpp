#include <iostream>
using namespace std;

int main() {
	int result, pass = 0, fail = 0;
	for (int i = 1; i <= 15; i++) {
		cout << "Component" << i << "(1=pass, 0=fail):";
		cin >> result;
		if (result == 1) pass++;
		else fail++;
	}
	cout << "Passed:" << pass << ", failed:" <<fail << endl;
	return 0;
}
