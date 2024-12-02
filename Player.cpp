#include "Player.h"

void Player::Initialize() {

}

void Player::Update() {

}

void Player::Draw() {

}

void Player::MoveRight() {
	this->pos.x += this->speed;
}

void Player::MoveLeft() {
	this->pos.x -= this->speed;
}