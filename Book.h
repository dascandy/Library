//
// Created by tom on 28/05/2017.
//

#ifndef CLIBRARYBOOKS_BOOK_H
#define CLIBRARYBOOKS_BOOK_H

#include <string>

class Book
{
protected:
	static int counter;
	int ID = counter++;
	std::string author;
	std::string title;
	int publicationYear;
public:
	Book();
	int getID() const { return ID;}
};

#endif //CLIBRARYBOOKS_BOOK_H
