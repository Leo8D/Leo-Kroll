#include <iostream>

using namespace std;

void WhileMax(int number) {
    int user_number = number + 1;

    while(user_number > number) {
        cout << "Ange ett nummer som �r mindre eller lika som " << number << ": ";
        cin >> user_number;
    }

}

int main(int argc, char** argv) {
    int number = 9;

    WhileMax(number);

    return 0;
}
