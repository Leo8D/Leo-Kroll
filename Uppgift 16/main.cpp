#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
	double start, slut, skillnad;
	
	cout << "Skriv in ett tal som ska nedr�knas" << endl;
	cin >> start;
	while(start > 20 or start < 10) {
		
		cout << "Talet m�ste vara mellan 10 och 20, Skriv in ett nytt tal!" << endl;
		cin >> start;
	}
		
	cout << "Skriv in slutet p� nedr�kningen (en siffra)" << endl;
	cin >> slut;
	cout << "Ange hur m�nga steg i siffror nedr�kningen ska ske i" << endl;
	cin >> skillnad;

	for(int i = slut; i < start; start = start-skillnad) {
		
		cout << start << endl;	
	}
	return 0;
}
