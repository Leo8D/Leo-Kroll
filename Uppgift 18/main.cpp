#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
    #include <iostream>


    double rader;
    
    
    cout << "Ange hur många rader som ska användas" << endl;
    cin >> rader;
    while(rader > 15) {
    	cout << "Maximalt antal rader: 15" << endl;
    	cin >> rader;
}
    for(int i = 0; i < rader; i++) {
        cout << "Baa, ";

        for(int j = 1; j < i + 1; j++) {
            cout << "Baa, ";

        }

        cout << endl;}
	
  return 0;  
}


