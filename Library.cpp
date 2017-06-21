//
// Created by tom on 28/05/2017.
//
#include <iostream>
#include "Book.h"
#include "Library.h"
Library::Library() //: maxAmountOfBooks{0}
{
   // new  Book[maxAmountOfBooks];
}

void Library::setLibraySize(Book*& pBook, int maxSize) {
	maxAmountOfBooks = maxSize;
	pBook = new  Book[maxAmountOfBooks];

}
void Library::addBook2Lib(int i) {
	for (int j = 0; j < i; j++) {

		std::cout << "Book ID: " << pBook[j].ID << std::endl;
		std::cout << "Title: ";
		std::cin >> pBook[j].title;
		std::cout << "Author: ";
		std::cin >> pBook[j].author;
		std::cout << "Publication year: ";
		std::cin >> pBook[j].publicationYear;
		// return pBook[j].ID;
	}
	/*else {
		std::cout << "Library full" << std::endl;
		pBook[0].ID = book_.ID;
		pBook[0].author = book_.author;
		pBook[0].title = book_.title;
		pBook[0].publicationYear = book_.publicationYear;
	}*/
}


int Library::sizeInteger(int a)
{
	setLibraySize(*&pBook, a);
}

}
void Library::printAll() {
	for (int i = 0; i < maxAmountOfBooks; i++) {

		if (pBook[i].ID != -100)
		{
			std::cout << std::endl;
			std::cout << "Book ID: " << pBook[i].ID << std::endl;
			std::cout << "Book Title: " << pBook[i].title << std::endl;
			std::cout << "Book Author: " << pBook[i].author << std::endl;
			std::cout << "Book year: " << pBook[i].publicationYear << std::endl;
			std::cout << "------------Next book------------" << std::endl;
		} else {

			std::cout << "Book" << pBook[i].ID << "is borrowed" << std::endl;
			std::cout << "------------Next book------------" << std::endl;
		}
	}
}

void Library::borrowBook(int i)
{

	//creating tmp Book object to borrow book from library
	Book tmpBook;
	tmpBook.ID = pBook[i].ID;
	tmpBook.title = pBook[i].title;
	tmpBook.author = pBook[i].author;
	tmpBook.publicationYear = pBook[i].publicationYear;

	// assign NULL values to borrowed book
	pBook[i].ID = -100;
	pBook[i].title = "xxx";
	pBook[i].author = "XXX";
	pBook[i].publicationYear = -9999;

	// print space where book was to confirm if is empty
	std::system("clear");
	std::cout << "Print empty space in Library" << std::endl;
    std::cout << "Book ID: " << pBook[i].ID << std::endl;
    std::cout << "Book Title: " << pBook[i].title << std::endl;
    std::cout << "Book Author: " << pBook[i].author << std::endl;
    std::cout << "Book year: " << pBook[i].publicationYear << std::endl;

	//print book that is borrowed
	std::cout << "Print tmp book" << std::endl;
	std::cout << "Book ID: " << tmpBook.ID << std::endl;
	std::cout << "Book Title: " << tmpBook.title << std::endl;
	std::cout << "Book Author: " << tmpBook.author << std::endl;
	std::cout << "Book year: " << tmpBook.publicationYear << std::endl;
}

Library::~Library()
{
    std::cout << "Memory freed in Library Class" << std::endl;// todo delete pointer!
    //delete []pBook;
}
