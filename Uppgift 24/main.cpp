#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
	int array [10];
	
	for(int i = 0; i < 10; i++){
		cout << "Skriv in ett tal";
		cin >> array[i];
	}
	
     for(int i = 9; i > -1; i--) {
     	cout << array[i] << endl;
	 }
	
	return 0;
}
