#pragma once
#include <string>
#include "Templ.h"
class Enemy
{
public:
	Enemy();
	~Enemy();

	void Init();	//‰Šú‰»
	void Init(std::string na, int Hp, int Mp, int Attack, int Defense, int Agility);
	void Main();	//ƒƒCƒ“
	void Draw();	//•`‰æ
	void Destroy();	//”jŠü

	Status GetStatus() { return Status; }
	std::string GetName() { return name; }

private:
	Status Status;
	std::string name;
};

