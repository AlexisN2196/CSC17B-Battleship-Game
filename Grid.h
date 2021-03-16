/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Grid.h
 * Author: thomassaldana
 *
 * Created on March 1, 2021, 6:47 PM
 */

#ifndef GRID_H
#define GRID_H

class Grid {
public:
    //Constructors/Destructors
    Grid();
    Grid(const Grid& orig);
    virtual ~Grid();
    
    //Access functions
    void displayBoards();
    void setShips(); 
    void displayPlayerBoard();
    
    //Mutator Functions 
    char * fillComputersBoard(int); //Creates the computers board, chooses from pre-defined boards 1 -4
    void fillUserBoard();//allows user to set ships on their board
    
private:
    
    //Grid board,10x10
    char * board;
    char * computersBoard;
    char * userBoard;
    
    int row; 
    int col; 
    char direction;
    char alphaCol;
};

#endif /* GRID_H */

