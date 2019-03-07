#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	float tal1, tal2, summa, totmil, totmil2;
	
	
	cout << "Vad är din nuvarande mätarställning?" << endl;
	cin >> tal1;
	cout << "Vad var din mätarställning för ett år sedan?" << endl;
	cin >> tal2;
	cout << "Hur många liter bensin har du förbrukat under året?" << endl;
	cin >> totmil;
	summa= tal1 - tal2;
	totmil2 = summa/totmil;
	
	
	cout << "Antal körda mil: " <<  summa << endl;
	cout << "Antal liter bensin: " << totmil << endl;
	cout << "Förbrukning  per mil: " <<totmil2 << endl;
	
	
	
	
	return 0;
}
