//
// Created by Tom on 13/06/2017.
//

#ifndef LIBRARY_PERSON_H
#define LIBRARY_PERSON_H
#include "Library.h"

class Person
{
protected:
	Book *myBook = nullptr;
public:
	void borrowBook(Book* pBB);
	Book* returnBook();
	void print() const;
};


#endif //LIBRARY_PERSON_H
