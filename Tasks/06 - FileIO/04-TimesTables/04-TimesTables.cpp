#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream write("tables.txt");
	if (!write.is_open())
		cerr << "File could not be opened";
	for (unsigned int r = 2; r <= 12; r++) {
		for (unsigned int c = 2; c <= 12; c++) {
			write << r * c << "\t";
		}
		write << endl;
	}
	write << endl;
	write.close();

	return 0;
}