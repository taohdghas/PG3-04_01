#include "GameManager.h"

GameManager::GameManager() {
	sceneArr_[TITLE] = std::make_unique<Title>();
	sceneArr_[STAGE] = std::make_unique<Stage>();
	sceneArr_[CLEAR] = std::make_unique<Clear>();

	preSceneNo_ = TITLE;
}

GameManager::~GameManager(){}

int GameManager::Run() {

}