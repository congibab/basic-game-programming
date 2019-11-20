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
	printf("%s", str[ss].c_str());
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
	if (_kbhit())	//���͂�����܂ŁA�����ɂ͓���Ȃ�
	{
		/*���͏���*/
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
	str[0] = "�o�g�����n�߂܂���";
	str[1] = "�v���C���[�I��";
	str[2] = "�v���C���[�U��";
	str[3] = "�G�̍U��";
	str[4] = "�o�g���I��";
}

