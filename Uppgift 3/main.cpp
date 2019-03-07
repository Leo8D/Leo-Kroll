#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
   using namespace std;
   
int main() {
	float vara1, vara2, vikt1, vikt2, moms, summa;
	moms = 1.2;
	
	cout << "Vara 1 vikt i Kilogram [kg]" << endl;
	cin >> vara1;
	cout << "Vara 2 vikt i Kilogram [kg]" << endl;
	cin >> vara2;
	cout << "Kilopriset på Vara 1" << endl;
	cin >> vikt1;
	cout << "Kilopriset på Vara 2" << endl;
	cin >> vikt2;
	
	summa = (vara1 * vikt1 + vara2 * vikt2) * moms;
	cout << "Pris (inkl. Moms):" << endl << summa;
	
	
	
	return 0;
}
