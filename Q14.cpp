#include <iostream>
#include <string>
using namespace std;

int main (){
	string input , correct = "BEE208";
	int attempts = 3;
	while (attempts > 0) {
		cout << "Enter access code: ";
		cin >> input;
		if (input == correct) {
			cout << "Aceess granted" << endl;
			return 0;
		}else{
			attempts--;
			cout << "Incorrect. Attempts left: " << attempts << endl;
		}
	}
	cout << "Access denied. Maximum Attempts reached." << endl;
	return 0;
}
