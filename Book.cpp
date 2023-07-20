#include "Book.h"
using namespace std;

Book::Book(const string& type, const string& name, const string& author)
    : type(type), name(name), author(author) {
}
Book::Book(){
}
string Book::getType() const {
    return type;
}

string Book::getName() const {
    return name;
}

string Book::getAuthor() const {
    return author;
}

