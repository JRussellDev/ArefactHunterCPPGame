#pragma once
#include "LivingEntity.h"
#include <string>
#include "Weapon.h"

using namespace std;

class Player :
    public LivingEntity
{
public:
    Weapon weapon;
    int Antidotes;
    int PoisonDarts;
    int HealingPotions;
    bool IsPoisoned;

    Player();

    int Attack();

    void UseItem();

    bool ShootPoison();

    bool ShouldReplaceWeapon(string weaponName, int weaponDamage, int weaponAccuray);

    void InputName();







};

