//
// Created by ellio on 15/12/2021.
//
#ifndef EXAM_ACCOUNT_H
#define EXAM_ACCOUNT_H
#include <iostream>
#include <cstdio>
#include <cstdint>
#include <random>
#include "Strings.h"
#include <algorithm>
#include <regex>
using std::string;
class Account {
private:
    string email[100];
    string password[15];
    Strings s;
    string addressln1[20];
    string addressln2[20];
    string city[20];
    string county[20];
    string postcode[7];
    int pin[4];


public:
    Account(string e[100], string p[15]);
    void setLogin(string * em[100], string * pa[15]);
    string scanEmail();
    string scanPassword();
    void loginProcess();
    Account scanAddress(Account *address);
    bool stringChecker(string *checkValue);
};


#endif //EXAM_ACCOUNT_H
