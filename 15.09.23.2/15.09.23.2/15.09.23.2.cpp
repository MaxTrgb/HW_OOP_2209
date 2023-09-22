#include <iostream>
#include "Library.h"
using namespace std;

int main() {
    Library library;

    // Adding books to the library
    library.addBook("Book1", "Author1", 2020, true);
    library.addBook("Book2", "Author2", 2015, false);
    library.addBook("Book3", "Author3", 2018, true);

    // Displaying all books in the library
    cout << "Library Contents:\n";
    library.displayAllBooks();

    // Issuing and returning books
    library.issueBook("Book1");
    library.issueBook("Book2");
    library.returnBook("Book1");

    // Displaying updated library contents
    cout << "\nUpdated Library Contents:\n";
    library.displayAllBooks();

    // Removing a book
    library.removeBook("Book3");

    // Displaying final library contents
    cout << "\nFinal Library Contents:\n";
    library.displayAllBooks();

    return 0;
}
