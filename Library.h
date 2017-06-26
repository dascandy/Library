//
// Created by tom on 28/05/2017.
//

#ifndef CLIBRARYBOOKS_LIBRARAY_H
#define CLIBRARYBOOKS_LIBRARAY_H
#include <string>
#include "Book.h"
#include "Library.h"

class Library
{
private:
    int maxAmountOfBooks;
    Book* pBook;

public:
    Library();
    void setLibraySize(Book*& pBook, int maxSize);
	void sizeInteger(int a);
    void addBook2Lib(int i);
    Book borrowBook(int i);
	void nullPlace(int i); // private function to delete books from Library index when borrowed

	void printAll();
	friend class Person;
    ~Library();
};
#endif //CLIBRARYBOOKS_LIBRARAY_H
