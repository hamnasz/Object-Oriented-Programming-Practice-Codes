#include <iostream>
#include <string>

using namespace std;

class Publication {
protected:
  string title;
  float price;

public:
  void getdata() {
    cout << "Enter title: ";
    getline(cin, title);
    cout << "Enter price: ";
    cin >> price;
    cin.ignore(); // Clear input buffer
  }

  void putdata() {
    cout << "\nTitle: " << title << endl;
    cout << "Price: $" << price << endl;
  }
};

class Book : public Publication {
private:
  int pageCount;

public:
  void getdata() {
    Publication::getdata(); // Call base class getdata
    cout << "Enter page count: ";
    cin >> pageCount;
    cin.ignore();
  }

  void putdata() {
    Publication::putdata(); // Call base class putdata
    cout << "Page Count: " << pageCount << endl;
  }
};

class Tape : public Publication {
private:
  float playingTime;

public:
  void getdata() {
    Publication::getdata(); // Call base class getdata
    cout << "Enter playing time (minutes): ";
    cin >> playingTime;
    cin.ignore();
  }

  void putdata() {
    Publication::putdata(); // Call base class putdata
    cout << "Playing Time: " << playingTime << " minutes" << endl;
  }
};

int main() {
  Book book;
  Tape tape;

  cout << "\nEnter Book Details:\n";
  book.getdata();

  cout << "\nEnter Tape Details:\n";
  tape.getdata();

  cout << "\nBook Details:\n";
  book.putdata();

  cout << "\nTape Details:\n";
  tape.putdata();

  return 0;
}
