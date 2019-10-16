#include"stdafx.h"
#include"Npc.h"

Npc::Npc()
{

}

Npc::~Npc()
{

}

void Npc::Init()
{

}

void Npc::Init(int talk, int name)
{
	role_no = Talk;
	talk_no = talk;
	talk_str = talk_list[talk];
	name_no = name;
	name_str = name_list[name];
}

void Npc::Main()
{

}

void Npc::Draw()
{
	printf("%s", icon_list[name_no].c_str());
}

void Npc::Destroy()
{

}