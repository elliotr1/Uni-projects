//
// Created by ellio on 15/12/2021.
//

#ifndef EXAM_STRINGS_H
#define EXAM_STRINGS_H
using std::string;

class Strings {
public:
    string loginMessage = "Welcome to the login form please select from one of the following options:\n"
                          "1. Login.\n"
                          "2. Register a new account.\n"
                          "3. Delete account.\n"
                          "4. Get contact information.\n"
                          "0. Exit programme.\n";

    string email = "Please enter your email: \n";

    string password = "Please enter your password: \n";

    string addressLine1 = "Please enter your first line of your address: \n";

    string addressLine2 = "Please enter your second line of address (if you don't have one just type 'n/a'): \n";

    string city = "Please enter the name of your town or local city: \n";

    string postcode = "Please enter your postcode: \n";

    string county = "Please enter your county: \n";

    string fname = "Please enter your first name: \n";

    string sname = "Please enter your surname: \n";

};


#endif //EXAM_STRINGS_H
