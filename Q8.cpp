#include <iostream>
using namespace std;

int main() {
	float L1, L2, L3, avg;
	for (int i = 1; i <= 6; i++) {
		cout << "Set" << i << "-enter L1,L2,L3:";
		cin >>L1 >> L2 >> L3;
		avg = (L1 + L2 + L3)/3;
		cout << "Average current =" << avg << "A" <<endl;
	}
	return 0;
}
