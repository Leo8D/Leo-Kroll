#include <iostream>

using namespace std;

int main() {
	int array1[5], array2[5], correct = 0;
	
	array1[0] = 1;
	array1[1] = 5;
	array1[2] = 1;
	array1[3] = 5;
	array1[4] = 1;
	
	for(int i = 0; i < 5; i++)
	{
		cout << "Ange ett nummer: ";
		cin >> array2[i];
	}
	
	for(int count = 0; count < 5; count++)
	{
		if(array2[count] == array1[count])
		{
			cout << "Rätt svar" << endl;
			correct++;
		} else {
			cout << "Fel svar" << endl;
		}
	}
	
	if(correct == 5)
	{
		cout << "Du vann!";
	}
	
	return 0;
}

