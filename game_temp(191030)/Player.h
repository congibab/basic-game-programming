#pragma once
#include<Windows.h>
#include<conio.h>
#include<string>
#include"map.h"
#include"Templ.h"

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
	void FowCheck(Square_data data);

	int GetPlayerPosX() { return PlayerPosX; }
	int GetPlayerPosY() { return PlayerPosY; }

	int GetPlayerVecY() { return PlayerVec[0]; }
	int GetPlayerVecX() { return PlayerVec[1]; }

	void SetPosition(PositionData pd) {
		PlayerPosX = pd.x;
		PlayerPosY = pd.y;
		PlayerVec[0] = pd.vec_y;
		PlayerVec[1] = pd.vec_x;
	}
private:
	int PlayerPosX;
	int PlayerPosY;
	int PlayerVec[2];
	int move_val;

	bool checkFlag;
	Square_data FowSta;
	
	Status Status;
};

