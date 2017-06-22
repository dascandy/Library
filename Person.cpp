//
// Created by Tom on 13/06/2017.
//

#include "Person.h"
//#include "library.h"
#include <iostream>

void Person::borrowBookP(Book* pBook, int i)
{
	userBook.ID = pBook[i].ID;
	userBook.title = pBook[i].title;
	userBook.author = pBook[i].author;
	userBook.publicationYear = pBook[i].publicationYear;

	/*std::cout << userBook.ID << std::endl;
	std::cout << userBook.title << std::endl;
	std::cout << userBook.author << std::endl;
	std::cout << userBook.publicationYear << std::endl;
*/
}

void Person::print()
{
	std::cout << "Book that is in user possession" << std::endl;
	std::cout << "Book ID: " << userBook.ID << std::endl;
	std::cout << "Book Title: " <<userBook.title << std::endl;
	std::cout << "Book Author: " << userBook.author << std::endl;
	std::cout << "Book year: " << userBook.publicationYear << std::endl;
}
