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

void LibraryProvider::book_sort_name()
{
	struct TitleComparator {
		bool operator()(const Library* book1, const Library* book2) const {
			return book1->getName() < book2->getName();
		}
	};
	void sortBooksByTitle()
	{
		sort(libraries.begin(), libraries.end(), TitleComparator());
	}
}