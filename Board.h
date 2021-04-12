/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Board.h
 * Author: Alexis N, Thomas S
 *
 * Created on March 1, 2021, 6:47 PM
 */

#ifndef GRID_H
#define GRID_H
#include "Player.h"
#include <iostream>
using namespace std; 

class Board {
public:
    //Constructors/Destructors
    Board(int); //This constructor will initialize the computers board randomly
    Board(const Board& orig);
    virtual ~Board();
    
    //Access functions
    void displayBoards(Player &, Board &);
    void setShips(); 
    void attack(Player &, Board &); //Use to attack opponents board
    void computerAttack(Player &player, Board &player1); //use to attack player's board
    void setAttackCoordinate(); //will store users attack coordinate
    bool isHit(); //determines if a coordinate is a hit or miss 
    string getAttackCoordinate(); // will return attack coordinate
    int getShipsDestroyedCount();
    int getComputerShipsDestroyedCount();
    int getPlayerShipsDestroyedCount();
    bool didComputerHit(); //returns true if coordinate was a hit
    void displayBanner( );
            
    //Mutator Functions 
    char ** fillBoard(int); //Creates the computers board, chooses from pre-defined boards 1 -4
    void increaseShipsDestroyedCount(); 
    void increasePlayerShipsDestroyedCount();
    
    
    
private:
    
    //Board board,10x10
    char ** board;
    int boardNum; //holds the random board configuration number
    
    int row; 
    int col; 
    char direction;
    char alphaCol;
    
    //Variables used to attack ship
    string attackCoordinate; 
    int shipsDestroyed;
    int shipsDestroyedComp;
    bool  firstDisplay;
};

#endif /* GRID_H */
