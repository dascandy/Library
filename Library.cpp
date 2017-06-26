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
		pBook[j] = new Book();
	}
}

void Library::setSize(int maxSize)
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
			pBook[i]->print();
		} else {
			std::cout << "Book" << i << "is borrowed" << std::endl;
		}
		std::cout << "------------Next book------------" << std::endl;
	}
}

Book *Library::borrowBook(int i)
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
