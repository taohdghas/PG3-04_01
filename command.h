#pragma once
#include "Player.h"

class Icommand
{
public:
	virtual void Exec(Player& player) = 0;
};

class MoveRightCommand :public Icommand {
public:
	void Exec(Player& player)override;
};

class MoveLeftCommand :public Icommand {
	void Exec(Player& player)override;
};

