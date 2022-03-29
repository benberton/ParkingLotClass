//
// Created by BBert on 3/27/2022.
//

#include "Lot.h"

 Lot::Lot(int size)
{
    parkingLot = new Spot[size];
    parkingLotSize = size;
}

 Lot::~Lot()
{
    delete []parkingLot;
}

void Lot::printEmptySpots(void)
{
    for (int i = 0; i < parkingLotSize; ++i)
    {
        if(!parkingLot[i].inUse)
        {
            cout << "Parking spot " << i << " is empty" << endl;
        }
    }
}

void Lot::fillSpot(int spotNum)
{
    if (parkingLot[spotNum].inUse)
    {
        cout << "Error: spot is already in use" << endl;
    }else
    {
        cout << "For Spot Number " << spotNum << ":" << endl;
        cout << "Enter Name:" << endl;
        getline(cin, parkingLot[spotNum].name);
        cout << "Enter Color:" << endl;
        getline(cin,parkingLot[spotNum].color);
        cout << "Enter Manufacturer:" << endl;
        getline(cin,parkingLot[spotNum].manufacturer);
        cout << "Enter Car Type:" << endl;
        getline(cin,parkingLot[spotNum].type);
        parkingLot[spotNum].inUse = true;
    }
}

void Lot::printAllSpots()
{
    for (int i = 0; i < parkingLotSize; i++)
    {
        if (parkingLot[i].inUse)
        {
            printSpot(i);
        }else
        {
            cout << "Spot Number " << i << ":" << endl;
            cout << "   " << "EMPTY" << endl;
        }
    }
}


void Lot::printSpot(int spotNum)
{
    cout << "Spot Number " << spotNum << ":" << endl;
    cout << "   " << "Name: " << parkingLot[spotNum].name << endl;
    cout << "   " << "Color: " << parkingLot[spotNum].color << endl;
    cout << "   " << "Manufacturer: " << parkingLot[spotNum].manufacturer << endl;
    cout << "   " << "Type: " << parkingLot[spotNum].type << endl;
}

void Lot::printSpotsInUse()
{
    for (int i = 0; i < parkingLotSize; i++)
    {
        if (parkingLot[i].inUse)
            printSpot(i);
    }
}

void Lot::deleteSpot(int spotNum)
{
    parkingLot[spotNum].name = "";
    parkingLot[spotNum].color = "";
    parkingLot[spotNum].manufacturer = "";
    parkingLot[spotNum].type = "";
    parkingLot[spotNum].inUse = false;
}

void Lot::deleteLot()
{
    for (int i = 0; i < parkingLotSize; i++)
        deleteSpot(i);
}
