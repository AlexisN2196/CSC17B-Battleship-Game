/* 
 * File:   main.cpp
 * Author(s):Alexis N, Thomas S
 *
 * Date: February 24, 2021, 5:32 PM
 * Desc: BattleShip
 * test
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

