#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
	float timmar, overtid, total;
	
	cout << "Hur m�nga timmar har du jobbat?" << endl;
	cin >> timmar;
	
	if(timmar > 160) {
		
		overtid = timmar - 160;
		
	}
	
	total = (timmar*100) + (overtid*150);
	cout << "F�r det antalet timmar ska du ha f�ljande l�n: " << total << "Kr" << endl;
	return 0;
}
