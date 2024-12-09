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
	void MoveRight();
	void MoveLeft();
private:
	Vector3 pos = { 100,100 };
	float speed = 5.0f;
};

