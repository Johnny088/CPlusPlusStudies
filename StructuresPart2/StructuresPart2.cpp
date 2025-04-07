#include <iostream>
#include <windows.h>
using namespace std;
#define size 10 
struct library {
    char name[100];
    char autor[100];
    char publisher[100];
    char genre[100];
};
void SetColor(int color)//0-15
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void AddBooks(library book[])
{
    for (int i = 0; i < size; i++)
    {
        cout << "enter the name of the book #" << i + 1 <<"\n";
        cin >> book[i].name;
        cout << "enter the autor of the book #" << i + 1 << "\n";
        cin >> book[i].autor;
        cout << "enter the publisher of the book #" << i + 1 << "\n";
        cin >> book[i].publisher;
        cout << "enter the genre of the book #" << i + 1 << "\n";
        cin >> book[i].genre;
    }
}
void ShowAllBoooks(library book[])
{
    for (int i = 0; i < size; i++)
    {
        cout << "The name of the book: #" << i + 1 << "\t" << book[i].name << "\n";
        cout << "The autor of the book: #" << i + 1 << "\t" << book[i].autor << "\n";
        cout << "The publisher of the book: #" << i + 1 << "\t" << book[i].publisher << "\n";
        cout << "The genre of the book: #" << i + 1 << "\t" << book[i].genre << "\n\n";
    }

}
void ShowOneBook(library book)
{
    
        cout << "The name of the book: #" << "\t" << book.name << "\n";
        cout << "The autor of the book: #"  << "\t" << book.autor << "\n";
        cout << "The publisher of the book: #" << "\t" << book.publisher << "\n";
        cout << "The genre of the book: #" << "\t" << book.genre << "\n\n";
    

}
void EditBook(library book[])
{
    int index;
    cout << "enter the index of the book:\n";
    cin >> index;
    cout << "Editing the book # " << index << "\n";
    cout << "enter the name:\n";
    cin >> book[index-1].name;
    cout << "enter the auto:\n";
    cin >> book[index-1].autor;
    cout << "enter the publisher:\n";
    cin >> book[index-1].publisher;
    cout << "enter the genre:\n";
    cin >> book[index-1].genre;
    
}
void SearchAutor(library book[], char autor[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(book[i].autor, autor) == 0)
        {
            ShowOneBook(book[i]);
        }
    }
}
void menu(library book[])
{
    int choice;
    char NameOfAutor[20];
    
    do
    {
        cout << "Welcome to the library. Enter your choice: \n1 - edditing books into the library \n2 - showing all books\n3 - searching the book using the autor's name\n";
        cout << "4 - searching the book using the autor's name \n5 - searching the book using the name of the book \n6 - sorting the array by using the name of the books\n";
        cout << "7 - sorting the array by using the autor of the books \n8 - sorting the array by using the publisher of the books \n0 - Exit\n";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
            EditBook(book);
            /*AddBooks(book);*/
            break;
        case 2:
            ShowAllBoooks(book);
            break;
        case 3:
            cout << "Enter the  Autor's name:\n";
            cin.getline(NameOfAutor,20);
            SearchAutor(book, NameOfAutor);
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 0:
        default:
            SetColor(12); cout << "your choice is incorrect\n"; SetColor(7); 
            break;
        }

    } while (choice != 0);
}
int main()
{
    library book[size];
    book[0] = { "The great getsby", "Scott Finzgerald", "Novel", "Charles Scribner's Sons" };
    book[1] = { "Harry Potter and the Sorcerer's Stone", "J.K. Rowling", "fantasy", "bloombury" };
    book[2] = { "The catcher in the river", "J.D. Salinger", "fiction", "Litle" };
    book[3] = { "The lord of the ring", "J.R.R. Tolkien", "fantasy", "Alien" };
    book[4] = { "The Hobbit", "J.R.R. Tolkien", "fantasy", "alien" };
    book[5] = { "The alchemist", "J.D. Salinger", "fiction", "little" };
    book[6] = { "Brave ne world", "Aldous Huxley", "science fiction", "chatto" };
    book[7] = { "The picture of Dorifn Gray", "Oscar Wilde", "gotgic Fiction", "Lippincott's Monthly Magazine" };
    book[8] = { "One hundred years oh Solitude", "Gabriel Garcia Marquez", "fiction", "Editorial Sudamericana" };
    book[9] = { "The dairy of a young girl", "Anne Frank", "Biografy", "contact Publishing" };

    menu(book);
    
}