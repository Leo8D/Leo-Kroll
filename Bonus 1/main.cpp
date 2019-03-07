#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
#include <math.h>
int main() {
	
	float Kat1, Kat2, Total, Svar;
	
	
	cout << "Skriv in längden på den första kateten" << endl;
	cin >> Kat1;
	cout << "Skriv in längden på den andra kateten" << endl;
	cin >> Kat2;
	cout << "Längden på hypotenusan är =" << endl;
	Total = (Kat1*Kat1) + (Kat2*Kat2);
	Svar = sqrt(Total);
	cout << Svar;
	
	
	
	
	
	
	
	
	return 0;
}
