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
	void Red(int index);
	void find_by_name(string name);
	void find_by_author(string author);
	void book_sort_name();
	void book_sort_author();
	void book_sort_publisher();
};