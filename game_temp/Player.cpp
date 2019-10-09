#include"stdafx.h"
#include"Player.h"

Player::Player()
{

}

Player::~Player()
{

}

void Player::Init()
{
	PlayerPosX = 1;
	PlayerPosY = 1;
	PlayerVec[0] = 1;
	PlayerVec[1] = 0;
	move_val = 0;

	checkFlag = false;
	FowSta = ' ';
}

void Player::Main()
{
	Input();
}

void Player::Draw()
{
	if (checkFlag == true) 
	{
		printf("/------------------------------------------\n");
		printf("ñ⁄ÇÃÇ‹Ç¶ÇÕ%sÇ≈Ç∑ÅB \n", FowSta.c_str());
		printf("/------------------------------------------\n");


	}
}


void Player::Destroy()
{

}

void Player::Input()
{
	if (_kbhit())	//ì¸óÕÇ™Ç†ÇÈÇ‹Ç≈ÅAèàóùÇ…ÇÕì¸ÇÁÇ»Ç¢
	{
		/*ì¸óÕèàóù*/
		switch (_getch())
		{
		case 'w':
			if (checkFlag) break;
			move_val = 1;
			PlayerVec[0] = -1;
			PlayerVec[1] = 0;
			break;
		case 's':
			if (checkFlag) break;
			move_val = 1;
			PlayerVec[0] = 1;
			PlayerVec[1] = 0;
			break;
		case 'a':
			if (checkFlag) break;
			move_val = 1;
			PlayerVec[0] = 0;
			PlayerVec[1] = -1;
			break;
		case 'd':
			if (checkFlag) break;
			move_val = 1;
			PlayerVec[0] = 0;
			PlayerVec[1] = 1;
			break;
		case 'f':
			break;
		case 'e':
			if (checkFlag) checkFlag = false;
			else checkFlag = true;
			break;
		}
	}
}

void Player::MoveCheck(std::string str)
{
	if (move_val)
	{
		if (str != "Å°" && str != "ïÛ")
		{
		PlayerPosY += PlayerVec[0];
		PlayerPosX += PlayerVec[1];
		}
		move_val = 0;
	}
}

void Player::FowCheck(std::string str)
{
	if (checkFlag) 
	{
		FowSta = str;
	}
	
}
