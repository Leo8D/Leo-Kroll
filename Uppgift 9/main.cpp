#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
	
	float tal1, tal2, tal3;
	
	cout << "Skriv in första heltalet";
	cin >> tal1;
	cout << "Skriv in andra heltalet";
	cin >> tal2;
	cout << "Skriv in sista heltalet";
	cin >> tal3;
	
	if(tal1 > tal2 && tal1 > tal3) {
		cout << tal1 << endl;
	} else if(tal2 > tal1 && tal2 > tal3) {
		cout << tal2 << endl;
	} else {
		cout << tal3;
	}
	
	
	tal3 = tal1-tal2;
	
	
	return 0;
}
