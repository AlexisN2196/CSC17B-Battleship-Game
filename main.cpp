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


//Function prototypes 
int computerChoice();

//Execution begins 
int main(int argc, char** argv) {

    
    //Declaration of variables 
    //The player and computer will have separate boards
    //The computers board will be chosen randomly and different every game
    //Set Random Seed
    int seed = time(0);
    srand(seed);
    //Object Declaration
    Board computersBoard(computerChoice()); 
    Board playersBoard(computerChoice());
    Player player1;
    
    string name = "";
    bool firstDisplay = true; //Used to  keep track of the first time the banner is displayed
    
    //Start of Game 
    computersBoard.displayBanner(); //Displays the welcome screen/banner
    
    
    //Explain game and get user name
    player1.setName();
    
    system("clear");
    
    //Display empty boards
    computersBoard.displayBoards(player1, playersBoard);

    system("clear");
    computersBoard.displayBanner();

     //Display boards
    computersBoard.displayBoards(player1, playersBoard);
    
    //START OF GAME
    cout << "STARTING BATTLE!!\n\n";
    while( computersBoard.getShipsDestroyedCount() != 15){
         
         computersBoard.attack(player1, playersBoard); //attack computers board
         playersBoard.computerAttack(player1, playersBoard); //computer attacks player's board
         
    }//End While loop
     

    return 0;

}//End main

//Function definitions 

//**************computer board random choice********************************
int computerChoice(){
    
    int min = 1;
    int max = 4;

    int compChoice = min + (rand() % (max - min +1));

    return compChoice;
}
