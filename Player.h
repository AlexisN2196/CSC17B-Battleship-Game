/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.h
 * Author: Family
 *
 * Created on March 2, 2021, 9:29 PM
 */

#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
using namespace std;

class Player {
public:
    Player();
    Player(const Player& orig);
    virtual ~Player();
    
  
private:
    string name;
    string score; 

};

#endif /* PLAYER_H */

