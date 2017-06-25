//
// Created by Tom on 13/06/2017.
//

#include "Person.h"
#include "library.h"
#include <iostream>

void Person::borrowBookP(Book* pBB)
{
	userBook.ID = pBB->ID;
	userBook.title = pBB->title;
	userBook.author = pBB->author;
	userBook.publicationYear = pBB->publicationYear;
}

void Person::print()
{
	std::cout << "Book that is in user possession" << std::endl;
	std::cout << "Book ID: " << userBook.ID << std::endl;
	std::cout << "Book Title: " <<userBook.title << std::endl;
	std::cout << "Book Author: " << userBook.author << std::endl;
	std::cout << "Book year: " << userBook.publicationYear << std::endl;
}

void Person::returnBook(Book* pBB) {

	pBB->ID = userBook.ID;
	pBB->title = userBook.title;
	pBB->author = userBook.author;
	pBB->publicationYear = userBook.publicationYear;
}
