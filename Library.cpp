//
// Created by tom on 28/05/2017.
//
#include <iostream>
#include "Book.h"
#include "Library.h"
//TODO create member that will keep maximum of the books in the library (new) I think
Library::Library() : maxAmountOfBooks{0}
{
   // new  Book[maxAmountOfBooks];
}

void Library::setLibraySize(int maxSize) {
	//maxAmountOfBooks = maxSize;
	new  Book[maxSize];
}

void Library::addBook2Lib(Book book_, int i)
{
	if (maxAmountOfBooks != book_.counter)
    {
        pointerBook[i].ID = book_.ID;
        pointerBook[i].author = book_.author;
        pointerBook[i].title = book_.title;
        pointerBook[i].publicationYear = book_.publicationYear;
    } else {
    std::cout << "Library full" << std::endl;
    pointerBook[0].ID = book_.ID;
    pointerBook[0].author = book_.author;
    pointerBook[0].title = book_.title;
    pointerBook[0].publicationYear = book_.publicationYear;}

}

void Library::getBook(int i)
{
    std::cout << "Book ID: " << pointerBook[i].ID << std::endl;
    std::cout << "Book Title: " << pointerBook[i].title << std::endl;
    std::cout << "Book Author: " << pointerBook[i].author << std::endl;
    std::cout << "Book year: " << pointerBook[i].publicationYear << std::endl;
}
Library::~Library()
{
    std::cout << "Memory freed in Library Class" << std::endl;
    delete []pointerBook;
}

