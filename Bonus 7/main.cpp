#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {

    int underscore, stars, rader, nextunder;

    cout << "S�g ett nummer �ver 1" << endl;
    cin >> underscore;
    cout << "Hur m�nga rader ska skrivas ut?";
    cin >> rader;
    cout << "Hur m�nga stj�rnor ska skrivas ut p� varje rad?";
    cin >> stars;


    while(underscore < 1 || underscore > 10) {
        cout << "Mellan 1-10!" << endl;
        cin >> underscore;
    }
    

    for(int i = 0; i < rader; i++) {
        for(int j = 0; j < stars; j++) {
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

        if(underscore > stars) {
            underscore = 1;
        }
    }

    return 0;
}
