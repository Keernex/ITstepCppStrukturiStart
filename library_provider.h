#include "library.h"

struct LibraryProvider
{
	int capacity = 100;
	Library** books = nullptr;
	int count = 0;
	LibraryProvider();
	~LibraryProvider();

	void add(Library* book);
	void remove(int index);
	Library* get(int index);
	int size();
	void print_library();
};