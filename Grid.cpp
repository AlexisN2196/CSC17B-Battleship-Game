/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Grid.cpp
 * Author: thomassaldana
 * 
 * Created on March 1, 2021, 6:47 PM
 */
#include <iostream>
#include <string>
#include <iomanip>
#include "Grid.h"

using namespace std;

Grid::Grid() {
    board [10][10] = NULL; 
    
}

Grid::Grid(const Grid& orig) {
}

Grid::~Grid() {
}

//Access functions
void Grid::displayGrid(){
    
        //Display initial grid
    	cout <<"   \t   " << setw(2) << left    << 'A' << setw(2) << 'B' << setw(2) << 'C' << setw(2) << 'D' << setw(2) << 'E' << setw(2) << 'F' 
             << setw(2)   << 'G'     << setw(2) << 'H' << setw(2) << 'I' << setw(2) << 'J' << endl;

        //Fill 2D Grid
	for (int row = 0; row < 10; row++)
	{
		cout << "\t";
		cout << setw(3) << left << row + 1;
		for (int col = 0; col < 10; col++)
		{
			cout << setw(2) << left << board[row][col];
		}
		cout << endl;
	}
	cout << endl;
}
void Grid::setShips(){
    
}