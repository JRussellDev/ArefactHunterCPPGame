#include <iostream>
#include <string>
#include <stdlib.h> // Included to make purely random 
#include "LivingEntity.h"
#include "Player.h"
#include "Enemy.h"
#include "Weapon.h"

Enemy::Enemy()
{
	damage = 0;
	accuracy = 100;
	poisonTimer = 0;
	HealingPotions = rand() % 4 + 1;
	IsPoisoned = false;
	srand((unsigned)time(NULL)); // Seeds a random numbers to be actually random
}

int Enemy::Attack()
{
	int Upper = damage + 4;
	int Lower = damage + 4;
	
	int damageToDeal = rand() % Upper + Lower;

	if (WillHit())
	{
	 cout << "The Enemy " << name << " attacked and it hit! It Dealt: " << damageToDeal << " damage." << endl;
     return damageToDeal;
	}
	else
	{
		cout << "The Enemy " << name << " attacked but it missed!That was a close one..." << endl;
		return 0;
	}
	
}

bool Enemy::WillHit()
{
	int chanceToHit = rand() % 100 + 0;

	if (chanceToHit <= accuracy)
	{
		return true;
	}
	else
	{
		return false;
	}
}