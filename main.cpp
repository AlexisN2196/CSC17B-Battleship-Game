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
#include "Board.h"


using namespace std;

//Global variables 



//Function prototypes 
void displayBanner(bool &);
int computerChoice();

//Execution begins 

int main(int argc, char** argv) {
    
    //Declaration of variables 
    //The player and computer will have separate boards
    //The computers board will be chosen randomly and different every game
    Board computersBoard(computerChoice()); 
    Board playersBoard(computerChoice());
    Player player1;
    
    string name = "";
    bool firstDisplay = true; //Used to  keep track of the first time the banner is displayed
    
    //Start of Game 
    displayBanner(firstDisplay); //Displays the welcome screen/banner
    
    
    //Explain game and get user name
    player1.setName();
    
    system("clear");
    
    //Display empty boards
    computersBoard.displayBoards(player1, playersBoard);

    system("clear");
    displayBanner(firstDisplay);

     //Display boards
    computersBoard.displayBoards(player1, playersBoard);
    
    //START OF GAME
    cout << "STARTING BATTLE!!\n\n";
    while( computersBoard.getShipsDestroyedCount() != 15){
  
         computersBoard.attack(player1, playersBoard); //attack computers board
         //Display boards


    }//End While loop
     

    return 0;

}//End main

//Function definitions 



//****************************************************************************************************
//                                   Display Banner                                                  *
//****************************************************************************************************
void displayBanner( bool & firstDisplay){
      
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
      
    
}
//**************computer board random choice********************************
int computerChoice(){
    
    int min = 1;
    int max = 4;
    int seed = time(0);
    
    srand(seed);
    
    int compChoice = min + (rand() % (max - min +1));

    return compChoice;
}
