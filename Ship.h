/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ship.h
 * Author: Family
 *
 * Created on March 2, 2021, 9:29 PM
 */

#ifndef SHIP_H
#define SHIP_H

#include <iostream>

using namespace std; 

class Ship {
public:
    Ship();
    Ship(const Ship& orig);
    virtual ~Ship();
private:
    string type; //Ship Type
    int length; //Ship Length

};



#endif /* SHIP_H */

