#include <iostream>
#include <time.h>  
#include <stdlib.h> 
#include <stdio.h>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int svar, gissning, tal1, tal2, Ja, Nej;
int main(int argc, char** argv) {
	bool x = true;
	srand (time(NULL));

	svar = rand() % 100 + 1;
cout << "I detta spel ska du gissa på ett tal mellan 1-100, Gissa på!" << endl;

   string repeat = "Ja";
   string norepeat = "Nej";
   string svar2;
   
   while(x) {

	for(int i = 0; i < 5; i++) {
		
		cout << "Gissa!" << endl;
		cin >> gissning;
		
		if(gissning > svar) {
			
		  cout << "För högt!" << endl;
		}
		
		else if(gissning < svar) {
		
			cout << "För lågt!" << endl;
			
		}
		
		else if(gissning == svar) {
			
			cout << "Grattis!";
		}
		
		
		}
	  	
		
		if(gissning != svar) {
			cout << "Du har förlorat!" << endl;
			cout << "Svaret var: " << svar << endl;
		}
	
	    cout << "Vill du spela igen? Ja eller Nej" << endl;
	    cin >> svar2;
	    if(svar2 == repeat) {
	    	x = true;
		}
		else if(svar2 == norepeat) {
			x = false;
		}
	}
	    
	return 0;
}
