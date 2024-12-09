#include "GameManager.h"

GameManager::GameManager() {
	sceneArr_[TITLE] = std::make_unique<Title>();
	sceneArr_[STAGE] = std::make_unique<Stage>();
	sceneArr_[CLEAR] = std::make_unique<Clear>();

	preSceneNo_ = TITLE;
	currentSceneNo_ = TITLE;
	sceneArr_[currentSceneNo_]->Initialize();
}

GameManager::~GameManager(){}

int GameManager::Run() {
	if (preSceneNo_ != currentSceneNo_) {
		sceneArr_[currentSceneNo_]->Initialize();
		preSceneNo_ = currentSceneNo_;
	}
	sceneArr_[currentSceneNo_]->Update();
	sceneArr_[currentSceneNo_]->Draw();

	currentSceneNo_ = iscene_->GetSceneNo();
	return currentSceneNo_;
}