#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
	int hopp, start, slut;
	
	cout << "Skriv in startv�rdet p� nedr�kningen" << endl;
	cin >> start;
	cout << "Skriv in hur stort hopp det ska vara mellan talen i nedr�kningen" << endl;
	cin >> hopp;
	cout << "Ange p� vilket tal nedr�kningen ska sluta" << endl;
	cin >> slut;
	
	while(start < 10 or start > 20) {
		cout << "Skriv in ett nytt startv�rde, mellan 10-20!";
		cin >> start;
	}
	
	while(start > slut) {
		
		start = start-hopp;
		cout << start << endl;
	}
	
	
	
	
	return 0;
}
