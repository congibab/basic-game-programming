#include "stdafx.h"
#include "Battle.h"
#include "Enemy.h"


Battle::Battle()
{
}


Battle::~Battle()
{
}

void Battle::Init()
{

	isBattle = true;
	ss = Begin;
	Message();
	
}

void Battle::Main()
{

	if (_kbhit())
	{
		if (_getch() == '\r') //key code enter input
		{
			if (ss != end)
			{
				ss = static_cast<ScenStatus>(ss + 1);
			}
			
			else
			{
				isBattle = false;
			}
		}
	}
	//Input();
	switch (ss)
	{
	case Begin:
		break;
	case PlayerSelect:
		
		break;
	case PlaterAttack:
		break;
	case EnemyAttack:
		break;
	case end:
		break;
	default:
		break;
	}
}

void Battle::Draw()
{
	std::string Output = "";
	switch (ss)
	{
	case Begin:
		Output = "バトルが始めました\n";
		break;
	case PlayerSelect:
		Output = "プレイヤー選択\n";
		break;
	case PlaterAttack:
		Output = "プレイヤー攻撃\n";
		break;
	case EnemyAttack:
		Output = "敵の攻撃\n";
		break;
	case end:
		Output = "バトル終了\n";
		break;
	default:
		break;
	}
	printf("%s", str[ss].c_str());
	printf("%s", Output.c_str());
}

void Battle::Destroy()
{
}





void Battle::EnCount()
{
	std::random_device rnd;
	Random = rnd() % 100;
	if (Random < 50 && Random >= 40)
	{
		isBattle = true;
		ss = Begin;
	}
}

void Battle::BattleBegin()
{
}

void Battle::Input()
{
	if (_kbhit())	//入力があるまで、処理には入らない
	{
		/*入力処理*/
		switch (_getch())
		{
		case 32:
			isBattle = false;
			break;
		}
	}
}

void Battle::Message()
{
	str[0] = "バトルが始めました\n";
	str[1] = "プレイヤー選択\n";
	str[2] = "プレイヤー攻撃\n";
	str[3] = "敵の攻撃\n";
	str[4] = "バトル終了\n";
}

