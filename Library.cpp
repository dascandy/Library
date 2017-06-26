//
// Created by tom on 28/05/2017.
//
#include <iostream>
#include "Book.h"
#include "Library.h"
#include "Person.h"

Library::Library() 
{}

void Library::addBook2Lib(int i) {
	for (int j = 0; j < i; j++) {
		std::cout << "Book ID: " << pBook[j].ID << std::endl;
		std::cout << "Title: ";
		std::cin >> pBook[j].title;
		std::cout << "Author: ";
		std::cin >> pBook[j].author;
		std::cout << "Publication year: ";
		std::cin >> pBook[j].publicationYear;
	}
}

void Library::sizeInteger(int maxSize)
{
	pBook.resize(maxSize);
}

void Library::printAll() 
{
	for (int i = 0; i < pBook.size(); i++) 
	{
		if (pBook[i])
		{
			std::cout << std::endl;
			std::cout << "Book ID: " << pBook[i].ID << std::endl;
			std::cout << "Book Title: " << pBook[i].title << std::endl;
			std::cout << "Book Author: " << pBook[i].author << std::endl;
			std::cout << "Book year: " << pBook[i].publicationYear << std::endl;
			std::cout << "------------Next book------------" << std::endl;
		} else {
			std::cout << "Book" << i << "is borrowed" << std::endl;
			std::cout << "------------Next book------------" << std::endl;
		}
	}
}

Book Library::borrowBook(int i)
{
	Book* borrowedBook = pBook[i];
	pBook[i] = nullptr;
	return borrowedBook;
}

Library::~Library()
{
	for (auto book : pBook) {
		delete book;
	}
}
