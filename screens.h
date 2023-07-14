#include "library_provider.h"

struct Screen
{
public:
	static void Home()
	{
		LibraryProvider* provider = new LibraryProvider();
		provider->add(new Library("Cat 1","test 2","test 3","test 4"));
		provider->add(new Library("Apl 1", "test 2", "test 3", "test 4"));
		provider->add(new Library("Chest 1", "test 2", "test 3", "test 4"));
		provider->add(new Library("Tiher 1", "test 2", "test 3", "test 4"));
		provider->print_library();
	}
};

