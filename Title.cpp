#include "Title.h"
#include "Novice.h"


void Title::Initialize() {}

void Title::Update() {
	if (Novice::CheckHitKey(DIK_RETURN)) {
		sceneNo = STAGE;
	}
}

void Title::Draw() {
	Novice::ScreenPrintf(10, 10, "Title Scene");
	Novice::ScreenPrintf(10, 30, "Press ENTER");
}