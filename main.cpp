//
// This is assigment for Arek class - creating a Library with books
//
#include <iostream>
#include "Library.h"
//#include "Book.h"

char menu();

int main()
{
	char choice;
	int number;
	Library lib;

	do {
		choice = menu();
		switch (choice)
        {
			case '1': {
				std::cout << "How many books can fit in library: " << std::endl;
				std::cin >> number;
				lib.setLibraySize(number);
				break;
			}
			case '2': {
				int howManyBooks {0};
				std::cout << "How many books do you want to add?" << std::endl;
				std::cin >> howManyBooks;

				Book *howManyBooksP = new Book[howManyBooks];

				for (int i = 0; i < howManyBooks; i++) {
					howManyBooksP[i].addBook(i);
				}
				for (int j = 0; j <  howManyBooks; j++) {

					lib.addBook2Lib(*howManyBooksP, j);
					std::cout << "Book nr " << j << " added to library" << std::endl;
				}
				break;
			}
			case '3':
				std::cout << "borrow book from a library" << std::endl;
				//lib.addBook2Lib();

				break;

            case '4':
                std::cout << "return book to a library" << std::endl;

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
    std::cout << "3 - Borrow book" << std::endl; //todo create user that can borow book - user can list all books in library
    std::cout << "4 - Return book" << std::endl; // todo create function that user can return book - user can list books he/she have
	std::cout << "9 - to Quit" << std::endl;
    std::cin >> choice;
    return choice;
}