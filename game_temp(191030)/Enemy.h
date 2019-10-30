#pragma once
#include <string>
#include "Templ.h"
class Enemy
{
public:
	Enemy();
	~Enemy();

	void Init();	//������
	void Init(std::string na, int Hp, int Mp, int Attack, int Defense, int Agility);
	void Main();	//���C��
	void Draw();	//�`��
	void Destroy();	//�j��

	Status GetStatus() { return Status; }
	std::string GetName() { return name; }

private:
	Status Status;
	std::string name;
};

