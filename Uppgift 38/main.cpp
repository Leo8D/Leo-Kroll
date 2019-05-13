#include <iostream>

using namespace std;

float FunctionCalculator(float celsius, float fahrenheit) {
	
	fahrenheit = celsius * 1.8 + 32;
	
	return fahrenheit;
}
void FunctionTemp() {
	float celsius, fahrenheit;
	
	cout << "What is the temperature in C ";
	cin >> celsius;
	
	
	cout << "Fahrenheit: " << FunctionCalculator(celsius, fahrenheit);
}
int main(int argc, char** argv) {
	FunctionTemp();
	return 0;
}
