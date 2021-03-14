/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Grid.cpp
 * Author: thomassaldana
 * test
 * Created on March 1, 2021, 6:47 PM
 */
#include <iostream>
#include <string>
#include <iomanip>
#include "Grid.h"

using namespace std;

//Players Grid 
Grid::Grid(int boardNum ) {
  
    //Inialize player board 
    board = fillPlayersBoard();

    //Initialize computers board 
    if( boardNum == 1 ){
        
        cout << "Board 1!\n";
        computersBoard = fillComputersBoard(boardNum);
        
    } else if( boardNum == 2){
        cout << "Board 2!\n";
        
    } else if( boardNum == 3){
        cout << "Board 3!\n";
        
    } else if ( boardNum == 4 ){
        
        cout << "Board 4!\n";
        
    }
}

Grid::Grid(const Grid& orig) {
}

Grid::~Grid() {
}

//Access functions
void Grid::displayBoards(){
    
        //Display initial grid
    	cout <<"   \t    " << setw(4) << left    << 'A' << setw(4) << 'B' << setw(4) << 'C' << setw(4) << 'D' << setw(4) << 'E' << setw(4) << 'F' 
             << setw(4)   << 'G'     << setw(4) << 'H' << setw(4) << 'I' << setw(4) << 'J' //End players board
             <<"   \t    " << setw(4) << left    << 'A' << setw(4) << 'B' << setw(4) << 'C' << setw(4) << 'D' << setw(4) << 'E' << setw(4) << 'F' 
             << setw(4)   << 'G'     << setw(4) << 'H' << setw(4) << 'I' << setw(4) << 'J' << endl; //End players board
        
        cout <<"   \t   " << "======================================" <<"   \t   " << "======================================\n" ;
        //Fill 2D Grid
	for (int row = 0; row < 10; row++)
	{
                //Players board
		cout << "\t" << setw(1) << left << row + 1 << " | " ;
		for (int col = 0; col < 10; col++)
		{
			cout << setw(4) << left <<  *(board + row * 10 + col);
                        
		}
                
                //Computers board
                cout << "\t" << setw(1) << left << row + 1 << " | " ;
                for (int col = 0; col < 10; col++)
		{
			cout << setw(4) << left <<  *(computersBoard + row * 10 + col);
                        
		}
                
                
                
		cout << endl << endl;
                
                
                
                
	}
        cout << "\n\n\t\t\t   " << "PLAYER:    " << "\t\t\t\t\t" << "COMPUTER\n"; 
	cout << endl;
}
void Grid::setShips(){
    
}
//Mutator Functions 
char * Grid::fillPlayersBoard(){ //Fills the 2D initial grid  
    
    //Dimensions of 2D array
    int  m = 10, n = 10, c = 0; 
    
    //Create a new 2D dynamic array 
    char * arr = new char[ m * n ];
    
    //Fill 2D array(Grid)
    for( int i = 0; i < m ; i++ ){
        
        for( int j = 0; j < n; j++ ){
            
            //Assign values to the array with * 
            *(arr + i * n + j) = '.';
        }
    }
  
    //REMEMBER TO DELETE DYNAMIC Memory!!
    return arr;
    
}

//Choose a board for the computer and return it
char * Grid::fillComputersBoard(int boardNum){
        //Dimensions of 2D array
    int  m = 10, n = 10, c = 0; 
    
    //Create a new 2D dynamic array 
    char * arr = new char[ m * n ];
    
    //Fill 2D array(Grid)
    for( int i = 0; i < m ; i++ ){
        
        for( int j = 0; j < n; j++ ){
            
            //Assign values to the array with * 
            *(arr + i * 10 + j) = '.';
        }
    }
    
    //If board is number 1
    if(boardNum == 1){
        //Set P boat, lenght 2
        //*(arr + 0 * 10 + 2) = ' ';
        //*(arr + 0 * 10 + 1) = ' ';
       // *(arr + 0 * 10 + 3) = ' ';
        //*(arr + 1 * 10 + 1) = ' ';
        *(arr + 1 * 10 + 2) = 'P';
        *(arr + 2 * 10 + 2) = 'P';
        
        //Set S boat, lenght 3
        *(arr + 8 * 10 + 1) = 'S';
        *(arr + 8 * 10 + 2) = 'S';
        *(arr + 8 * 10 + 3) = 'S';
        
        //Set D boat, lenght 3
        *(arr + 0 * 10 + 6) = 'D';
        *(arr + 1 * 10 + 6) = 'D';
        *(arr + 2 * 10 + 6) = 'D';
        *(arr + 3 * 10 + 6) = 'D';
        
        //Set S boat, lenght 3
        
        *(arr + 6 * 10 + 3) = 'H';
        *(arr + 6 * 10 + 4) = 'H';
        *(arr + 6 * 10 + 5) = 'H';
        *(arr + 6 * 10 + 6) = 'H';
        *(arr + 6 * 10 + 7) = 'H';
        *(arr + 6 * 10 + 8) = 'H';
        
        
    }
  
    //REMEMBER TO DELETE DYNAMIC Memory!!
    return arr;
}