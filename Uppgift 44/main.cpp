#include <iostream>
#include <time.h> 
#include <stdlib.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {

	int tal1, tal2, tal;
	tal1 = 1;
	tal2 = 6;
	srand(time(NULL));
	for(int i = 0; i < 5; i++) {
		
		tal = rand() % (tal2 - tal1 + 1) + tal1;
		cout << tal << endl;
		
	}
	
	return 0;
}
