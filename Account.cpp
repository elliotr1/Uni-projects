//
// Created by ellio on 15/12/2021.
//

#include "Account.h"
Account::Account(string *e, string *p) {
    setLogin(&e,&p);
}

void Account::setLogin(string **em, string **pa) {
    *em = email;
    *pa = password;
}

string Account::scanEmail() {
    std::cout << s.email;
    std::cin >> *email;
    bool valid = false;
    while(!valid) {
        auto b = email->begin(), e = email->end();
        if ((b = std::find(b, e, '@')) != e &&
            std::find(b, e, '.') != e) {
            valid = true;
        }
        else{
            std::cout << "\nemail is invalid, please try again: " << std::endl;
            std::cin >> *email;
        }
    }
    return *email;
}

string Account::scanPassword() {
    std::cout << s.password;
    std::cin >> *password;
    bool valid = false;
    while(!valid){
        if(regex_match(*password,std::regex("^(?=.*?[A-Z])(?=.*?[a-z])(?=.*?[0-9])(?=.*?[#?!@$%^&*-.]).{8,}$"))){
            valid = true;
        }
        else{
            std::cout<< "\nPassword is invalid, please try again: " <<std::endl;
            getline(std::cin, *password);
        }
    }
    return *password;
}

void Account::loginProcess() {
    Account::scanEmail();
    Account::scanPassword();
}

bool Account::stringChecker(string *value) {
    char junk;
    uint8_t len = value->length() + len++;
    char arr [len];
    strcpy(arr, value->c_str());

    if (sscanf(arr, "%*[A-Za-z0-9_]%c", &junk) && strlen(arr)<2){
        return false;
    }
    else{
        return true;
    }
}

Account Account::scanAddress(Account *address){
    std::cout<< s.addressLine1 << std::endl;
    getline(std::cin,*address->addressln1);
    Account::stringChecker(addressln1);

    std::cout<< s.addressLine2 << std::endl;
    getline(std::cin,*address->addressln2);
    Account::stringChecker(addressln2);

    std::cout<< s.city << std::endl;
    getline(std::cin,*address->city);

    std::cout<< s.county << std::endl;
    getline(std::cin,*address->county);

    std::cout<< s.postcode << std::endl;
    getline(std::cin,*address->postcode);

    return *address;
}