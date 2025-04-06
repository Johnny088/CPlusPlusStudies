#include <iostream>
//#include <cstring>
using namespace std;

const int SIZE = 10;
const int LEN = 100;

struct Book {
    char name[LEN];
    char author[LEN];
    char publisher[LEN];
    char genre[LEN];
};

void PrintAll(Book books[], int count) {
    for (int i = 0; i < count; i++) {
        cout << "\nBook #" << i + 1 << ":\n";
        cout << "Name: " << books[i].name << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Publisher: " << books[i].publisher << endl;
        cout << "Genre: " << books[i].genre << endl;
    }
}

void EditBook(Book books[], int index) {
    cin.ignore();
    cout << "Editing Book #" << index + 1 << ":\n";

    cout << "Enter new name: ";
    cin.getline(books[index].name, LEN);

    cout << "Enter new author: ";
    cin.getline(books[index].author, LEN);

    cout << "Enter new publisher: ";
    cin.getline(books[index].publisher, LEN);

    cout << "Enter new genre: ";
    cin.getline(books[index].genre, LEN);
}

void SearchByAuthor(Book books[], int count, const char* author) {
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].author, author) == 0) {
            cout << "\nFound book:\n";
            cout << "Name: " << books[i].name << ", Author: " << books[i].author << endl;
            found = true;
        }
    }
    if (!found) cout << "No books found by author: " << author << endl;
}

void SearchByName(Book books[], int count, const char* name) {
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].name, name) == 0) {
            cout << "\nFound book:\n";
            cout << "Name: " << books[i].name << ", Author: " << books[i].author << endl;
            found = true;
        }
    }
    if (!found) cout << "No books found with name: " << name << endl;
}

void SortByField(Book books[], int count, const char* field) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            const char* fieldI = nullptr;
            const char* fieldJ = nullptr;

            if (strcmp(field, "name") == 0) {
                fieldI = books[i].name;
                fieldJ = books[j].name;
            }
            else if (strcmp(field, "author") == 0) {
                fieldI = books[i].author;
                fieldJ = books[j].author;
            }
            else if (strcmp(field, "publisher") == 0) {
                fieldI = books[i].publisher;
                fieldJ = books[j].publisher;
            }

            if (fieldI && fieldJ && strcmp(fieldI, fieldJ) > 0) {
                swap(books[i], books[j]);
            }
        }
    }
    cout << "Books sorted by " << field << ".\n";
}

int main() {
    Book books[SIZE];
    int count = 0;

    // ???? ????
    for (int i = 0; i < SIZE; i++) {
        cout << "\nEnter book #" << i + 1 << " details:\n";
        cin.ignore();
        cout << "Name: ";
        cin.getline(books[i].name, LEN);
        cout << "Author: ";
        cin.getline(books[i].author, LEN);
        cout << "Publisher: ";
        cin.getline(books[i].publisher, LEN);
        cout << "Genre: ";
        cin.getline(books[i].genre, LEN);
        count++;
    }

    // ????
    int choice;
    do {
        cout << "\n--- Library Menu ---\n";
        cout << "1. Edit book\n";
        cout << "2. Print all books\n";
        cout << "3. Search by author\n";
        cout << "4. Search by name\n";
        cout << "5. Sort by name\n";
        cout << "6. Sort by author\n";
        cout << "7. Sort by publisher\n";
        cout << "0. Exit\n";
        cout << "Choose option: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int index;
            cout << "Enter book number to edit (1-" << count << "): ";
            cin >> index;

                if (index >= 1 && index <= count)
                    EditBook(books, index - 1);
                else
                    cout << "Invalid index!\n";
            break;
        }
        case 2:
            PrintAll(books, count);
            break;
        case 3: {
            cin.ignore();
            char author[LEN];
            cout << "Enter author to search: ";
            cin.getline(author, LEN);
            SearchByAuthor(books, count, author);
            break;
        }
        case 4: {
            cin.ignore();
            char name[LEN];
            cout << "Enter name to search: ";
            cin.getline(name, LEN);
            SearchByName(books, count, name);
            break;
        }
        case 5:
            SortByField(books, count, "name");
            break;
        case 6:
            SortByField(books, count, "author");
            break;
        case 7:
            SortByField(books, count, "publisher");
            break;
        case 0:
            cout << "Goodbye!\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 0);

    return 0;
}