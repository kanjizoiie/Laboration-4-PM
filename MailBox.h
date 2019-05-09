#ifndef MAILBOX_H
#define MAILBOX_H

#include "Email.h"
#include <vector>

class MailBox {
public:
    MailBox(size_t size);
    virtual ~MailBox();
    
    Email at(size_t index);
    void push_back(Email email);
    void push_back(std::string who, std::string date, std::string subject);
    void sortWho();
    void sortSubject();
    void sortDate();
    std::vector<Email> getVector();
    void setVector(std::vector<Email> in);
private:
    std::vector<Email> mailBox;
};

#endif /* MAILBOX_H */

