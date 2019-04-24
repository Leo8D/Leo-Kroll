#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	bool increase = true;
	int min, tal = 0;
	
	while(tal < 7 && increase == true){
		tal++;
		cout << tal << endl;
		
		if(tal == 7) {
			increase = false;
		}
		
		while(increase == false && tal > 0) {
			tal--;
			cout << tal << endl;
		}
	}
	
	return 0;
}
