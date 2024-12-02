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

	int currentSceneNo_;//���݂̃V�[��
	int preSceneNo_;//�O�̃V�[��
public:
	GameManager();
	~GameManager();
	
	//�Q�[�����[�v�Ăяo��
	int Run();
};

