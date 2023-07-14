#include "library_provider.h"

struct Screen
{
public:
	static void Home()
	{
		LibraryProvider* provider = new LibraryProvider();
		provider->add(new Library("test 1","test 2","test 3","test 4"));
		provider->print_library();
	}
};

