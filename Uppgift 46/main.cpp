#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int tal1, tal;
add() {
		for(int i = tal1; i > 0; i--) {
		tal = tal + i;
	}
	cout << tal;
}

int main(int argc, char** argv) {
	cout << "Skriv in ett heltal som ska räknas ned" << endl;
	cin >> tal1;
	add();
	
	
	return 0;
}
