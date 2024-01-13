#include <iostream>
using namespace std;

int L;		//This is not an ideal location - we will soon address this

void displayBanner(int k)
{
	for (unsigned int n = 0; n < (k + 4); n++) {
		cout << "*";
	}
}
int main()
{
	const string message = "Welcome to Computer Science";
	
	//Get the length of the string
	L = message.length();

	//Write the banner above
	displayBanner(L);
	cout << endl;

	cout << "* ";				//Leading *
	cout << message;			//Message
	cout << " *" << endl;		//Trailing *

	//Write the banner below
	displayBanner(L);
	cout << endl;

	//Tell the calling shell all is well
	return 0;
}