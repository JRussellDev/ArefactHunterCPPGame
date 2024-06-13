#pragma once
#include <string>
#include "Player.h"
#include "Enemy.h"

using namespace std;

class Game
{
public:
	Player player;
	Enemy* enemies = new Enemy [29];

	int currentRoom;
	bool gameWon;
	bool roomWon;

	Game();

	~Game();

	void GameIntroduction();

	void RoomSetUp();

	void FinalRoomSetUp();

	void PlayerUseItem();

	void Battle();

	void PlayersTurn();

	void EnemiesTurn();

	void DropWeapon();

	void DropItems();

	void Paths();

	string DecidePath(int* &path, int lr);

	void EndGame();
};

