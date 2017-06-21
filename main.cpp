//
// This is assigment for Arek class - creating a Library with books
//
#include <iostream>
#include "Library.h"
//#include "Book.h"
#include "Person.h"

char menu();

int main()
{
	char choice;
	int maxSizeLibrary;
	Library lib;
	Person person;

	do {
		choice = menu();
		switch (choice)
        {
			case '1': {
				std::cout << "How many books can fit in library: " << std::endl;
				std::cin >> maxSizeLibrary;
				lib.sizeInteger(maxSizeLibrary);
				break;
			}
			case '2': {
				int howManyBooks {0};
				std::cout << "How many books do you want to add?" << std::endl;
				std::cin >> howManyBooks;
				lib.addBook2Lib(howManyBooks);
				break;
			}
			case '3':
				std::cout << "borrow book from a library" << std::endl;
				std::cout << "please provide book ID you wish to borrow: ";
				int book2Borrow;
				std::cin >> book2Borrow;
				lib.borrowBook(book2Borrow+1);
				break;

            case '4':
                std::cout << "return book to a library" << std::endl;

                break;
			case '5':
				std::cout << "Print all books in library" << std::endl;
				std::system("clear");
				lib.printAll();
				break;
			case '6':
				std::cout << "Print books in user posesion" << std::endl;
				std::system("clear");
				person.print();
				break;
            default:
                std::cout << "Exit" << std::endl;
        }

    }while (choice != '9');

    system("clear");
/*

    for (int i = 0; i < howManyBooks; i++)
    {
        std::cout << "Book for ya sir: " << i << std::endl;
        lib.getBook(i);
        std::cout << std::endl;
    }
*/

    //delete []howManyBooksP;  // todo when do delete memory?
    std::cout << "Memory freed in main" << std::endl;
    return 0;
}

char menu() {
    char choice;

    std::cout << "Please make your selection" << std::endl;
    std::cout << "Press number: " << std::endl;
    std::cout << "1 - Set how many books can fit in to the library" << std::endl; // todo create function set size of library
    std::cout << "2 - Add books to library" << std::endl; //todo create function to add new book to library
    std::cout << "3 - Borrow book" << std::endl; //todo create user that can borrow book - user can list all books in library
    std::cout << "4 - Return book" << std::endl; // todo create function that user can return book - user can list books he/she have
	std::cout << "5 - Print out all books" << std::endl;
	std::cout << "6 - Print books borrowed by user" << std::endl;
	std::cout << "9 - to Quit" << std::endl;
    std::cin >> choice;
    return choice;
}