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

//Players Grid 
Grid::Grid( int boardNum) {
  
   board = userBoard = createUsersBoard();
   computersBoard = fillComputersBoard(boardNum);
  
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
			cout << setw(4) << left <<  "*";//*(userBoard + row * 10 + col)
                        
		}
                
                //Computers board
                cout << "\t" << setw(1) << left << row + 1 << " | " ;
                for (int col = 0; col < 10; col++)
		{
			cout << setw(4) << left << "*" ;//*(computersBoard + row * 10 + col)
                        
		}
                
                
                
		cout << endl << endl;
                
                
                
                
	}
        cout << "\n\n\t\t\t   " << "PLAYER:    " << "\t\t\t\t\t" << "COMPUTER\n"; 
	cout << endl;
}
void Grid::setShips(){ //player will choose coordinates for their ship
    
}
//Mutator Functions 


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
        //Set P boat, length 2
        //*(arr + 0 * 10 + 2) = ' ';
        //*(arr + 0 * 10 + 1) = ' ';
       // *(arr + 0 * 10 + 3) = ' ';
        //*(arr + 1 * 10 + 1) = ' ';
        *(arr + 1 * 10 + 2) = 'P';
        *(arr + 2 * 10 + 2) = 'P';
        
        //Set S boat, length 3
        *(arr + 8 * 10 + 1) = 'S';
        *(arr + 8 * 10 + 2) = 'S';
        *(arr + 8 * 10 + 3) = 'S';
        
        //Set D boat, length 4
        *(arr + 0 * 10 + 6) = 'D';
        *(arr + 1 * 10 + 6) = 'D';
        *(arr + 2 * 10 + 6) = 'D';
        *(arr + 3 * 10 + 6) = 'D';
        
        //Set B boat, length 6        
        *(arr + 6 * 10 + 3) = 'B';
        *(arr + 6 * 10 + 4) = 'B';
        *(arr + 6 * 10 + 5) = 'B';
        *(arr + 6 * 10 + 6) = 'B';
        *(arr + 6 * 10 + 7) = 'B';
        *(arr + 6 * 10 + 8) = 'B';        
    }
    
    if(boardNum == 2)
    {
        //Set P boat, length 2
        *(arr + 9 * 10 + 8) = 'P';
        *(arr + 9 * 10 + 9) = 'P';
        
         //Set S boat, length 3
        *(arr + 1 * 10 + 1) = 'S';
        *(arr + 1 * 10 + 2) = 'S';
        *(arr + 1 * 10 + 3) = 'S';
        
        //Set D boat, length 4
        *(arr + 5 * 10 + 0) = 'D';
        *(arr + 6 * 10 + 0) = 'D';
        *(arr + 7 * 10 + 0) = 'D';
        *(arr + 8 * 10 + 0) = 'D';
        
        //Set B boat, length 6        
        *(arr + 0 * 10 + 9) = 'B';
        *(arr + 1 * 10 + 9) = 'B';
        *(arr + 2 * 10 + 9) = 'B';
        *(arr + 3 * 10 + 9) = 'B';
        *(arr + 4 * 10 + 9) = 'B';
        *(arr + 5 * 10 + 9) = 'B';
//                
    }
    
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
  
    //REMEMBER TO DELETE DYNAMIC Memory!!
    return arr;
}

//Created the initial 2D board for the player  
char * Grid::createUsersBoard(){
    
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
    
    return arr; 
 
}//End Grid

void Grid::fillUsersBoard(){
    
    char letter;
  string name;
  int spaces;
  
  cout << "\nThe computer has strategically placed it's ships. Now it's your turn.";
  
   for (int ships = 0; ships <4; ships++) {
       
         if (ships == 0){
            letter = 'B';
            name = "Battleship";
            spaces = 6;
        }
        if (ships == 1){
            letter = 'D';
            name = "Destroyer";
            spaces = 4;
        }
        if (ships == 2){
            letter = 'S';
            name = "Submarine";
            spaces = 3;
        }
        if (ships == 3){
            letter ='P';
            name = "Patrol Boat";
            spaces = 2;
        }

        cout << "\nChoose a starting coordinate for each of your boats, then decide if the boat will be placed horizontally (to the right) or vertically (starting at the top) from that point";
        cout << "\n\nYour " << name << " takes up " <<spaces << " spaces.";
        cout << "\nEnter a number coordinate (1-10)";
        cin >> row;
        row --;
        cout <<"Now enter a letter coordinate (A - J)";
        cin >> alphaCol;
        putchar (toupper (alphaCol));
        cout <<"Will this ship be placed horizontally or vertically? (H or V)";
        cin >> direction;
        putchar (toupper (direction));


        if (alphaCol == 'A') col = 0;
        if (alphaCol == 'B') col = 1;
        if (alphaCol == 'C') col = 2;
        if (alphaCol == 'D') col = 3;
        if (alphaCol == 'E') col = 4;
        if (alphaCol== 'F') col = 5;
        if (alphaCol == 'G') col = 6;
        if (alphaCol == 'H') col = 7;
        if (alphaCol == 'I') col = 8;
        if (alphaCol == 'J') col = 9;

        cout << "column: " << col << "\n";
        cout << "row: " << row << "\n";

      

        if (direction == 'H'){

            *(userBoard + row * 10 + col) = letter;
            *(userBoard + row * 10 + (col + 1)) = letter;
            *(userBoard + row * 10 + (col + 2)) = letter;
            *(userBoard + row * 10 + (col + 3)) = letter;
            *(userBoard + row * 10 + (col +4 )) = letter;
            *(userBoard + row * 10 + (col + 5)) = letter;
       
            
        }
        else if (direction == 'V'){

            *(userBoard + row * 10 + col) = letter;
            *(userBoard + (row +1) * 10 + col) = letter;
            *(userBoard + (row +2) * 10 + col) = letter;
            *(userBoard + (row +3)* 10 + col) = letter;
            *(userBoard + (row +4)* 10 + col) = letter;
            *(userBoard + (row +5)* 10 + col) = letter;    

        }

             //userBoard = arr; 
            cout <<"   \t    " << setw(4) << left    << 'A' << setw(4) << 'B' << setw(4) << 'C' << setw(4) << 'D' << setw(4) << 'E' << setw(4) << 'F' 
                 << setw(4)   << 'G'     << setw(4) << 'H' << setw(4) << 'I' << setw(4) << 'J' //End players board
                 <<"   \t    " << setw(4) << left    << 'A' << setw(4) << 'B' << setw(4) << 'C' << setw(4) << 'D' << setw(4) << 'E' << setw(4) << 'F' 
                 << setw(4)   << 'G'     << setw(4) << 'H' << setw(4) << 'I' << setw(4) << 'J' << endl; //End players board

            cout <<"   \t   " << "======================================" <<"   \t   " << "======================================\n" ;
        for (int row = 0; row < 10; row++)
        {
            //Players board
            cout << "\t" << setw(1) << left << row + 1 << " | " ;
            for (int col = 0; col < 10; col++)
            {
                cout << setw(4) << left << *(userBoard + row * 10 + col);

            }

         //Computers board
        cout << "\t" << setw(1) << left << row + 1 << " | " ;
        for (int col = 0; col < 10; col++)
        {
            cout << setw(4) << left << "*" ;//*(computersBoard + row * 10 + col)

        }

        cout << endl << endl;

       }
            cout << "\n\n\t\t\t   " << "PLAYER:    " << "\t\t\t\t\t" << "COMPUTER\n"; 
            cout << endl;


  
   }//End outer for 
    
}//End fillUsersBoard()

void Grid::displayPlayerBoard()
{
   for (int row = 0; row < 10; row++)
    {
        //Players board
        cout << "\t" << setw(1) << left << row + 1 << " | " ;
        for (int col = 0; col < 10; col++)
	{
            cout << setw(4) << left << *(userBoard + row * 10 + col);
                        
	}
   
   
     //Computers board
    cout << "\t" << setw(1) << left << row + 1 << " | " ;
    for (int col = 0; col < 10; col++)
    {
        cout << setw(4) << left << "*" ;//*(computersBoard + row * 10 + col)
                        
    }
               
    cout << endl << endl;
                
   }
        cout << "\n\n\t\t\t   " << "PLAYER:    " << "\t\t\t\t\t" << "COMPUTER\n"; 
	cout << endl;
}//End displayPlayerBoard()
