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

	ScenStatus GetSceneStatus() { return ss; };
	bool GetisBattle() { return isBattle; };

private:
	ScenStatus ss;

	bool isBattle;
};

