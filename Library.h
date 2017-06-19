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
    Book* pointerBook;

public:
    Library();
    void setLibraySize(int maxSize);
    void addBook2Lib(Book book_, int i);
    void getBook(int i);
    ~Library();
};
#endif //CLIBRARYBOOKS_LIBRARAY_H
