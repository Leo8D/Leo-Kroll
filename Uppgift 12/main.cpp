#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {

	int x, kod;
	
	cout << "Skriv in din pinkod, du har tre f�rs�k" << endl;
	
	cin >> x;

	
	kod = 1233;
	
	if(x == kod) {
		cout << "Grattis du kan nu ta ut dina pengar";
		return 0;
	}
	
	else
	
	cin >> x;
	
		if(x == kod) {
		cout << "Grattis du kan nu ta ut dina pengar";
		return 0;
	}
	
	cin >> x;
	
	
		if(x == kod) {
		cout << "Grattis du kan nu ta ut dina pengar";
		return 0;
	
	}
	else
	
	cout << "Ditt kort �r nu sp�rrat";

	return 0;
}

