#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

#include "hotel.cpp"
#include "RoomManagement.cpp"

int main() {
    Hotel user;
    RoomManagement room;
    string firstName, lastName, middleName;
    int hasMiddleName;
    cout << "Welcome to the AP Hotel App!" << endl;
    cout << "In the app, you will have access to all of AP Hotel's features." << endl;
    cout << "Before you start to reserve your lovely room, you will need to enter your contact info." << endl;
    cout << "Enter your first name: " << endl;
    cin >> firstName;
    cout << "Enter your last name: " << endl;
    cin >> lastName;
    cout << "If you have a middle name, type 1 and enter it." << endl;
    cin >> hasMiddleName;
    if (hasMiddleName == 1) {
        cin >> middleName;
    }
    user.setFirstName(firstName);
    user.setLastName(lastName);
    user.setMiddleName(middleName);
    cout << "Your full name is: " << user.getFullName() << endl;
    cout << "Your next step is to decide what room you want to stay in." << endl;
    cout << "There are different options in AP Hotel depending on your preference." << endl;
    cout << "What room preference do you have for your stay " << user.getFirstName() << "?" << endl;
    string roomType;
    cin >> roomType;
    room.setRoomType(roomType);
    return 0;
}