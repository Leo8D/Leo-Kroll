#include <iostream>

using namespace std;

Multiplier(int number) {
	if(number > 1) {
		number = number * Multiplier(number-1);
	}
	
	return number;
}


int main(int argc, char** argv) {
	int number;
	
	cout << "ange ett slumpm�ssigt nummer! : Inga tal �ver 33 �r till�tna ";
	cin >> number;
	
	cout << Multiplier(number);
	
	return 0;
}
