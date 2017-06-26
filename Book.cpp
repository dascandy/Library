//
// Created by tom on 28/05/2017.
//
#include "Book.h"
#include <iostream>

int Book::counter = 0;

Book::Book(std::string author, std::string title, int publicationYear)
: author(author)
, title(title)
, publicationYear(publicationYear)
{
}


