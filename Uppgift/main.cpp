#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	float tal1, tal2, summa, totmil, totmil2;
	
	
	cout << "Vad �r din nuvarande m�tarst�llning?" << endl;
	cin >> tal1;
	cout << "Vad var din m�tarst�llning f�r ett �r sedan?" << endl;
	cin >> tal2;
	cout << "Hur m�nga liter bensin har du f�rbrukat under �ret?" << endl;
	cin >> totmil;
	summa= tal1 - tal2;
	totmil2 = summa/totmil;
	
	
	cout << "Antal k�rda mil: " <<  summa << endl;
	cout << "Antal liter bensin: " << totmil << endl;
	cout << "F�rbrukning  per mil: " <<totmil2 << endl;
	
	
	
	
	return 0;
}
