/* 
 * File:   main.cpp
 * Author(s):Alexis N, Thomas S
 *
 * Date: February 24, 2021, 5:32 PM
 * Desc: BattleShip
 * 
 */


#include "Player.h"

//Constructur
Player::Player() 
{
  name = "";
}

Player::Player(const Player& orig) {
}
//Destructur
Player::~Player() {
}

void Player:: setName(string name)
{
  this ->name = name;
}
