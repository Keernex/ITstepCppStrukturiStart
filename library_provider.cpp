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

void LibraryProvider::edit_book(int index)
{
	cout << "Book " << index + 1 << endl;

	string name;
	cout << "Enter name: ";
	cin >> name;
	books[index]->name = name;

	cout << "Enter author: ";
	cin >> name;
	books[index]->author = name;

	cout << "Enter publisher: ";
	cin >> name;
	books[index]->publisher = name;

	cout << "Enter genre: ";
	cin >> name;
	books[index]->genre = name;
	cout << endl;
}

void LibraryProvider::print_library()
{
	for (int i = 0; i < count; i++)
	{
		cout << "Book " << i + 1;
		cout << " Name: " << books[i]->name;
		cout << " Age: " << books[i]->author;
		cout << " Publisher: " << books[i]->publisher;
		cout << " Genre: " << books[i]->genre;
		cout << endl;
	}cout << endl;
}

void LibraryProvider::find_by_name(string name)
{
	for (int i = 0; i < count; i++)
	{
		if (name == books[i]->name)
		{
			cout << "Book ";
			cout << " Name: " << books[i]->name;
			cout << " Age: " << books[i]->author;
			cout << " Publisher: " << books[i]->publisher;
			cout << " Genre: " << books[i]->genre;
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
			cout << "Book ";
			cout << " Name: " << books[i]->name;
			cout << " Age: " << books[i]->author;
			cout << " Publisher: " << books[i]->publisher;
			cout << " Genre: " << books[i]->genre;
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
	cout << "..." << endl;
	cout << "Books are sorted by name" << endl;
	cout << "..." << endl;
}

void LibraryProvider::book_sort_author()
{
	sort(books, books + count,
		[](const Library* a, const Library* b) {
			return (a->author < b->author);
		}
	);
	cout << "..." << endl;
	cout << "Books are sorted by author" << endl;
	cout << "..." << endl;
}

void LibraryProvider::book_sort_publisher()
{
	sort(books, books + count,
		[](const Library* a, const Library* b) {
			return (a->publisher < b->publisher);
		}
	);
	cout << "..." << endl;
	cout << "Books are sorted by publisher" << endl;
	cout << "..." << endl;
}