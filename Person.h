//
// Created by Tom on 13/06/2017.
//

#ifndef LIBRARY_PERSON_H
#define LIBRARY_PERSON_H
#include "Library.h"

class Person : public Library {

    Library user;
	Book book;

public:
 	void borrowBook(int HowManybooks);

};


#endif //LIBRARY_PERSON_H
