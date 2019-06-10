#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	srand(time(0));
	int dice[5], number;
	string choise;
	
	for(int i = 0; i < 5; i++) {
		dice[i] = rand() % 6 + 1;	
	}
	
	for(int i = 0; i < 5; i++) {
		cout << dice[i];
		cout << endl;
	}
	
	while(choise != "Ja" and choise != "Nej") {
		cout << "Vill du kasta om en tarning? (Ja eller Nej) ";
		cin >> choise;
	}
	
	if(choise == "Ja") {
		while(number < 1 or number > 5) {
			cout << "Vilken tarning? (1,2,3,4 eller 5) ";
			cin >> number;
		}
		number--;
		dice[number] = rand() % 6 + 1;
		
		for(int i = 0; i < 5; i++) {
			cout << dice[i];
			cout << endl;
		}
	}
	
	return 0;
}
