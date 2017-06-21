//
// Created by tom on 28/05/2017.
//

#ifndef CLIBRARYBOOKS_BOOK_H
#define CLIBRARYBOOKS_BOOK_H

#include <string>

class Book
{
public:
	std::string author;
	std::string title;
	int publicationYear;
	int ID;

    static int counter;
    friend class Library;
    Book();
    int counterNumber();
    int getID() { return ID;}
    void getBook();
	~Book();
};

#endif //CLIBRARYBOOKS_BOOK_H
