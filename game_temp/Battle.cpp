#include "stdafx.h"
#include "Battle.h"


Battle::Battle()
{
}


Battle::~Battle()
{
}

void Battle::Init()
{
	isBattle = false;
}

void Battle::Main()
{
	Input();
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
	if (_kbhit())	//“ü—Í‚ª‚ ‚é‚Ü‚ÅAˆ—‚É‚Í“ü‚ç‚È‚¢
	{
		/*“ü—Íˆ—*/
		switch (_getch())
		{
		case 32:
			isBattle = false;
			break;
		}
	}
}

