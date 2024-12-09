#include "Stage.h"
#include "Novice.h"

void Stage::Initialize() {
	playerX_ = 100;
	playerY_ = 360;
	bulletX_ = -10;
	bulletY_ = -10;
	bulletActive_ = false;
	enemyX_ = 200;
	enemyY_ = 360;
}

void Stage::Update() {

	if (Novice::CheckHitKey(DIK_W)) {
		playerY_ -= 5;
	}
	if (Novice::CheckHitKey(DIK_S)) {
		playerY_ += 5;
	}
	if (Novice::CheckHitKey(DIK_A)) {
		playerX_ -= 5;
	}
	if (Novice::CheckHitKey(DIK_D)) {
		playerX_ += 5;
	}

	if (Novice::CheckHitKey(DIK_SPACE) && !bulletActive_) {
		bulletActive_ = true;
		bulletX_ = playerX_ + 15;
		bulletY_ = playerY_;
	}
	if (bulletActive_) {
		bulletY_ -= 10;
		if (bulletY_ < 0) {
			bulletActive_ = false;
		}
	}
	if (bulletActive_ &&
		bulletX_ > enemyX_ && bulletX_ < enemyX_ + 50 &&
		bulletY_ > enemyY_ && bulletY_ < enemyY_ + 50) {
		sceneNo = CLEAR;
	}
}

void Stage::Draw() {
	Novice::DrawBox(playerX_, playerY_, 50, 50, 0.0f, WHITE, kFillModeSolid);
	if (bulletActive_) {
		Novice::DrawEllipse(bulletX_, bulletY_, 5, 5, 0.0f, RED, kFillModeSolid);
	}
	Novice::DrawBox(enemyX_, enemyY_, 50, 50, 0.0f, BLUE, kFillModeSolid);
}