#include <random>
#include <conio.h>

#pragma once
enum ScenStatus
{
	Begin,
	PlayerSelect,
	PlaterAttack,
	EnemyAttack,
	end
};

class Battle
{
public:
	Battle();
	~Battle();

	void Init();	//������
	void Main();	//���C��
	void Draw();	//�`��
	void Destroy();	//�j��
	void EnCount();
	void BattleBegin();
	void Input();

	ScenStatus GetSceneStatus() { return ss; };
	bool GetisBattle() { return isBattle; };
	//void SetisBattle(bool flag) { isBattle = flag; };
	int GetRandom() { return Random; };

private:
	ScenStatus ss;

	bool isBattle;
	int Random;
};

