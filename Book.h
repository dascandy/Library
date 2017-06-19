//
// Created by tom on 28/05/2017.
//

#ifndef CLIBRARYBOOKS_BOOK_H
#define CLIBRARYBOOKS_BOOK_H

#include <string>

class Book
{
    std::string author;
    std::string title;
    int publicationYear;
    int ID;
    static int counter;

public:
    friend class Library;
    Book();
    ~Book();
    int counterNumber();
    int addBook(int howManyBooks);
    int getID() { return ID;}
    void getBook();
};

#endif //CLIBRARYBOOKS_BOOK_H
