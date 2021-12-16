#include <iostream>
#include "Account.h"
int main() {
    string n; string e[100]; string p[15];
    Strings s;
    auto *a1 = new Account(e,p);
    char option;
    std::cout<<s.loginMessage;
    std::cin>>option;
    switch (option) {
        case '1':
            a1->loginProcess();
            break;
        case '2':
            a1->scanAddress(a1);
            break;

    };
    return 0;
}
