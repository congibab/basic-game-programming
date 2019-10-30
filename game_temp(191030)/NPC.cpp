#include"stdafx.h"
#include"NPC.h"

NPC::NPC()
{

}

NPC::~NPC()
{

}

void NPC::Init()
{

}

void NPC::Init(int talk, int name)
{
	role_no = Talk;
	talk_no = talk;
	talk_str = talk_list[talk];
	name_no = name;
	name_str = name_list[name];
}

void NPC::Main()
{

}

void NPC::Draw()
{
	printf("%s", icon_list[name_no].c_str());
}

void NPC::Destroy()
{

}