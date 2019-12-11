#include <iostream>
using namespace std;
int main()
{
	char lastName[20];
	char firstName[20];
	char space = ' ';
	cout << "Please enter your first last name: ";
	cin.getline(lastName, 20);
	cout << "Please enter your first name: ";
	cin.getline(firstName, 20);
	cout << firstName << " ";
	for (int i = 0; i < strlen(lastName); i++)
	{
		if (lastName[i] == space) {
			lastName[i] = '-';
		}
		
	}
	cout << lastName;

	return 0;
}