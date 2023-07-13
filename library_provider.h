#include "library.h"

struct LibraryProvider
{
	int capacity = 100;
	Library** books = nullptr;
	int count = 0;
	LibraryProvider();
	~LibraryProvider();

	void add(Library* animal);
	void remove(int index);
	void print();
	Library* get(int index);
	int size();
};