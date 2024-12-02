#pragma once

struct Vector3 {
	float x, y, z;
};
class Player
{
public:
	void Initialize();

	void Update();

	void Draw();

public:
	//メンバ関数
	void MoveRight();
	void MoveLeft();
private:
	Vector3 pos;
	float speed = 5.0f;
};

