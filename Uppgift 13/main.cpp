#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
	int hopp, start, slut;
	
	cout << "Skriv in startvärdet på nedräkningen" << endl;
	cin >> start;
	cout << "Skriv in hur stort hopp det ska vara mellan talen i nedräkningen" << endl;
	cin >> hopp;
	cout << "Ange på vilket tal nedräkningen ska sluta" << endl;
	cin >> slut;
	
	while(start < 10 or start > 20) {
		cout << "Skriv in ett nytt startvärde, mellan 10-20!";
		cin >> start;
	}
	
	while(start > slut) {
		
		start = start-hopp;
		cout << start << endl;
	}
	
	
	
	
	return 0;
}
