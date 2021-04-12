/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Board.cpp
 * Author: Alexi N, Thomas S
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
                  //If coordinate is a hit, display it,  else  keep battleship loc hidden
                  if (!(board[row][col] == '~' || board[row][col] == 'X')){
                      cout << setw(4) << left << '.';
                  } else {
                      cout << setw(4) << left << board[row][col];
                  }
                                            
                        
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
        arr[8][7] = 'P';
        arr[8][8] = 'P';
        
         //Set S boat, length 3
        arr[1][1] = 'S';
        arr[1][2] = 'S';
        arr[1][3] = 'S';
        
        //Set D boat, length 4
        arr[5][1] = 'D';
        arr[6][1] = 'D';
        arr[7][1] = 'D';
        arr[8][1] = 'D';
        
        
        //Set B boat, length 6        
        arr[1][8] = 'B';
        arr[2][8] = 'B';
        arr[3][8] = 'B';
        arr[4][8] = 'B';
        arr[5][8] = 'B';
        arr[6][8] = 'B';
//                
    }
    
    if(boardNum == 3)
    {
        //Set P boat, length 2
        arr[4][5] = 'P';
        arr[5][5] = 'P';
       
        
         //Set S boat, length 3
        arr[1][6] = 'S';
        arr[1][7] = 'S';
        arr[1][8] = 'S';
        
        //Set D boat, length 4
        arr[5][1] = 'D';
        arr[6][1] = 'D';
        arr[7][1] = 'D';
        arr[8][1] = 'D';
        
        //Set B boat, length 6        
        arr[3][8] = 'B';
        arr[4][8] = 'B';
        arr[5][8] = 'B';
        arr[6][8] = 'B';
        arr[7][8] = 'B';
        arr[8][8] = 'B';
//                
    }
 
    if(boardNum == 4)
    {
        //Set P boat, length 2
        arr[8][7] = 'P';
        arr[8][8] = 'P';
        
         //Set S boat, length 3
        arr[5][1] = 'S';
        arr[6][1] = 'S';
        arr[7][1] = 'S';
        
        //Set D boat, length 4
        arr[2][5] = 'D';
        arr[2][6] = 'D';
        arr[2][7] = 'D';
        arr[2][8] = 'D';
        
        //Set B boat, length 6        
        arr[1][3] = 'B';
        arr[2][3] = 'B';
        arr[3][3] = 'B';
        arr[4][3] = 'B';
        arr[5][3] = 'B';
        arr[6][3] = 'B';
//                
    }
    if(boardNum == 5)
    {
        //Set P boat, length 2
        arr[3][7] = 'P';
        arr[4][7] = 'P';
        
         //Set S boat, length 3
        arr[5][2] = 'S';
        arr[5][3] = 'S';
        arr[5][4] = 'S';
        
        //Set D boat, length 4
        arr[3][2] = 'D';
        arr[3][3] = 'D';
        arr[3][4] = 'D';
        arr[3][5] = 'D';
        
        //Set B boat, length 6        
        arr[7][1] = 'B';
        arr[7][2] = 'B';
        arr[7][3] = 'B';
        arr[7][4] = 'B';
        arr[7][5] = 'B';
        arr[7][6] = 'B';
//                
    }
    
    if(boardNum == 6)
    {
        //Set P boat, length 2
        arr[1][4] = 'P';
        arr[1][5] = 'P';
        
         //Set S boat, length 3
        arr[3][7] = 'S';
        arr[4][7] = 'S';
        arr[5][7] = 'S';
        
        //Set D boat, length 4
        arr[3][2] = 'D';
        arr[4][2] = 'D';
        arr[5][2] = 'D';
        arr[6][2] = 'D';
        
        //Set B boat, length 6        
        arr[8][2] = 'B';
        arr[8][3] = 'B';
        arr[8][4] = 'B';
        arr[8][5] = 'B';
        arr[8][6] = 'B';
        arr[8][7] = 'B';
//                
    }
    
    if(boardNum == 7)
    {
        //Set P boat, length 2
        arr[4][5] = 'P';
        arr[5][5] = 'P';
        
         //Set S boat, length 3
        arr[2][1] = 'S';
        arr[3][1] = 'S';
        arr[4][1] = 'S';
        
        //Set D boat, length 4
        arr[1][5] = 'D';
        arr[1][6] = 'D';
        arr[1][7] = 'D';
        arr[1][8] = 'D';
        
        //Set B boat, length 6        
        arr[3][8] = 'B';
        arr[4][8] = 'B';
        arr[5][8] = 'B';
        arr[6][8] = 'B';
        arr[7][8] = 'B';
        arr[8][8] = 'B';               
    }
    
    if(boardNum == 8)
    {
        //Set P boat, length 2
        arr[1][7] = 'P';
        arr[1][8] = 'P';
        
         //Set S boat, length 3
        arr[8][5] = 'S';
        arr[8][6] = 'S';
        arr[8][7] = 'S';
        
        //Set D boat, length 4
        arr[5][3] = 'D';
        arr[6][3] = 'D';
        arr[7][3] = 'D';
        arr[8][3] = 'D';
        
        //Set B boat, length 6        
        arr[3][1] = 'B';
        arr[3][2] = 'B';
        arr[3][3] = 'B';
        arr[3][4] = 'B';
        arr[3][5] = 'B';
        arr[3][6] = 'B';               
    }
    
        if(boardNum == 9)
    {
        //Set P boat, length 2
        arr[7][4] = 'P';
        arr[7][5] = 'P';
        
         //Set S boat, length 3
        arr[2][4] = 'S';
        arr[2][5] = 'S';
        arr[2][6] = 'S';
        
        //Set D boat, length 4
        arr[5][1] = 'D';
        arr[5][2] = 'D';
        arr[5][3] = 'D';
        arr[5][4] = 'D';
        
        //Set B boat, length 6        
        arr[2][8] = 'B';
        arr[3][8] = 'B';
        arr[4][8] = 'B';
        arr[5][8] = 'B';
        arr[6][8] = 'B';
        arr[7][8] = 'B';              
    }
    
    if(boardNum == 10)
    {
        //Set P boat, length 2
        arr[1][7] = 'P';
        arr[1][8] = 'P';
        
         //Set S boat, length 3
        arr[3][5] = 'S';
        arr[3][6] = 'S';
        arr[3][7] = 'S';
        
        //Set D boat, length 4
        arr[5][3] = 'D';
        arr[5][4] = 'D';
        arr[5][5] = 'D';
        arr[5][6] = 'D';
        
        //Set B boat, length 6        
        arr[8][1] = 'B';
        arr[8][2] = 'B';
        arr[8][3] = 'B';
        arr[8][4] = 'B';
        arr[8][5] = 'B';
        arr[8][6] = 'B';               
    }
    return arr;
}


void Board::attack(Player &player, Board &player1){
        
        
        
        setAttackCoordinate();
        
        if( isHit() ) { //if coordinate is hit, return true 
            
            displayBoards(player, player1);
            cout << "THATS A DIRECT HIT!\n\n";
            increaseShipsDestroyedCount();
        
        } else { 
            displayBoards(player, player1);
            cout << "YOU MISS!!\n\n";
        }

    
}//END attack()

void Board::setAttackCoordinate(){

    cout << "Enter Attack Coordinate (e.g 1A or 1a): ";
    cin >> attackCoordinate; //e.g 1c
    system("clear");
    displayBanner();
    
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
 
 //==============================computer attacks player=======================================================

 void Board::computerAttack(Player &player1, Board &playersBoard){
        
        
       // setAttackCoordinate();
        if( didComputerHit() ) { //if coordinate is hit, return true 

            cout << "COMPUTER HIT YOUR BOAT!\n\n";
            increasePlayerShipsDestroyedCount();
        
        } else { 

            cout << "COMPUTER MISSES!!\n\n";
        }

    
}//END attack()
 
bool Board::didComputerHit() {
    
    int min = 0;
    int max = 9;
    int seed = time(0);
    
    srand(seed);
    
    int col = min + (rand() % (max - min +1));
    int row = min + (rand() % (max - min +1));

   
    //If computer misses, mark coordinate with  ~, for miss
    if( board[row][col] == '.'){

        board[row][col] = '~';
        
        return false;
        
    //If player hits, mark coordinate with X, for hit
    }else {
        
        //Change 'Letter' to 'X', to let user know he hit the boat
        board[row - 1][col] = 'X';
        
        return true;
    }
  
}

void Board::increasePlayerShipsDestroyedCount(){
    ++shipsDestroyedComp;
}
 int Board::getPlayerShipsDestroyedCount(){
     return shipsDestroyedComp; 
 }
 
//****************************************************************************************************
//                                   Display Banner                                                  *
//****************************************************************************************************
void Board::displayBanner( ){
      
      cout << "\n================================================================================================================================"

           << "\n================================================================================================================================"

           << "\n==                                                                                                                            =="

           << "\n==                                                      BATTLESHIP !                                                    =="

           << "\n==                                                                                                                            =="

           << "\n================================================================================================================================"

           << "\n================================================================================================================================\n\n";
       
      if(firstDisplay) {
          
          cout << "\nA game where you will race to see who can find and sink their opponents ships first. "
           <<  "\nYou will be playing against the computer and each start with 4 boats.";
          cout << endl << endl;
          firstDisplay = false; 
          
      }
      firstDisplay = false;
      
    
}
