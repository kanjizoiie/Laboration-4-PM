#include "Email.h" 

Email::Email(std::string who, std::string date, std::string subject): who(who), date(date), subject(subject) {
}

bool CompSubjectDateWho::operator()(const Email& lhs, const Email& rhs) {
    if (lhs.subject == rhs.subject) {
        if (lhs.date == rhs.date) {
            if (lhs.who < rhs.who)
                return true;
            else
                return false;
        }
        else if (lhs.date < rhs.date)
            return true;
        else 
            return false;
    }
    else if(lhs.subject < rhs.subject)
        return true;
    else
        return false;
}

bool CompDateWhoSubject::operator()(const Email& lhs, const Email& rhs) {
    if (lhs.date == rhs.date) {
        if (lhs.who == rhs.who) {
            if (lhs.subject < rhs.subject)
                return true;
            else
                return false;
        }
        else if (lhs.who < rhs.who)
            return true;
        else 
            return false;
    }
    else if(lhs.date < rhs.date)
        return true;
    else
        return false;
}

bool CompWhoDateSubject::operator()(const Email& lhs, const Email& rhs) {
    if (lhs.who == rhs.who) {
        if (lhs.date == rhs.date) {
            if (lhs.subject < rhs.subject)
                return true;
            else
                return false;
        }
        else if (lhs.date < rhs.date)
            return true;
        else 
            return false;
    }
    else if(lhs.who < rhs.who)
        return true;
    else
        return false;
}

Email::~Email() {
}

std::ostream& operator<<(std::ostream& os, Email& obj) {
    os << obj.who << ", " << obj.date << ", " << obj.subject << std::endl;
    return os;
}
