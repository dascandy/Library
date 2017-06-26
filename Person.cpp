//
// Created by Tom on 13/06/2017.
//

#include "Person.h"
#include "library.h"
#include <iostream>

void Person::borrowBookP(Book* pBB)
{
	myBook = pBB;
}

void Person::print() const
{
	if (myBook) {
		std::cout << "Book that is in user possession" << std::endl;
		std::cout << "Book ID: " << userBook.ID << std::endl;
		std::cout << "Book Title: " <<userBook.title << std::endl;
		std::cout << "Book Author: " << userBook.author << std::endl;
		std::cout << "Book year: " << userBook.publicationYear << std::endl;
	} else {
		std::cout << "Have no book in user possession" << std::endl;
	}
}

Book* Person::returnBook() {
	Book* returnBook = myBook;
	myBook = nullptr;
	return returnBook;
}


