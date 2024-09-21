#include <iostream>
using namespace std;

union Book
{
  int id;
  float price;
  int pages;
};

int main()
{
  Book book1;

  cout << "Enter detail of Book: " << endl;
  cout << "Book ID: ";
  cin >> book1.id;
  cout << "Price: ";
  cin >> book1.price;
  cout << "Pages: ";
  cin >> book1.pages;

  cout << "\nRecord of the book:" << endl;
  cout << "Book ID: " << book1.id << endl;
  cout << "Price: " << book1.price << endl;
  cout << "Pages: " << book1.pages << endl;

  return 0;
}