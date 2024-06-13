// Toga_Artefact_Hunter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "LivingEntity.h"
#include "Player.h"
#include "Enemy.h"
#include "Weapon.h"
#include "Game.h"

using namespace std;

int main()
{
    Game* myGame = new Game;   // CREATE INSTANCE OF A GAME
    myGame->GameIntroduction();
    myGame->player.InputName();
   
    // GAMEPLAY LOOP
    for (myGame->currentRoom = 1; myGame->currentRoom <= 30; myGame->currentRoom++)
    {
        myGame->Paths();
        myGame->Battle();   //  BATTLE LOOP
    }

    // CLEAN UP DYNAMIC GAME OBJECT
    delete myGame;      
    myGame = NULL;
}


