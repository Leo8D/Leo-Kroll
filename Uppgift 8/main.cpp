#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



using namespace std;

int main() {
	
	float nuvarande, modell, forsekring;
	
	cout << "Vilket �r �r det just nu?" << endl;
	cin >> nuvarande;
	cout << "Vad �r bilens �rsmodell?" << endl;
	cin >> modell;
	
	forsekring = nuvarande - modell;
	
	if (forsekring >= 5 && forsekring <= 25) {
		
		cout << "V�lj en halvf�rs�kring";
		
	} else if (forsekring >= 25) {
		
		cout << "V�lj en veteranbilsf�rs�kring";
		
	} else {
		
		cout << "V�lj en helf�rs�kring";
		
	}
	

		
	
	
	
	return 0;
}
