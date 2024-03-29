#pragma once
#include <string>

enum e_role
{
	Talk
};

const std::string talk_list[] = {
	"こんにちは\n",
	"ようこそTECH Cへ\n",
	"ここから東に行くと、高田馬場駅です。\n"
};

const std::string name_list[] = {
	"生徒A",
	"講師A",
	"生徒B",
	"講師B"
};

const std::string icon_list[] = {
	"生",
	"講",
	"生",
	"講"
};
class NPC
{
public:
	NPC();
	~NPC();

	void Init();
	void Init(int talk,int name);
	void Main();
	void Draw();
	void Destroy();

	std::string GetRole() { return role_str; }
	std::string GetName() { return name_str; }

	int GetPosX() { return x; }
	int GetPosY() { return y; }
	void SetPosX(int pos_x) { x = pos_x; }
	void SetPosY(int pos_y) { y = pos_y; }

	std::string GetTalk() { return talk_str; }
private:
	std::string role_str;
	e_role role_no;
	std::string name_str;
	int name_no;
	std::string talk_str;
	int talk_no;

	int x, y;
};


