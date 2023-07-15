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
		cout << endl;
		int q = 0;
		cout << "1 - add book" << endl;
		cout << "2 - remove book" << endl;
		cout << "3 - edit book" << endl;
		cout << "4 - print library" << endl;
		cout << "5 - find by name" << endl;
		cout << "6 - find by author" << endl;
		cout << "7 - book sort name" << endl;
		cout << "8 - booksort author" << endl;
		cout << "9 - book sort publisher" << endl;
		cout << "10 - end" << endl;
		while (true)
		{
			cin >> q;
			cout << endl;
			if (q == 1)
			{
				cout << "Add book:" << endl;
				string h1;
				cout << "Enter name: ";
				cin >> h1;

				string h2;
				cout << "Enter author: ";
				cin >> h2;

				string h3;
				cout << "Enter publisher: ";
				cin >> h3;

				string h4;
				cout << "Enter genre: ";
				cin >> h4;
				cout << endl;

				provider->add(new Library(h1, h2, h3, h4));
			}if (q == 2)
			{
				int index;
				cout << "Enter index: ";
				cin >> index;
				provider->remove(index);
				cout << "Book " << index <<" delete" << endl;
			}if (q == 3)
			{
				int index;
				cout << "Enter index: ";
				cin >> index;
				cout << endl;
				provider->edit_book(index);
			}if (q == 4)
			{
				provider->print_library();
			}if (q == 5)
			{
				string h1;
				cout << "Enter name: ";
				cin >> h1;
				cout << endl;
				provider->find_by_name(h1);
			}if (q == 6)
			{
				string h2;
				cout << "Enter author: ";
				cin >> h2;
				cout << endl;
				provider->find_by_author(h2);
			}if (q == 7)
			{
				provider->book_sort_name();
			}if (q == 8)
			{
				provider->book_sort_author();
			}if (q == 9)
			{
				provider->book_sort_publisher();
			}if (q == 10)
			{
				break;
			}
		}
	}
};

