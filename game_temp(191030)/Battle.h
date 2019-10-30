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

	void Init();	//‰Šú‰»
	void Main();	//ƒƒCƒ“
	void Draw();	//•`‰æ
	void Destroy();	//”jŠü
	void EnCount();
	void BattleBegin();

	ScenStatus GetSceneStatus() { return ss; };
	bool GetisBattle() { return isBattle; };

private:
	ScenStatus ss;

	bool isBattle;
};

