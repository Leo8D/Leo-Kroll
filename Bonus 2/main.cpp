#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	float tal1, tal2, tal3, tal4, tal5, total;
	cout << "Skriv in ett heltal ";
	cin >> tal1;
		cout << "Skriv in ett till heltal ";
	cin >> tal2;
		cout << "Skriv in ett till heltal ";
	cin >> tal3;
		cout << "Skriv in ett till heltal ";
	cin >> tal4;
		cout << "Skriv in ett sista heltal ";
	cin >> tal5;
	
	total = (tal1 + tal2 + tal3 + tal4 + tal5) / 5;
	cout << total;
	
	
	
	
	return 0;
}
