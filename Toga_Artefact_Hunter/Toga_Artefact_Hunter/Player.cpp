#include <iostream>
#include <string>
#include <stdlib.h> // Included to make purely random 
#include "LivingEntity.h"
#include "Player.h"
#include "Enemy.h"
#include "Weapon.h"



Player::Player()
{
	Antidotes = 0;
	PoisonDarts = 1;
	HealingPotions = 3;
}

int Player::Attack()
{
	srand((unsigned)time(NULL)); // Seeds a random number
	int Upper = weapon.damage + 4;
	int Lower = weapon.damage - 4;

    int damageToDeal =  rand() % Upper + Lower;

	if (weapon.WillHit())
	{
	cout << "Your attack hit dealing: " << damageToDeal << " damage!" << endl;
	return damageToDeal;
	}
	else
	{
	cout << "Your attack missed!" << endl;
	return 0;
	}

}

void Player::InputName()
{
	string inputname;
	bool confirm = false;
	char checkConfirm;

	while (!confirm)
	{
		cout << "So what is your name traveller?" << endl;
		cin >> inputname;
		cout << "So your name is: " << inputname << "? (Y/N)" << endl;
		cin >> checkConfirm;
		if (checkConfirm == 'Y' || checkConfirm == 'y')
		{
			confirm = true;
			name = inputname;
		}

	}

}

bool Player::ShootPoison()
{
	if (PoisonDarts > 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool Player::ShouldReplaceWeapon(string weaponName, int weaponDamage, int weaponAccuracy)
{
	bool confirm = false;
	char checkConfirm;

	cout << "This weapon is called: " << weaponName << "." << endl; // PRESENT WEAPONS NAME
	cout << "Its average damage is: " << weaponDamage << "." << endl; // PRESENT WEAPONS DAMAGE
	cout << "Its accuracy rate is: " << weaponAccuracy << "." << endl; // PRESENT WEAPONS ACCURACY

	while (!confirm)
	{
	cout << "Will you take this weapon replacing the one you are currently carrying? Y/N" << endl;
	cin >> checkConfirm;
	if (checkConfirm == 'Y' || checkConfirm == 'y')
	{
		confirm = true;
		return true;
	}
	else if (checkConfirm == 'N' || checkConfirm == 'n')
	{
		return false;
	}
	}


}
