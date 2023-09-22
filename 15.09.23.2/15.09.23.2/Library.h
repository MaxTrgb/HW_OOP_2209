#pragma once
#include <vector>
#include <string>
using namespace std;


class Library {
public:
    class Book {
    public:
        // Constructor to create a book
        Book(const string& title, const string& author, int year, bool available);

        // Display information about the book
        void displayInfo() const;

    public:
        string title;
        string author;
        int year;
        bool available;
    };

public:
    // Constructor
    Library();

    // Add a new book to the library
    void addBook(const string& title, const string& author, int year, bool available);

    // Remove a book from the library (if available)
    void removeBook(const string& title);

    // Issue a book to a student (change availability)
    void issueBook(const string& title);

    // Return a book by a student (change availability)
    void returnBook(const string& title);

    // Display information about all books in the library
    void displayAllBooks() const;

public:
    vector<Book> books;
};

