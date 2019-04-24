#include <iostream>

using namespace std;

int main() {
int i = 0;
string ord1;

cin >> ord1;

while (ord1[i] != '\0'){
i++;
}
for (int x = 0; x < i; x++) {

if (ord1[x] == 'Z') {
ord1[x] = 'a';
}
}

cout << ord1;

	return 0;
}
