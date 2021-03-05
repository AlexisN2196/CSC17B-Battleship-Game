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
  
    //inialize board with 
    board = fillGrid();

}

Grid::Grid(const Grid& orig) {
}

Grid::~Grid() {
}

//Access functions
void Grid::displayGrid(){
    
        //Display initial grid
    	cout <<"   \t    " << setw(4) << left    << 'A' << setw(4) << 'B' << setw(4) << 'C' << setw(4) << 'D' << setw(4) << 'E' << setw(4) << 'F' 
             << setw(4)   << 'G'     << setw(4) << 'H' << setw(4) << 'I' << setw(4) << 'J' << endl;
        cout <<"   \t   " << "======================================\n";
        //Fill 2D Grid
	for (int row = 0; row < 10; row++)
	{
		cout << "\t";
		cout << setw(1) << left << row + 1 << " | ";
		for (int col = 0; col < 10; col++)
		{
			cout << setw(4) << left <<  *(board + row * 10 + col);
		}
		cout << endl << endl;
	}
	cout << endl;
}
void Grid::setShips(){
    
}
//Mutator Functions 
char * Grid::fillGrid(){ //Fills the 2D initial grid  
    
    //Dimensions of 2D array
    int  m = 10, n = 10, c = 0; 
    
    //Create a new 2D dynamic array 
    char * arr = new char[ m * n ];
    
    //Fill 2D array(Grid)
    for( int i = 0; i < m ; i++ ){
        
        for( int j = 0; j < n; j++ ){
            
            //Assign values to the array with * 
            *(arr + i * n + j) = '*';
        }
    }
  
    //REMEMBER TO DELETE DYNAMIC Memory!!
    return arr;
    
}