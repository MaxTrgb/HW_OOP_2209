#include "Library.h"
#include <iostream>

// Constructor to create a book
Library::Book::Book(const string& title, const string& author, int year, bool available)
    : title(title), author(author), year(year), available(available) {}

// Display information about the book
void Library::Book::displayInfo() const {
    cout << "Title: " << title << ", Author: " << author
        << ", Year: " << year << ", Available: " << (available ? "Yes" : "No")
        << endl;
}

// Constructor
Library::Library() {}

// Add a new book to the library
void Library::addBook(const string& title, const string& author, int year, bool available) {
    books.push_back(Book(title, author, year, available));
}

// Remove a book from the library (if available)
void Library::removeBook(const string& title) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->title == title && it->available) {
            books.erase(it);
            cout << "Book '" << title << "' removed from the library." << endl;
            return;
        }
    }
    cout << "Book '" << title << "' not found or not available." << endl;
}

// Issue a book to a student (change availability)
void Library::issueBook(const string& title) {
    for (auto& book : books) {
        if (book.title == title && book.available) {
            book.available = false;
            cout << "Book '" << title << "' issued to a student." << endl;
            return;
        }
    }
    cout << "Book '" << title << "' not found or not available." << endl;
}

// Return a book by a student (change availability)
void Library::returnBook(const string& title) {
    for (auto& book : books) {
        if (book.title == title && !book.available) {
            book.available = true;
            cout << "Book '" << title << "' returned by a student." << endl;
            return;
        }
    }
    cout << "Book '" << title << "' not found or already available." << endl;
}

// Display information about all books in the library
void Library::displayAllBooks() const {
    cout << "Library Contents:\n";
    for (const Book& book : books) {
        book.displayInfo();
    }
}
