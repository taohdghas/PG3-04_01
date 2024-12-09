#pragma once
#include "IScene.h"

class Clear:public IScene
{
public:
	void Initialize() override;
	void Update() override;
	void Draw() override;

};

