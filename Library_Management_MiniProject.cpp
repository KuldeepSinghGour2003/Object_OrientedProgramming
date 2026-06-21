#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    bool isIssued;

    Book(int i, string t, string a) {
        id = i;
        title = t;
        author = a;
        isIssued = false;
    }
};


class User {
protected:
    string name;
public:
    User(string n) {
        name = n;
    }
    virtual string getType() = 0;
    string getName() {
        return name;
    }
};

class Student : public User {
public:
    Student(string n) : User(n) {}
    string getType() {
        return "Student";
    }
};


class Staff : public User {
public:
    Staff(string n) : User(n) {}
    string getType() {
        return "Staff";
    }
};


class Library {
    vector<Book> books;

public:
    void addBook(int id, string title, string author) {
        for (auto &b : books) {
            if (b.id == id)
                throw runtime_error("Book ID already exists!");
        }
        books.push_back(Book(id, title, author));
        cout << "Book added successfully\n";
    }

    void issueBook(int id, User &user) {
        for (auto &b : books) {
            if (b.id == id) {
                if (b.isIssued)
                    throw runtime_error("Book already issued!");
                b.isIssued = true;
                cout << "Book issued to " << user.getType()
                     << " (" << user.getName() << ")\n";
                return;
            }
        }
        throw runtime_error("Book not found!");
    }

    void returnBook(int id) {
        for (auto &b : books) {
            if (b.id == id) {
                if (!b.isIssued)
                    throw runtime_error("Book was not issued!");
                b.isIssued = false;
                cout << "Book returned successfully\n";
                return;
            }
        }
        throw runtime_error("Book not found!");
    }

    void displayBooks() {
        cout << "\n--- Library Books ---\n";
        for (auto &b : books) {
            cout << "ID: " << b.id
                 << ", Title: " << b.title
                 << ", Author: " << b.author
                 << ", Status: " << (b.isIssued ? "Issued" : "Available")
                 << endl;
        }
    }
};

int main() {
    Library lib;
    int choice, id;
    string title, author, name;
    int userType;

    while (true) {
        cout << "\n===== LIBRARY MANAGEMENT MENU =====\n";
        cout << "1. Add Book\n";
        cout << "2. Issue Book\n";
        cout << "3. Return Book\n";
        cout << "4. Display Books\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        try {
            switch (choice) {
            case 1:
                cout << "Enter Book ID: ";
                cin >> id;
                cin.ignore();
                cout << "Enter Title: ";
                getline(cin, title);
                cout << "Enter Author: ";
                getline(cin, author);
                lib.addBook(id, title, author);
                break;

            case 2:
                cout << "Enter Book ID: ";
                cin >> id;
                cin.ignore();
                cout << "Enter User Name: ";
                getline(cin, name);
                cout << "User Type (1-Student, 2-Staff): ";
                cin >> userType;

                if (userType == 1) {
                    Student s(name);
                    lib.issueBook(id, s);
                } else if (userType == 2) {
                    Staff st(name);
                    lib.issueBook(id, st);
                } else {
                    cout << "Invalid user type\n";
                }
                break;

            case 3:
                cout << "Enter Book ID: ";
                cin >> id;
                lib.returnBook(id);
                break;

            case 4:
                lib.displayBooks();
                break;

            case 5:
                cout << "Exiting program...\n";
                return 0;

            default:
                cout << "Invalid choice\n";
            }
        }
        catch (exception &e) {
            cout << "Error: " << e.what() << endl;
        }
    }
}
