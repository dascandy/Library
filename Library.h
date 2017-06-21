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
	int sizeInteger(int a);
    void addBook2Lib(int i);
    void borrowBook(int i);
	void printAll();
    ~Library();
};
#endif //CLIBRARYBOOKS_LIBRARAY_H
