#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;
public:
    Book(string title, string author, double price) {
        this->title = title;
        this->author = author;
        this->price = price;
    }

    void getinfo() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }

    double getPrice() const {
        return price;
    }

    string getAuthor() const {
        return author;
    }
};

class Bookstore {
private:
    vector<Book> books;
public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    void displayBooks() const {
        if (books.empty()) {
            cout << "Store is empty." << endl;
            
        }
        for (const auto& b : books) {
            b.getinfo();
            cout << "------------------" << endl;
        }
    }

    double calculateTotalCost() const {
        double total = 0.0;
        for (const auto& b : books) {
            total += b.getPrice();
        }
        return total;
    }

    void showBooksByAuthor(const string& author) const {
        bool found = false;
        for (const auto& b : books) {
            if (b.getAuthor() == author) {
                b.getinfo();
                cout << "------------------" << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "No books by author \"" << author << "\" found." << endl;
        }
    }
};

int main() {
    Bookstore store;
    store.addBook(Book("War and Peace", "Leo Tolstoy", 250.5));
    store.addBook(Book("Kobzar", "Taras Shevchenko", 150.0));
    store.addBook(Book("Master and Margarita", "Mikhail Bulgakov", 300.0));

    cout << "Books in store:\n";
    store.displayBooks();

    cout << "Total cost: " << store.calculateTotalCost() << " UAH" << endl;

    string author;
    cout << "\nEnter author to search: ";
    getline(cin, author);

    store.showBooksByAuthor(author);

    return 0;
}