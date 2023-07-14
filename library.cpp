#include "library.h"

Library::Library()
{
	name = "NULL";
	author = "NULL";
	publisher = "NULL";
	genre = "NULL";
}
Library::Library(string name, string author, string publisher, string genre)
{
	this->name = name;
	this->author = author;
	this->publisher = publisher;
	this->genre = genre;
}


