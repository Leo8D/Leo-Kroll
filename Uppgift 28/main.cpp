#include <iostream>

using namespace std;


int main(int argc, char** argv) {
	

string metod;
float tal1, tal2;

cin >> metod;

tal1 = metod[0] - '0';

tal2 = metod [2] - '0';

if(metod[1] == '+') {
cout << tal1 << "+" << tal2 << "=" << tal1+tal2;
}

else if(metod[1] == '-') {
cout << tal1 << "-" << tal2 << "=" << tal1-tal2;
}

else if(metod[1] == '*') {
cout << tal1 << "*" << tal2 << "=" << tal1*tal2;
}
else if(metod[1] == '/') {
cout << tal1 << "/" << tal2 << "=" << tal1/tal2;
}




	return 0;
}
