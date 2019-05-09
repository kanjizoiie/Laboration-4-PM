#include <algorithm>
#include "MailBox.h"

MailBox::MailBox(size_t size): mailBox(size) {
}

MailBox::~MailBox() {
}

Email MailBox::at(size_t index) {
    return *(mailBox.begin() + index);
}

void MailBox::push_back(Email email) {
    mailBox.push_back(email);
}

void MailBox::push_back(std::string who, std::string date, std::string subject) {
    mailBox.push_back(Email(who, date, subject));
}


void MailBox::sortDate() {
    std::sort(mailBox.begin(), mailBox.end(), CompDateWhoSubject());
}

void MailBox::sortSubject() {
    std::sort(mailBox.begin(), mailBox.end(), CompSubjectDateWho());
}

void MailBox::sortWho() {
    std::sort(mailBox.begin(), mailBox.end(), CompWhoDateSubject());
}

std::vector<Email> MailBox::getVector() {
    return mailBox;
}

void MailBox::setVector(std::vector<Email> in) {
    this->mailBox = in;
}
