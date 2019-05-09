#include <string>
#include <iostream>

#ifndef EMAIL_H
#define EMAIL_H

class Email {
public:
    Email(std::string who = "Noname Johnsson", std::string date = "01/01/1970", std::string subject = "Empty mail");
    virtual ~Email();
    
    friend std::ostream& operator<<(std::ostream& os, Email& obj);
    friend struct CompWhoDateSubject;
    friend struct CompDateWhoSubject;
    friend struct CompSubjectDateWho;
private:
    std::string who;
    std::string date;
    std::string subject;
};

struct CompWhoDateSubject {
    bool operator()(const Email& lhs, const Email& rhs);
};
struct CompDateWhoSubject {
    bool operator()(const Email& lhs, const Email& rhs);
};
struct CompSubjectDateWho {
    bool operator()(const Email& lhs, const Email& rhs);
};
#endif /* EMAIL_H */

