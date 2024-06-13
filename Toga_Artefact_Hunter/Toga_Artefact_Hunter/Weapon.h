#pragma once
#include <string>

using namespace std;

class Weapon
{
public:
	string name;
	int damage;
	int accuracy;

	Weapon();

	Weapon(string name, int damage, int accuracy);
	bool WillHit();

};

