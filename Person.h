//
// Created by Tom on 13/06/2017.
//

#ifndef LIBRARY_PERSON_H
#define LIBRARY_PERSON_H
#include "Library.h"

class Person : public Library {

    Library user[2];


public:
	friend class Libray;
 	void borrowBook();
	void returnBook();

};


#endif //LIBRARY_PERSON_H
