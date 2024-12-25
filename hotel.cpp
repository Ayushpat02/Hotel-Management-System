#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include "hotel.h"
using namespace std;

Hotel::Hotel() {

}

void Hotel::setEmail(string email) {
    this -> email = email;
}

string Hotel::getEmail() {
    return email;
}

void Hotel::setLastName(string lastName) {
    this -> lastName = lastName;
}

void Hotel::setFirstName(string firstName) {
    this -> firstName = firstName;
}

void Hotel::setMiddleName(string middleName) {
    this -> middleName = middleName;
}

void Hotel::setOtherName(string otherName) {
    this -> otherName = otherName;
}

string Hotel::getFullName() {
    if (middleName == "" && otherName == "") {
        fullName = firstName + " " + lastName;
    }
    else if (middleName != "" && otherName == "") {
        fullName = firstName + " " + middleName + " " + lastName;
    }
    else if (middleName == "" && otherName != "") {
        fullName = firstName + " " + lastName + " " + otherName;
    }
    else {
        fullName = firstName + " " + middleName + " " + lastName + " " + otherName;
    }
    return fullName;
}

void Hotel::setAddress(string Address) {
    this -> Address = Address;
}

string Hotel::theAddress() {
    return Address;
}

string Hotel::getFirstName() {
    return firstName;
}


//The hotel booking system is an easy-to-use system with a centralized database programming procedure. This C hotel management project performs various operations such as verifying client information, reserving a room, changing customer information, and checking allocated rooms. The project will assist you in mastering two important C concepts: file management and classes.
//Hotel Booking System