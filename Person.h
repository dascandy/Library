//
// Created by Tom on 13/06/2017.
//

#ifndef LIBRARY_PERSON_H
#define LIBRARY_PERSON_H
#include "Library.h"

class Person
{
protected:
	Book userBook;
public:
	void borrowBook(Book book);
	void returnBook();
	void print();


};


#endif //LIBRARY_PERSON_H
