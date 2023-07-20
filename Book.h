#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;

class Book {
private:
    string type;
    string name;
    string author;

public:
    Book(const string& type, const string& name, const string& author);
	Book();
    string getType() const;
    string getName() const;
    string getAuthor() const;
};

#endif 
