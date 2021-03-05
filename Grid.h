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
    void displayGrid();
    void setShips(); 
    
    //Mutator Functions 
    char * fillGrid(); //Fills the initial 2D array 
    
private:
    
    //Grid board,10x10
    char * board;
    
    
};

#endif /* GRID_H */

