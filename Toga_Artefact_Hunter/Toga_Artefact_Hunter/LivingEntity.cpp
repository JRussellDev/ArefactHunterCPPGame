#include <iostream>
#include <string>
#include "LivingEntity.h"
#include "Player.h"
#include "Enemy.h"
#include "Weapon.h"

LivingEntity::LivingEntity()
{
	name = "Unknown";
	health = 100;
}

bool LivingEntity::IsPoisoned()
{
	return true;
}

bool LivingEntity::IsAlive()
{

	return (health > 0);

}
