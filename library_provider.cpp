#include "library_provider.h"

LibraryProvider::LibraryProvider()
{
	count = 0;
	books = new Library * [capacity];
}

LibraryProvider::~LibraryProvider()
{
	delete[] books;
	count = 0;
}

void LibraryProvider::add(Library* book)
{
	if (count < capacity)
	{
		books[count] = book;
		count++;
	}
}

void LibraryProvider::remove(int index)
{
	if (index >= 0 && index < count)
	{
		delete books[index];
		for (int i = index; i < count - 1; i++)
		{
			books[i] = books[i + 1];
		}
		count--;
	}
}

Library* LibraryProvider::get(int index)
{
	if (index >= 0 && index < count)
	{
		return books[index];
	}
	return nullptr;
}

int LibraryProvider::size()
{
	return count;
}

void LibraryProvider::print_library()
{
	for (int i = 0; i < count; i++) 
	{
		cout << "Book " << i << ' ' << endl;
		cout << "Name: " << books[i]->name << endl;
		cout << "Age: " << books[i]->author << endl;
		cout << "Weight: " << books[i]->publisher << endl;
		cout << "Height: " << books[i]->genre << endl;
		cout << endl;
	}
}
void LibraryProvider::Red(int index)
{
	if (index >= 0 && index < count)
	{
		/*delete LibraryProvider::books[index];*/
		cout << "Book "  << index << endl;
	}
}

void LibraryProvider::find_by_name(string name)
{
	for (int i = 0; i < count; i++)
	{
		if (name == books[i]->name)
		{
			cout << "Book" << endl;
			cout << "Name: " << books[i]->name << endl;
			cout << "Age: " << books[i]->author << endl;
			cout << "Weight: " << books[i]->publisher << endl;
			cout << "Height: " << books[i]->genre << endl;
			cout << endl;
		}
	}
}
void LibraryProvider::find_by_author(string author)
{
	for (int i = 0; i < count; i++)
	{
		if (author == books[i]->author)
		{
			cout << "Book" << endl;
			cout << "Name: " << books[i]->name << endl;
			cout << "Age: " << books[i]->author << endl;
			cout << "Weight: " << books[i]->publisher << endl;
			cout << "Height: " << books[i]->genre << endl;
			cout << endl;
		}
	}
}


void LibraryProvider::book_sort_name()
{
	sort(books, books + count,
		[](const Library* a, const Library* b) {
			return (a->name < b->name);
		}
	);
}

void LibraryProvider::book_sort_author()
{
	sort(books, books + count,
		[](const Library* a, const Library* b) {
			return (a->author < b->author);
		}
	);
}

void LibraryProvider::book_sort_publisher()
{
	sort(books, books + count,
		[](const Library* a, const Library* b) {
			return (a->publisher < b->publisher);
		}
	);
}