#pragma once
#include "LivingEntity.h"
#include <string>
using namespace std;

class Enemy :
    public LivingEntity
{
public:
    int damage;
    int accuracy;
    int poisonTimer;
    int HealingPotions;
    bool IsPoisoned;

    Enemy();

   int Attack();

   bool WillHit();


};

