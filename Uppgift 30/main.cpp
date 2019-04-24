#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
string name;

cout << "Ange ett namn: ";
cin >> name;
name[0] = 'Z';
cout << name;

	return 0;
}
