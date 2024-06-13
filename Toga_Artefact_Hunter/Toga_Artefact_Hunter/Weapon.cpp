#include <iostream>
#include <string>
#include "LivingEntity.h"
#include "Player.h"
#include "Enemy.h"
#include "Weapon.h"

Weapon::Weapon()
{
	name = "Wooden Sword";
	damage = 25;
	accuracy = 75;
}

Weapon::Weapon(string wepname, int wepdamage, int wepaccuracy)
{
	name = wepname;
	damage = wepdamage;
	accuracy = wepaccuracy;

}

bool Weapon::WillHit()
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
