#pragma once
#include <string>

enum e_role
{
	Talk
};

const std::string talk_list[] = {
	"Ç±ÇÒÇ…ÇøÇÕ\n",
	"ÇÊÇ§Ç±ÇªTECH CÇ÷\n",
	"Ç±Ç±Ç©ÇÁìåÇ…çsÇ≠Ç∆ÅAçÇìcînèÍâwÇ≈Ç∑ÅB\n"
};

const std::string name_list[] = {
	"ê∂ìkA",
	"çuétA",
	"ê∂ìkB",
	"çuétB"
};

const std::string icon_list[] = {
	"ê∂",
	"çu",
	"ê∂",
	"çu"
};

class Npc
{
public:
	Npc();
	~Npc();

	void Init();
	void Init(int talk, int name);
	void Main();
	void Draw();
	void Destroy();

	std::string GetRole() { return role_str; }
	std::string GetName() { return name_str; }

	

	int GetPosX() { return x; }
	int GetPosY() { return y; }
	void SetPosX(int posX) { x = posX; }
	void SetPosY(int posY) { y = posY; }

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


