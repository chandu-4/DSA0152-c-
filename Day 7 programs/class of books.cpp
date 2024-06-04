#include <iostream>
using namespace std;

class Book {
  private:
    string title;
    string author;
    int pages;

  public:
    Book(string t, string a, int p) {
      title = t;
      author = a;
      pages = p;
      cout << "Book object created" << endl;
    }
    ~Book() {
      cout << "Book object destroyed" << endl;
    }
    void display() {
      cout << "Title: " << title << endl;
      cout << "Author: " << author << endl;
      cout << "Pages: " << pages << endl;
    }
};

int main() {
  Book book1("C++ Programming", "John Doe", 500);
  book1.display();

  return 0;
}
