#pragma once
#include "command.h"
class InputHandle
{
public:
	Icommand* HandleInput();

	void AssignMoveLeftCommand2PressKeyA();
	void AssignMoveRightCommand2PressKeyD();
private:
	Icommand* pressKeyD_;
	Icommand* pressKeyA_;
};

