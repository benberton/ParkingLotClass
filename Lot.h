//
// Created by BBert on 3/27/2022.
//

#ifndef UNTITLED_LOT_H
#define UNTITLED_LOT_H
#include <iostream>
#include <string>
using namespace std;
struct Spot
{
    string name;
    string color;
    string type;
    string manufacturer;
    bool inUse = false;
};

class Lot {

public:
    Lot(int size);
    ~Lot();
    void printEmptySpots(void);
    void fillSpot(int spotNum);
    void printAllSpots(void);
    void printSpotsInUse(void);
    void deleteSpot(int spotNum);
    void deleteLot(void);
private:
    void printSpot(int spotNum);
    Spot* parkingLot;
    int parkingLotSize;

};


#endif //UNTITLED_LOT_H
