/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Board.cpp
 * Author: thomassaldana
 * 
 * Created on March 1, 2021, 6:47 PM
 */
#include <iostream>
#include <string>
#include <iomanip>
#include <map>
#include "Board.h"
#include "Player.h"

using namespace std;

//Players Board 
Board::Board( int boardNum) {
    
    boardNum = 2; //ERASE AFTER TESTING
    board = fillBoard(boardNum);
    shipsDestroyed = 0;

}


Board::Board(const Board& orig) {
}

Board::~Board() {
}

//Access functions
void Board::displayBoards(Player &player, Board &player1){
    
        //Display initial grid
    	cout <<"   \t    " << setw(4) << left    << 'A' << setw(4) << 'B' << setw(4) << 'C' << setw(4) << 'D' << setw(4) << 'E' << setw(4) << 'F' 
             << setw(4)    << 'G'     << setw(4) << 'H' << setw(4) << 'I' << setw(4) << 'J' //End players board
             <<"   \t    " << setw(4) << left    << 'A' << setw(4) << 'B' << setw(4) << 'C' << setw(4) << 'D' << setw(4) << 'E' << setw(4) << 'F' 
             << setw(4)    << 'G'     << setw(4) << 'H' << setw(4) << 'I' << setw(4) << 'J' << endl; //End players board
        
        cout <<"   \t   " << "======================================" <<"   \t   " << "======================================\n" ;
        //Fill 2D Board
	for (int row = 0; row < 10; row++)
	{
                //Players board
		cout << "\t" << setw(1) << left << row + 1 << " | " ;
		for (int col = 0; col < 10; col++)
		{
			cout << setw(4) << left <<  player1.board[row][col];//*(player1.board + row * 10 + col)
                        
		}
                
                //Computers board
                cout << "\t" << setw(1) << left << row + 1 << " | " ;
                for (int col = 0; col < 10; col++)
		{
			cout << setw(4) << left << board[row][col] ;//*(computersBoard + row * 10 + col)
                        
		}
                
                
                
		cout << endl << endl;      
                
	}
        cout << "\n\n\t\t\t   " << "PLAYER: " << player.getName() << "\t\t\t\t\t" << "COMPUTER\n"; 
	cout << endl;
}
void Board::setShips(){ //player will choose coordinates for their ship
    
}
//Mutator Functions 


//Choose a board for the computer and return it
char ** Board::fillBoard(int boardNum){
        //Dimensions of 2D array
    boardNum = boardNum;
    
   //Create a new 2D dynamic array 
    char ** arr = new char*[ 10 ];
    
    
    for( int i = 0; i < 10; i ++){
        arr[i] = new char[10];
    }
    
    //Fill 2D array(Board)
    for( int i = 0; i < 10; i++ ){
        for( int j = 0; j < 10; j++){
            arr[i][j] = '.';
        }
    }
    
    //If board is number 1
    if(boardNum == 1){
        
        //Set boat P, length 2
        arr[1][2] = 'P';
        arr[2][2] = 'P';
        
        
        //Set S boat, length 3
        arr[8][1] = 'S';
        arr[8][2] = 'S';
        arr[8][3] = 'S';
       
        //Set D boat, length 4
        arr[0][6] = 'D';
        arr[1][6] = 'D';
        arr[2][6] = 'D';
        arr[3][6] = 'D';

        
        //Set B boat, length 6   
        arr[6][3] = 'B';
        arr[6][4] = 'B';
        arr[6][5] = 'B';
        arr[6][6] = 'B';
        arr[6][7] = 'B';
        arr[6][8] = 'B';
        
        
    }
    
    if(boardNum == 2)
    {
        //Set P boat, length 2
        arr[9][8] = 'P';
        arr[9][9] = 'P';
        
         //Set S boat, length 3
        arr[1][1] = 'S';
        arr[1][2] = 'S';
        arr[1][3] = 'S';
        
        //Set D boat, length 4
        arr[5][0] = 'D';
        arr[6][0] = 'D';
        arr[7][0] = 'D';
        arr[8][0] = 'D';
        
        
        //Set B boat, length 6        
        arr[0][9] = 'B';
        arr[1][9] = 'B';
        arr[2][9] = 'B';
        arr[3][9] = 'B';
        arr[4][9] = 'B';
        arr[5][9] = 'B';
//                
    }
    /*
    if(boardNum == 3)
    {
        //Set P boat, length 2
        *(arr + 4 * 10 + 5) = 'P';
        *(arr + 5 * 10 + 5) = 'P';
        
         //Set S boat, length 3
        *(arr + 1 * 10 + 7) = 'S';
        *(arr + 1 * 10 + 8) = 'S';
        *(arr + 1 * 10 + 9) = 'S';
        
        //Set D boat, length 4
        *(arr + 5 * 10 + 0) = 'D';
        *(arr + 6 * 10 + 0) = 'D';
        *(arr + 7 * 10 + 0) = 'D';
        *(arr + 8 * 10 + 0) = 'D';
        
        //Set B boat, length 6        
        *(arr + 2 * 10 + 8) = 'B';
        *(arr + 3 * 10 + 8) = 'B';
        *(arr + 4 * 10 + 8) = 'B';
        *(arr + 5 * 10 + 8) = 'B';
        *(arr + 6 * 10 + 8) = 'B';
        *(arr + 7 * 10 + 8) = 'B';
//                
    }
    
    if(boardNum == 4)
    {
        //Set P boat, length 2
        *(arr + 8 * 10 + 7) = 'P';
        *(arr + 8 * 10 + 8) = 'P';
        
         //Set S boat, length 3
        *(arr + 5 * 10 + 2) = 'S';
        *(arr + 6 * 10 + 2) = 'S';
        *(arr + 7 * 10 + 2) = 'S';
        
        //Set D boat, length 4
        *(arr + 2 * 10 + 6) = 'D';
        *(arr + 2 * 10 + 7) = 'D';
        *(arr + 2 * 10 + 8) = 'D';
        *(arr + 2 * 10 + 9) = 'D';
        
        //Set B boat, length 6        
        *(arr + 0 * 10 + 3) = 'B';
        *(arr + 1 * 10 + 3) = 'B';
        *(arr + 2 * 10 + 3) = 'B';
        *(arr + 3 * 10 + 3) = 'B';
        *(arr + 4 * 10 + 3) = 'B';
        *(arr + 5 * 10 + 3) = 'B';
//                
    }
     */
  
    //REMEMBER TO DELETE DYNAMIC Memory!!
    return arr;
}


void Board::attack(Player &player, Board &player1){
        
        string st;
        
        setAttackCoordinate();
        
        if( isHit() ) { //if coordinate is hit, return true 
            
            displayBoards(player, player1);
            cout << "THATS A DIRECT HIT!\n\n";
            increaseShipsDestroyedCount();
        
        } else { 
            displayBoards(player, player1);
            cout << "MISS!!\n\n";
        }

    
}//END attack()

void Board::setAttackCoordinate(){

    cout << "Enter Attack Coordinate (e.g 1A or 1a): ";
    cin >> attackCoordinate; //e.g 1c
    cout << endl; 
    
}

string Board::getAttackCoordinate(){
    
    return attackCoordinate;
    
}

bool Board::isHit() {
    
    //Get the users attack  coordinate and convert it into int
    int col = 0;
    int row = attackCoordinate[0] - '0'; //convert the numerical string to int
    
    if( attackCoordinate[1] == 'a' ) col  = 0;
    if( attackCoordinate[1] == 'b' ) col  = 1;
    if( attackCoordinate[1] == 'c' ) col  = 2;
    if( attackCoordinate[1] == 'd' ) col  = 3;
    if( attackCoordinate[1] == 'e' ) col  = 4;
    if( attackCoordinate[1] == 'f' ) col  = 5;
    if( attackCoordinate[1] == 'g' ) col  = 6;
    if( attackCoordinate[1] == 'h' ) col  = 7;
    if( attackCoordinate[1] == 'i' ) col  = 8;
    if( attackCoordinate[1] == 'j' ) col  = 9;
    
    
   
    //If player misses, mark coordinate with  ~, for miss
    if( board[row - 1][col] == '.'){

        board[row - 1][col] = '~';
        
        return false;
        
    //If player hits, mark coordinate with X, for hit
    }else {
        
        //Change 'Letter' to 'X', to let user know he hit the boat
        board[row - 1][col] = 'X';
        
        return true;
    }
  
}

void Board::increaseShipsDestroyedCount(){
    ++shipsDestroyed;
}

 int Board::getShipsDestroyedCount(){
     return shipsDestroyed; 
 }