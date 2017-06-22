//
// Created by Tom on 13/06/2017.
//

#ifndef LIBRARY_PERSON_H
#define LIBRARY_PERSON_H
#include "Library.h"

class Person
{
protected:
	Book   userBook;
public:
	void borrowBookP(Book* pBook, int i);
	void returnBook();
	friend class Library;
	void print();
};


#endif //LIBRARY_PERSON_H
