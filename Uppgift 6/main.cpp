#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
float x, y, z;
	
	cout << "Välj räknesätt: " << endl;
	cout << "1 = Adition" <<endl;
	cout << "2 = Minus" <<endl;
	cout << "3 = Division" <<endl;
	cout << "4 = Multiplikation" <<endl;

	cin >> z;
	
	if (z==1) {
		cout << "Skriv in en siffra: " << endl;
		cin >> x;
		
		
		cout << "Skriv in en till siffra:" << endl;
		cin >> y;
		
		cout << "Summan är" << x+y; 
	}
	
	
		if (z==2) {
		cout << "Skriv in en siffra: " << endl;
		cin >> x;
		
		
		cout << "Skriv in en till siffra:" << endl;
		cin >> y;
		
		cout << "Summan är" << x-y; 
	}
	
			if (z==3) {
		cout << "Skriv in en siffra: " << endl;
		cin >> x;
		
		
		cout << "Skriv in en till siffra:" << endl;
		cin >> y;
		
		cout << "Summan är" << x/y; 
	}
	
	
			if (z==4) {
		cout << "Skriv in en siffra: " << endl;
		cin >> x;
		
		
		cout << "Skriv in en till siffra:" << endl;
		cin >> y;
		
		cout << "Summan = " << x*y; 
	}
	return 0;
}

