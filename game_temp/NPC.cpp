#include"stdafx.h"
#include "NPC.h"

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
	name_no = name;

	talk_str = Talk_list[talk];
	name_str = name_list[name];
}

void NPC::Main()
{
}

void NPC::Draw()
{

}

void NPC::Destroy()
{
}
