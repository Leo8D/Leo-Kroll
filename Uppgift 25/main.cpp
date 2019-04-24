#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
		int array [7]; 
		 int x;
	
	for(int i = 0; i < 7; i++){
		cout << "Skriv in ett tal";
		cin >> array[i];
	}
	
	for (int e = 0; e < 7; e++) {
	x = x + array[e];		
	}
	
	if (x > 50) {
		
		cout << "Summan är över 50!";
	}
	else 
	{i	2
		cout << "Summan är under 50!";
	}
	
	return 0;
}
