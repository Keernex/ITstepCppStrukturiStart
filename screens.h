#include "library_provider.h"

struct Screen
{
public:
	static void Home()
	{
		LibraryProvider* provider = new LibraryProvider();
		provider->add(new Library("Dat 1","test 2","test 3","test 4"));
		provider->add(new Library("Cpl 1", "test 2", "test 3", "test 4"));
		provider->add(new Library("Shest 1", "test 2", "test 3", "test 4"));
		provider->add(new Library("Aiher 1", "test 2", "test 3", "test 4"));
		provider->print_library();
		provider->book_sort_name();
		provider->print_library();
	}
};

