#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	bool is_ten;
	int kontroll;
	
	cout << "Ange ett heltal";
	cin >> kontroll;
	
	if(kontroll == 10) {
		
	 is_ten = true;
	}
	else {
		 is_ten = false;
	}
	
	
	if( is_ten == true) {
		
		cout << "Du skrev in talet 10";
	}
	else if( is_ten == false) {
	cout << "Du skrev inte in talet 10";
	}
	
	return 0;
}
