/* 
 * File:   main.cpp
 * Author(s):Alexis N, Thomas S
 *
 * Date: February 24, 2021, 5:32 PM
 * Desc: BattleShip
 * test
 */


#ifndef PLAYER_H
#define PLAYER_H

#include <cstdlib>
#include <iostream>

using namespace std;

class Player 
{
public:
    Player();
    Player(const Player& orig);
    virtual ~Player();
    void Player setName();
private:
    string name;

};

#endif /* PLAYER_H */

