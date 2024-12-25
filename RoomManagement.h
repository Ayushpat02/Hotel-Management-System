#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
#include <map>
using namespace std;

#ifndef ROOMMANAGEMENT_H
#define ROOMMANAGEMENT_H


class RoomManagement {
    public: 
        RoomManagement();

        void setRoomNumber(int roomNumber);
        void setTime(int time);
        void setAvailability(bool available);
        void setRoomType(string roomType);

        int getRoomNumber();
        int getTime();
        bool getAvailabilty();
        string getRoomType();
        string roomRequest(int roomNumber, string roomType);
        string roomAvailable();
        string deleteRoom(string theName);


    private:
        int roomNumber;
        int time;
        bool available;
        string roomType;
        map<string, int> roomName;
};



#endif