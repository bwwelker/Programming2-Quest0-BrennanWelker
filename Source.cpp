#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int a;
	int b;
	int asciiz = 122;

	for (a = 26; a >= -26; a--)												// defines x axis (range) +26 to -26  (prints each line)
	{

		for (b = 26; b >= -26; b--)											// defines y axis (range) +26 to -26  (prints position on each line)
		{

			if (abs(a) == abs(b) && a != 0)									// aslong as "a" is equal to "b" and "a" is not equal to 0. using abs to print the "*" for the value of "a" + 1.
			{
				cout << (char)(asciiz - abs(a) + 1);						// print the code for "z" (122 in Ascii) - the absuolute value of "a" + 1
			}

			else
			{

				if (a == 0 || b == 0)										// aslong as "a" or "b" are equal to 0 print "*"
				{
					cout << (char)(42);										// char(42) = "*"
				}

				else														// otherwise print and empty space
				{
					cout << (char)(32);
				}
			}
		}
		cout << endl;
	}
	system("Pause");
	return 0;
}