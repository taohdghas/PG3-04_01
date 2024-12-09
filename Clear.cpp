#include "Clear.h"
#include "Novice.h"

void Clear::Initialize() {

}

void Clear::Update() {
	if (Novice::CheckHitKey(DIK_SPACE)) {
		sceneNo = TITLE;
	}
}

void Clear::Draw() {
	Novice::ScreenPrintf(10, 10, "Clear Scene");
	Novice::ScreenPrintf(10, 30, "Press Space");
}