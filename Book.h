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
	int ID;
	std::string author;
	std::string title;
	int publicationYear;
public:
	Book();
	int getID() { return ID;}
	friend class Library;
	friend class Person;
	int counterNumber() {return counter;}
  //  void getBook();
	~Book();
};

#endif //CLIBRARYBOOKS_BOOK_H
