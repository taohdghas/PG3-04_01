#include "command.h"

void MoveRightCommand::Exec(Player*& player) {
	player->MoveRight();
}