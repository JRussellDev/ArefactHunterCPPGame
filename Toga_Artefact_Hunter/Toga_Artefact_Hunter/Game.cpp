#include <iostream>
#include <string>
#include <stdlib.h> // Included to make purely random 
#include "LivingEntity.h"
#include "Player.h"
#include "Enemy.h"
#include "Weapon.h"
#include "Game.h"

Game::Game()
{
	currentRoom = 1;
	srand((unsigned)time(NULL)); // Seeds a random numbers to be actually random
}

Game::~Game()
{
	delete[]enemies;
	enemies = NULL;
}

void Game::GameIntroduction()
{
	cout << "Welcome to Artefact Hunter!" << endl;
	cout << "--------------------------------------------------------------------------------------------------------" << endl;
	cout << "In this game you will battle through the dark depths of this here dungeon..." << endl;
	system("pause");
	cout << "Your mission is to retrieve a priceless powerful artefact which holds the power to save the human race." << endl;
	system("pause");
	cout << "Good luck traveller you are our only hope." << endl;
	system("pause");

}

void Game::RoomSetUp()
{
	if (currentRoom == 30)
	{
		enemies[currentRoom].name = "Alduine The Dragon |Artefact Guardian|";
		enemies[currentRoom].damage = 45;
		enemies[currentRoom].accuracy = 20;
		return;
	}
	
	int enemiesName = rand() % 10 + 1;

	// INITIALISE ENEMIES STATS
	switch (enemiesName)
	{
	case 1: enemies[currentRoom].name = "Goblin";
		enemies[currentRoom].damage = 6;
		enemies[currentRoom].accuracy = 90;
			break;
	case 2: enemies[currentRoom].name = "Skeleton";
		enemies[currentRoom].damage = 12;
		enemies[currentRoom].accuracy = 79;
		break;
	case 3: enemies[currentRoom].name = "Ogre";
		enemies[currentRoom].damage = 18;
		enemies[currentRoom].accuracy = 60;
		break;
	case 4: enemies[currentRoom].name = "Vampire";
		enemies[currentRoom].damage = 14;
		enemies[currentRoom].accuracy = 85;
		break; 
	case 5: enemies[currentRoom].name = "Troll";
		enemies[currentRoom].damage = 20;
		enemies[currentRoom].accuracy = 45;
		break;
	case 6: enemies[currentRoom].name = "Orc";
		enemies[currentRoom].damage = 16;
		enemies[currentRoom].accuracy = 67;
		break;
	case 7: enemies[currentRoom].name = "Werewolf";
		enemies[currentRoom].damage = 12;
		enemies[currentRoom].accuracy = 80;
		break;
	case 8: enemies[currentRoom].name = "Zombie";
		enemies[currentRoom].damage = 11;
		enemies[currentRoom].accuracy = 85;
		break;
	case 9: enemies[currentRoom].name = "Dungeon Thief";
		enemies[currentRoom].damage = 15;
		enemies[currentRoom].accuracy = 90;
		break;
	case 10: enemies[currentRoom].name = "Corrupted Warrior";
		enemies[currentRoom].damage = 18;
		enemies[currentRoom].accuracy = 85;
		break;
	}

	// TEXT SHOWN AT START

	cout << "You enter the next room, before you stands a terrifying " << enemies[currentRoom].name << endl;
	system("pause");


}

void Game::Paths()
{
	int choice = 0;
	int pathOne = rand() % 21 + 1;
	int pathTwo = rand() % 21 + 1;

	int* pathOnePtr = &pathOne;
	int* pathTwoPtr = &pathTwo;

	system("CLS"); // CLEAR THE CONSOLE 

	if (currentRoom < 30)
	{
	cout << "Which path do you take?" << endl;
	cout << "1 - " << DecidePath(pathOnePtr, 1) << endl;
	cout << "2 - " << DecidePath(pathTwoPtr, 2) << endl;
	}
	else         //  FINAL BOSS ROOM
	{
		cout << player.name << ", you have made it to the final stage of the dungeon!" << endl;
		cout << "But now you must face the guardian of the artefact..." << endl;
		cout << "Infront of you is a giant throne room, there has clearly been many great battles fought here but the skeletons of past travellers litter the ground" << endl;
		cout << "You start to hear boss music..." << endl;

	}

	cin >> choice;
      
}

string Game::DecidePath(int* &path, int lr)
{
	string LeftOrRight;
	bool choicemade = false;

	if (lr == 1)
	{
		LeftOrRight = "On your left is ";
		choicemade = true;
	}
	else if (lr == 2)
	{
		LeftOrRight = "On your right is ";
		choicemade = true;
	}

	switch (*path)
	{
	case 1: cout << LeftOrRight << "a dusty old library." << endl;
		return "Library";
		break;
	case 2: cout << LeftOrRight << "a mossy and abandoned prison cell." << endl;
		return "Prison cell";
		break;
	case 3: cout << LeftOrRight << "a dirty kitchen full of rotting meat." << endl;
		return "Kitchen";
		break;
	case 4: cout << LeftOrRight << "an empty armoury, a body rests up against a corner." << endl;
		return "Armoury";
		break;
	case 5: cout << LeftOrRight << "a sleeping chamber with blood stained stone walls." << endl;
		return "Sleeping chamber";
		break;
	case 6: cout << LeftOrRight << "a dark stairwell that leads down." << endl;
		return "Stairwell";
		break;
	case 7: cout << LeftOrRight << "a room with a floor of mist masking its surroundings." << endl;
		return "Misty room";
		break;
	case 8: cout << LeftOrRight << "a fountain of old and stale water." << endl;
		return "Water fountain";
		break;
	case 9: cout << LeftOrRight << "a lantern lit hallway with no end in sight." << endl;
		return "Hallway";
		break;
	case 10: cout << LeftOrRight << "a old wooden desk covered in old paper work." << endl;
		return "Desk";
		break;
	case 11: cout << LeftOrRight << "A mouldy and mossy tunnel with stone brick walls." << endl;
		return "Tunnel";
		break;
	case 12: cout << LeftOrRight << "a dusty old library." << endl;
		return "Library";
		break;
	case 13: cout << LeftOrRight << "a dusty old library." << endl;
		return "Library";
		break;
	case 14: cout << LeftOrRight << "a dusty old library." << endl;
		return "Library";
		break;
	case 15: cout << LeftOrRight << "a dusty old library." << endl;
		return "Library";
		break;
	case 16: cout << LeftOrRight << "a dusty old library." << endl;
		return "Library";
		break;
	case 17: cout << LeftOrRight << "a dusty old library." << endl;
		return "Library";
		break;
	case 18: cout << LeftOrRight << "a dusty old library." << endl;
		return "Library";
		break;
	case 19: cout << LeftOrRight << "a dusty old library." << endl;
		return "Library";
		break;
	case 20: cout << LeftOrRight << "a dusty old library." << endl;
		return "Library";
		break;
	default:
		break;
	}

}

void Game::Battle()
{
       RoomSetUp(); // INTIALISE ENEMY 

	while (1 == 1)
	{
		
		Game::PlayersTurn();
		if (!enemies[currentRoom].IsAlive())  // DID ENEMY DIE AFTER PLAYERS TURN
			break;

		cin.ignore();

		Game::EnemiesTurn();
		if (!player.IsAlive()) // DID PLAYER DIE AFTER ENEMIES TURN
			break;

		// AFTER COMBAT CYCLE
		system("pause");
	}

	if (player.IsAlive()) // PLAYER BEAT THIS ROOM
	{
		system("CLS"); // CLEAR THE CONSOLE
		cout << "The enemy has fallen, victory is yours." << endl;
		DropItems();
		cout << "Congratulations you made it past this room! :D" << endl << " Time to move to the next!" << endl << "Press enter when you are ready to continue..." << endl;
		system("pause");
	}
	else
	{
		// PLAYER HAS LOST
		system("CLS"); // CLEAR THE CONSOLE
		cout << "You have fallen..." << endl;
		system("pause");
		currentRoom = 50;
	}

}

void Game::DropItems()
{

	cout << "You search the area for loot..." << endl;
	system("pause");

	srand((unsigned)time(NULL)); // Seeds a random number
	int itemToDrop = rand() % 100;

	if (itemToDrop < 10)
	{
		// DROP POISON DART
		player.PoisonDarts++;
		cout << "You found a rare poison dart!" << endl;
	}
	else if (itemToDrop > 10 && itemToDrop < 45)
	{
	    // DROP HEALTH POTION
		player.HealingPotions++;
		cout << "You found a healing potion!" << endl;
		system("pause");
	}
	else if (itemToDrop > 45 && itemToDrop < 75)
	{
		DropWeapon();
	}
	else
	{
		// DROP NOTHING
		cout << "You didnt find anything here." << endl;
	}

}

void Game::DropWeapon()
{ 

	int weaponToDrop = rand() % 100;
	weaponToDrop = 2;
	if (weaponToDrop < 5)// RARE
	{	
	
		if (player.ShouldReplaceWeapon("Alduines Vengance", 32, 75))
		{
			player.weapon.name = "Alduines Vengance";
			player.weapon.damage = 32;
			player.weapon.accuracy = 75;
		}
	}
	else if (weaponToDrop > 5 && weaponToDrop < 25)// COMMON
	{
		

		if (player.ShouldReplaceWeapon("Steel Longsword", 25, 85))
		{
			player.weapon.name = "Steel Longsword";
			player.weapon.damage = 25;
			player.weapon.accuracy = 85;
	             
		}
	}
	else if (weaponToDrop > 25 && weaponToDrop < 40)// COMMON
	{
		

		if (player.ShouldReplaceWeapon("Iron Spear", 20, 95))
		{
			player.weapon.name = "Iron Spear";
			player.weapon.damage = 20;
			player.weapon.accuracy = 95;
		}
	}
	else if (weaponToDrop > 40 && weaponToDrop < 65)// COMMON
	{
		

		if (player.ShouldReplaceWeapon("Battle axe", 38, 65))
		{
			player.weapon.name = "Battle axe";
			player.weapon.damage = 38;
			player.weapon.accuracy = 65;
		}
	}
	else if (weaponToDrop > 65 && weaponToDrop < 80)// COMMON
	{
		

		if (player.ShouldReplaceWeapon("Silver Dagger", 17, 98))
		{
			player.weapon.name = "Silver Dagger";
			player.weapon.damage = 17;
			player.weapon.accuracy = 98;
		}
	}
	else if (weaponToDrop > 80 && weaponToDrop < 90)// UNCOMMON
	{
		

		if (player.ShouldReplaceWeapon("Sharpened Copper Broadsword", 28, 84))
		{
			player.weapon.name = "Sharpened Copper Broadsword";
			player.weapon.damage = 28;
			player.weapon.accuracy = 84;
		}
	}
	else if (weaponToDrop > 90 && weaponToDrop < 96)// UNCOMMON
	{
		

		if (player.ShouldReplaceWeapon("Steel Sythe", 35, 78))
		{
			player.weapon.name = "Steel Sythe";
			player.weapon.damage = 35;
			player.weapon.accuracy = 78;
		}
	}
	else if (weaponToDrop > 96 && weaponToDrop < 99)// VERY RARE
	{

		

		if (player.ShouldReplaceWeapon("Dragon Scale Dagger", 26, 100))
		{
			player.weapon.name = "Dragon Scale Dagger";
			player.weapon.damage = 26;
			player.weapon.accuracy = 100;
		}
	}
	else if (weaponToDrop == 99 || weaponToDrop == 100)// LEGENDARY
	{
		

		if (player.ShouldReplaceWeapon("God Blade of Ages", 45, 80))
		{
			player.weapon.name = "God Blade of Ages";
			player.weapon.damage = 45;
			player.weapon.accuracy = 80;
		}
	}


	}

void Game::PlayerUseItem()
{
	bool usedturn = false;

	while (!usedturn)
	{
		int playerchoice = 0;
		system("CLS"); // CLEAR THE CONSOLE 
		cout << "What item would you like to use?" << endl;
		cout << "1 - Healing Potion" << "    You have: " << player.HealingPotions << endl;
		cout << "2 - Back" << endl;

		cin >> playerchoice;
		switch (playerchoice)
		{
		case 1:
			if (player.HealingPotions > 0)
			{
				player.health += 25;
				player.HealingPotions -= 1;
				cout << "Player used a healing potion!" << endl;
				usedturn = true;
				if (player.health > 100) player.health = 100;
			}
			else
			{
				system("CLS");
				cout << "You cant use a healing potion if you dont have any!" << endl;
				system("pause");
			}
			break;

		case 2: return PlayersTurn();
			break;
		default:
			break;
		}
	}
}

void Game::PlayersTurn()
{
	bool usedturn = false;
	
	while(!usedturn)
	{
	int playerchoice = 0;
    system("CLS"); // CLEAR THE CONSOLE 
	// Present condition of current games stats
	cout << "Current level is: " << currentRoom << " out of 30 " << endl;
	cout << "Your current health is: " << player.health << endl;
	cout << "Current Weapon: " << player.weapon.name << ".  " << "Damage: " << player.weapon.damage << ".  " << "Accuracy: " << player.weapon.accuracy << ".  " << endl;
	cout << "Enemy "<< enemies[currentRoom].name <<" is at : "<< enemies[currentRoom].health << " HP." << endl;
	
	// Ask if player wants to attack, use an item or something else
	cout << "Your Turn" << endl;
	cout << "1 - Attack" << endl;
	cout << "2 - Use an item" << endl;
	cout << "3 - Fire a poison dart" << endl;
	cout << " " << endl;
	cout << "What are you going to do?" << endl;
	cin >> playerchoice;

	switch (playerchoice)
	{
		// Attack
	case 1:
		enemies[currentRoom].health -= player.Attack();
		usedturn = true;
		break;

		//Use Item
	case 2:PlayerUseItem();
		usedturn = true;
		break;

	case 3: if (enemies[currentRoom].IsPoisoned == false && player.ShootPoison())
	{
		enemies[currentRoom].IsPoisoned = true;
		enemies[currentRoom].poisonTimer = rand() % 8 + 2;
		cout << "Player fired a poison dart!" << endl;
		usedturn = true;
	}
		  else
	{
		system("CLS"); // CLEAR THE CONSOLE 
		cout << "You cannot use this because you have no darts or the enemy is already poisoned." << endl;
		system("pause");
	}
		break;
	default:
		system("CLS"); // CLEAR THE CONSOLE 
		cout << "Please enter a valid decision, Now is not the time for playing around!" << endl;
		system("pause");
		break;
	}

	}

	//STOPS PLAYERS HEALTH STACKING ABOVE 100
	if (player.health > 100)
	{
		player.health = 100;
	}

}

void Game::EnemiesTurn()
{
	// IF THE ENEMY IS POISONED
	if (enemies[currentRoom].IsPoisoned && enemies[currentRoom].poisonTimer > 0)
	{
		enemies[currentRoom].health -= 10;
		cout << "Enemy is poisoned dealing 10 damage!" << endl;
		enemies[currentRoom].poisonTimer -= 1;

		if (enemies[currentRoom].poisonTimer == 0)
		{
			cout << "The poison wore off." << endl;
		}
	}
    
	// CAN ONLY USE A HEALING POTION WHEN IT WONT OVERFLOW
    int decisionUpper;
	int decisionLower;

	if (enemies[currentRoom].health > 60)
	{
		decisionUpper = 85;
		decisionLower = 20;
	}
	else
	{
		decisionUpper = 2;
		decisionLower = 0;
	}

	int decision = rand() % decisionUpper + decisionLower; // GENERATE ENEMIES DECISION
	
	if (decision > 80 && enemies[currentRoom].HealingPotions > 0) // USE AN ITEM
	{
		cout << "Enemy "<< enemies[currentRoom].name << " used a healing potion..." << endl;
		enemies[currentRoom].health += 35;
		enemies[currentRoom].HealingPotions -= 1;
	}
	else // ATTACK
	{
		player.health -= enemies[currentRoom].Attack();
	}


	// STOPS ENEMIES HEALTH STACKING ABOVE MAX
	if (enemies[currentRoom].health > 100) 
	{
		enemies[currentRoom].health = 100;
	}

}

void Game::EndGame()
{
	
}