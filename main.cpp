#include "car.h"


int main()
{
	Car car;
	car.input_car();
	car.print_car();
	string key;
	cout << endl;
	cout << "keyword: " << endl;
	cin >> key;
	car.finder_car(key);
	return 0;
}
