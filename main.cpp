/* 
 * File:   main.cpp
 * Author(s):Alexis N, Thomas S
 *
 * Date: February 24, 2021, 5:32 PM
 * Desc: BattleShip
 * 
 */

//Libraries
#include <cstdlib>
#include <iostream> 
#include <ctime>

//User Libraries
#include "Player.h"
#include "Ship.h"
#include "Grid.h"


using namespace std;

//Global variables 



//Function prototypes 
void displayBanner();
void displayInitialPrompt(string);
int computerChoice();

//Execution begins 

int main(int argc, char** argv) {

    
    
    //Declaration of variables 
    Grid board(computerChoice()); //The player and computer will have separate boards, the 1 initializes the computers board 1
    int row, col;
    char direction;
    
    Player p1();
    
    string name = "";
    
    //Start of Game 
    displayBanner(); //Displays the welcome screen/banner
    
    //Explain game and get user name
    displayInitialPrompt(name);
    
     system("clear");
    
    //Display empty boards
    board.displayBoards();
  
   
    
    //Loop to get players coordinates for all  
     board.createUsersBoard();
     
     //Fill the users board with his/her input
     board.fillUsersBoard();
    
    
    //system("clear");
    
    //board.displayBoards();
   // board.displayPlayerBoard();
    
    
    //system("pause");



    return 0;

}//End main

//Function definitions 

void displayInitialPrompt(string name) {
    
    cout << "\n\nFirst, enter your name: ";
    cin >> name; 
    cout << endl << endl << endl;
}


//****************************************************************************************************
//                                   Display Banner                                                  *
//****************************************************************************************************
void displayBanner(){
      
      cout << "\n================================================================================================================================"

           << "\n================================================================================================================================"

           << "\n==                                                                                                                            =="

           << "\n==                                                 WELCOME TO BATTLESHIP !                                                    =="

           << "\n==                                                                                                                            =="

           << "\n================================================================================================================================"

           << "\n================================================================================================================================\n\n";
       cout << "\nA game where you will race to see who can find and sink their opponents ships first. "
           <<  "\nYou will be playing against the computer and each start with 4 boats.";
    
}
//**************computer board random choice********************************
int computerChoice()
{
    int min = 1;
    int max = 4;
    int seed = time(0);
    
    srand(seed);
    
    int compChoice = min + (rand() % (max - min +1));
    
    
    return compChoice;
}
