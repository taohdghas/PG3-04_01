#pragma once
#include <memory>
#include "IScene.h"
#include "Title.h"
#include "Stage.h"
#include "Clear.h"

class GameManager
{
private:

	std::unique_ptr<IScene>sceneArr_[3];

	int currentSceneNo_;//現在のシーン
	int preSceneNo_;//前のシーン

	IScene* iscene_;
public:
	GameManager();
	~GameManager();

	//ゲームループ呼び出し
	int Run();
};

