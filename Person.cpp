//
// Created by Tom on 13/06/2017.
//

#include "Person.h"
//#include "library.h"
#include <iostream>

void Person::borrowBook(Book book)
{
	userBook.ID = book.ID;
	userBook.title = book.title;
	userBook.author = book.author;
	userBook.publicationYear = book.publicationYear;

}

void Person::print()
{
	std::cout << "Book ID: " << userBook.ID << std::endl;
	std::cout << "Book Title: " <<userBook.title << std::endl;
	std::cout << "Book Author: " << userBook.author << std::endl;
	std::cout << "Book year: " << userBook.publicationYear << std::endl;
}
