#include <iostream>

using namespace std;

int main() {
	int numbers[5], is_same;
	
	for(int ange_siffra = 0; ange_siffra < 5; ange_siffra++)
	{
	cout << "Ange ett nummer: ";
	cin >> numbers[ange_siffra];
	}
	
	for(int i = 0; i < 5; i++)
	{
		for(int test = 0; test < 5; test++)
		{
			if(numbers[i] == numbers[test] and i != test)
			{
			is_same = true;
			
			} else {
				
			is_same = false;
			}
			
			if(is_same == true)
			{
			cout << numbers[i] << " är de samma" << endl;
			}
		}
	}
	
	return 0;
}
