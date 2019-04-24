#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {

    int underscore, nextunder;

    cout << "Säg ett nummer över 1" << endl;
    cin >> underscore;

    while(underscore < 1 || underscore > 10) {
        cout << "Mellan 1-10!" << endl;
        cin >> underscore;
    }

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 10; j++) {
            if(j == underscore - 1) {
                cout << "_";
            } else {
                cout << "*";
            }
        }
        nextunder = underscore;
        cout << endl;

        if(nextunder == underscore) {
            underscore++;
        }

        if(underscore > 10) {
            underscore = 1;
        }
    }

    return 0;
}
