#ifndef STUDENTS_H
#define STUDENTS_H
#include <string>
using namespace std;

class Students {
public:
    Students();  
    Students(const string& name, const string& surname, const string& password,
            const int& idCode, const string& cardNo, string id);

    
    string getName() const;
    void setName(const string& name);
    
    string getSurname() const;
    void setSurname(const string& surname);
    
    string getPassword() const;
    void setPassword(const string& password);
    
    int getIdCode() const;
    void setIdCode(const int& idCode);
    
    string getCardNo() const;
    void setCardNo(const string& cardNo);
    
    string getId() const;
    void setId(string id);

private:
    string name;
    string surname;
    string password;
    int idCode;
    string cardNo;
    string id;
};

#endif  

