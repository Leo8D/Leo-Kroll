#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	bool run = true;
	int stop;
	
	while(run == true) {
	   cout << "Vill du stoppa och avsluta programmet? Skriv 1, om det ska fortsätta vara på skriv 2." << endl;
	   cin >> stop;
	   
	   if(stop == 1) {
	   	run = false;
	   }
	   else if(stop == 2) {
	   	cout << "Programmet fortsätter 1 runda till!" << endl;
	   }
	   
	}
	
	return 0;
}
