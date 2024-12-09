#include "Player.h"
#include "Novice.h"

void Player::Initialize() {

}

void Player::Update() {

}

void Player::Draw() {
	Novice::DrawBox(int(pos.x),int(pos.y), 30, 30, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight() {
	this->pos.x += this->speed;
}

void Player::MoveLeft() {
	this->pos.x -= this->speed;
}