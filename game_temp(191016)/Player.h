#pragma once
#include<Windows.h>
#include<conio.h>
#include<string>
#include"Map.h"

class Player
{
public:
	Player();
	~Player();

	void Init();
	void Main();
	void Draw();
	void Destroy();

	void Input();
	void MoveCheck(std::string str);
	void FowCheck(Square_data str);

	int GetPlayerPosX() { return PlayerPosX; }
	int GetPlayerPosY() { return PlayerPosY; }

	int GetPlayerVecY() { return PlayerVec[0]; }
	int GetPlayerVecX() { return PlayerVec[1]; }
private:
	int PlayerPosX;
	int PlayerPosY;
	int PlayerVec[2];
	int move_val;

	bool checkFlag;
	Square_data FowSta;
};

