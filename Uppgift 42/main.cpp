#include <iostream>
#include <time.h>  
#include <stdlib.h> 
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int svar, gissning, tal1, tal2;
int main(int argc, char** argv) {
	
	srand (time(NULL));

	svar = rand() % 100 + 1;
cout << "I detta spel ska du gissa p� ett tal mellan 1-100, Gissa p�!" << endl;


	for(int i = 0; i < 5; i++) {
		
		cout << "Gissa!" << endl;
		cin >> gissning;
		
		if(gissning > svar) {
			
		  cout << "F�r h�gt!" << endl;
		}
		
		else if(gissning < svar) {
		
			cout << "F�r l�gt!" << endl;
			
		}
		
		else if(gissning == svar) {
			
			cout << "Grattis!";
		}
		
		
		}
		
		if(gissning != svar) {
			cout << "Du har f�rlorat!" << endl;
			cout << "Svaret var: " << svar << endl;
		}
	
	
	return 0;
}
