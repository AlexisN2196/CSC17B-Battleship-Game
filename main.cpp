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

//User Libraries
#include "Player.h"
#include "Ship.h"
#include "Grid.h"


using namespace std;

//Global variables 



//Function prototypes 
void displayBanner();
void displayInitialPrompt(string);

//Execution begins 

int main(int argc, char** argv) {

    
    
    //Declaration of variables 
    Grid grid1;
    string name = "";
    
    //Start of Game 
    displayBanner(); //Displays the welcome screen/banner

    //Display initial prompts and get user input
    displayInitialPrompt(name);
    
    
    grid1.displayGrid();
    
    
    //system("pause");



    return 0;

}//End main

//Function definitions 

void displayInitialPrompt(string name) {
    
    cout << "Enter Your Name: ";
    cin >> name; 
}


//****************************************************************************************************
//                                   Display Banner                                                  *
//****************************************************************************************************
void displayBanner(){
      
      cout << "\n================================================================================================================================"

           << "\n================================================================================================================================"

           << "\n==                                                                                                                            =="

           << "\n==                                                 WELCOM TO BATTLESHIP !                                                     =="

           << "\n==                                                                                                                            =="

           << "\n================================================================================================================================"

           << "\n================================================================================================================================\n\n";
    
}