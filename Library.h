//
// Created by tom on 28/05/2017.
//

#ifndef CLIBRARYBOOKS_LIBRARAY_H
#define CLIBRARYBOOKS_LIBRARAY_H

#include <string>
#include <vector>
#include "Book.h"
#include "Library.h"

class Library
{
private:
	std::vector<Book*> pBook;

public:
	Library();
	~Library();
	void size(int a);
	void addBook2Lib(int i);
	Book *borrowBook(int i);
	void returnBook(int i, Book* b);
	void nullPlace(int i); // private function to delete books from Library index when borrowed

	void printAll();
};
#endif //CLIBRARYBOOKS_LIBRARAY_H
