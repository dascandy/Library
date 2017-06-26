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

Book::Book() {
  std::cout << "Book ID: " << ID << std::endl;
  std::cout << "Title: ";
  std::cin >> title;
  std::cout << "Author: ";
  std::cin >> author;
  std::cout << "Publication year: ";
  std::cin >> publicationYear;
}

void Book::print() const {
  std::cout << "Book ID: " << ID << std::endl;
  std::cout << "Book title: " << title << std::endl;
  std::cout << "Book author: " << author << std::endl;
  std::cout << "Book publication year: " << publicationYear << std::endl;
}

