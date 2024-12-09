#pragma once
#include "IScene.h"

class Stage:public IScene
{
public:
	void Initialize() override;
	void Update() override;
	void Draw() override;
private:
	int playerX_, playerY_;
	int bulletX_, bulletY_;
	bool bulletActive_;
	int enemyX_, enemyY_;
};

