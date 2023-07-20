#include "Students.h"
using namespace std;

Students::Students() {
   
}

Students::Students(const string& name, const string& surname, const string& password,
                 const int& idCode, const string& cardNo, string id)
    : name(name), surname(surname), password(password), idCode(idCode), cardNo(cardNo), id(id) {
}

string Students::getName() const {
    return name;
}

void Students::setName(const string& name) {
    this->name = name;
}

string Students::getSurname() const {
    return surname;
}

void Students::setSurname(const string& surname) {
    this->surname = surname;
}

string Students::getPassword() const {
    return password;
}

void Students::setPassword(const string& password) {
    this->password = password;
}

int Students::getIdCode() const {
    return idCode;
}

void Students::setIdCode(const int& idCode) {
    this->idCode = idCode;
}

string Students::getCardNo() const {
    return cardNo;
}

void Students::setCardNo(const string& cardNo) {
    this->cardNo = cardNo;
}

string Students::getId() const {
    return id;
}

void Students::setId(string id) {
    this->id = id;
}

