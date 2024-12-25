#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
#include <map>
#include "RoomManagement.h"
#include "hotel.h"
using namespace std;

RoomManagement::RoomManagement() {

}

void RoomManagement::setRoomNumber(int roomNumber) {
    this -> roomNumber = roomNumber;
}

void RoomManagement::setTime(int time) {
    this -> time = time;
}

void RoomManagement::setAvailability(bool available) {
    this -> available = available;
}

int RoomManagement::getRoomNumber() {
    return roomNumber;
}

int RoomManagement::getTime() {
    return time;
}

bool RoomManagement::getAvailabilty() {
    return available;
}


string RoomManagement::roomAvailable() {
    if (available == true) {

    }
    else if (available == false) {
        
    }
}


void RoomManagement::setRoomType(string roomType) {
    this -> roomType = roomType;
}

string RoomManagement::getRoomType() {
    return roomType;
}

string RoomManagement::roomRequest(int roomNumber, string roomType) {
    return roomNumber, roomType;
}

string RoomManagement::deleteRoom(string theName) {
    roomName.erase(theName);
}