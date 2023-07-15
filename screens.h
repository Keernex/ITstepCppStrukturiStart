#include "animal.h"

struct Screen
{
public:
	static void Home()
	{
		Animal animal;
		int q = 0;
		cout << "1 - input characteristics" << endl;
		cout << "2 - print characteristics" << endl;
		cout << "3 - Vois" << endl;
		while (true)
		{
			cout << "Enter num: ";
			cin >> q;
			if (q == 1)
			{
				animal.input_characteristics();
			}if (q == 2)
			{
				animal.print_characteristics();
			}if (q == 3)
			{
				animal.vois();
				break;
			}
		}
	}
};