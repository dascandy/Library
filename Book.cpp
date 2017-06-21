//
// Created by tom on 28/05/2017.
//
#include "Book.h"
#include <iostream>

int Book::counter = 0;

Book::Book():author("n/a"), title("n/a"), publicationYear(0) // ID(0)
{
    counter++;
    ID = counter;
}

int Book::counterNumber()
{ return counter;}

/*
int Book::addBook(int howManyBooks)
{
    std::cout << "Book ID:" << ID << std::endl;
    std::cout << "Title: ";
    std::cin >> title;
    std::cout << "Author: ";
    std::cin >> author;
    std::cout << "Publication year: ";
    std::cin >> publicationYear;
    return ID;
}
*/

void Book::getBook()
{
    std::cout << "Book ID: " << ID << std::endl;
    std::cout << "Book Title: " << title << std::endl;
    std::cout << "Book Author: " << author << std::endl;
    std::cout << "Book Publication Year: " << publicationYear << std::endl;
}

Book::~Book()
{

}
