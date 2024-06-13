#pragma once
#include <string>

using namespace std;

class LivingEntity
{
public:
	string name;
	int health;

	LivingEntity();

	bool IsPoisoned();

	bool IsAlive();

};


