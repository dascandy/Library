//
// Created by Tom on 13/06/2017.
//

#include "Person.h"
#include "Library.h"
#include <iostream>

void Person::borrowBook(Book* pBB)
{
	myBook = pBB;
}

void Person::print() const
{
	if (myBook) {
		std::cout << "Book that is in user possession" << std::endl;
                myBook->print();
	} else {
		std::cout << "Have no book in user possession" << std::endl;
	}
}

Book* Person::returnBook() {
	Book* returnBook = myBook;
	myBook = nullptr;
	return returnBook;
}


