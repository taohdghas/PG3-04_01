#include <Novice.h>
#include "Player.h"
#include "command.h"
#include "InputHandle.h"

const char kWindowTitle[] = "LE2B_14_サノ_ハヤテ_タイトル";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	Player* player_;
	Icommand* iCommand_ = nullptr;
	InputHandle* inputHandle_ = nullptr;

	inputHandle_ = new InputHandle();

	inputHandle_->AssignMoveRightCommand2PressKeyD();
	inputHandle_->AssignMoveLeftCommand2PressKeyA();

	player_ = new Player();

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);
		/// ↓更新処理ここから
		///
		iCommand_ = inputHandle_->HandleInput();

		if (iCommand_) {
			iCommand_->Exec(*player_);
		}

		player_->Update();
		///
		/// ↑更新処理ここまで
		/// ↓描画処理ここから
		///
		player_->Draw();
		///
		/// ↑描画処理ここまで
		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}
	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
