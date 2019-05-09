#include <cstdlib>
#include <vector>
#include <iostream>
#include "MailBox.h"

template<typename T>
void Show(const std::vector<T> vector) {
    for (auto elem : vector) {
        std::cout << elem;
    }
}

int main(int argc, char** argv) {
    MailBox mb(3);
    mb.push_back(Email("Hans", "01/12/1981", "Angående bertil"));
    mb.push_back(Email("Foo", "02/01/2001", "L33T"));
    mb.push_back(Email("Foo", "01/01/3045", "L33T"));
    mb.sortDate();
    Show(mb.getVector());
    return 0;
}