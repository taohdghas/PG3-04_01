#pragma once
#include "IScene.h"

class Title:public IScene
{
public:
	void Initialize() override;
	void Update() override;
	void Draw() override;
};

