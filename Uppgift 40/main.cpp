#include <iostream>
#include <stdlib.h>  
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int tal1, tal2;
	cout << "Ange ett tal" << endl;
	cin >> tal1;
	cout << "Ange ett till tal" << endl;
	cin >> tal2;
	srand (time(NULL));
	int tal = rand()%(tal2 - tal1 + 1) + tal1;
	cout << tal;
	 
	
	
	return 0;
}
