#pragma once
#include <string>

enum e_role
{
	Talk
};

const std::string Talk_list[] = {
	"Ç±ÇÒÇ…ÇøÇÕ\n",
	"ÇÊÇ§Ç±Çª TECH\n",
	"Ç±Ç±ÇÕçÇìcînèÍâwÇ≈Ç∑. \n"
};

const std::string name_list[] = {
	"a",
	"b",
	"c"
};


class NPC
{
public:
	NPC();
	~NPC();

	void Init();
	void Init(int talk, int name);
	void Main();
	void Draw();
	void Destroy();

	std::string GetRole() { return role_str; }
	std::string GetName() { return name_str; }



private:
	std::string role_str;
	e_role role_no;
	std::string name_str;
	int name_no;
	std::string talk_str;
	int talk_no;

};