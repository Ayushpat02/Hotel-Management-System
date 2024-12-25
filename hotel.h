#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#ifndef HOTEL_H
#define HOTEL_H

class Hotel {
    public: 
        //constructor functions
        Hotel();
        //setter functions
        void setEmail(string email);
        void setFirstName(string firstName);
        void setLastName(string lastName);
        void setMiddleName(string middleName);
        void setOtherName(string otherName);
        void setAddress(string Address);
        //getter functions
        string getEmail();
        string getFullName();
        //helper functions
        string theAddress();
        string getFirstName();
    private:
        string email;
        string firstName;
        string lastName;
        string middleName;
        string otherName;
        string Address;
        string fullName;

    // theReservsations
};

#endif