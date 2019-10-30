#include "stdafx.h"
#include "Enemy.h"


Enemy::Enemy()
{
}


Enemy::~Enemy()
{
}


void Enemy::Init()
{


}

void Enemy::Init(std::string na, int Hp, int Mp, int Attack, int Defense, int Agility)
{
	name = na;
	Status.Hp = Hp;
	Status.Mp = Mp;
	Status.Attack = Attack;
	Status.Defense = Defense;
	Status.Agility = Agility;

}

void Enemy::Main()
{
}

void Enemy::Draw()
{
}

void Enemy::Destroy()
{
}