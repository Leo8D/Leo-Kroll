#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	 
	 int tal, multi;
	 
	 cout << "Ange ett heltal mellan 0-12" << endl;
	 cin >> tal;
	 
	 while(tal > 12 or tal < 0) {
	 	cout << "Ange ett nytt tal mellan 0-12" << endl;
	 	cin >> tal;
	 }
	 multi = 0;
	 
	 while(tal < tal*12 && multi <= 12) {
	 	cout << (tal * multi)<< endl;
	 	multi++;
	 	
	 }
	
	return 0;
}
