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
void displayInitalPrompt();

//Execution begins 

int main(int argc, char** argv) {

    //Declaration of variables 
    Grid grid1;
    grid1.displayGrid();

    system("pause");



    return 0;

}//End main

//Function definitions 

void displayInitalPrompt() {

    cout << "Welcome";
    cout << "Enter location for ship 1 (lenght 3) e.g A3:";
}
