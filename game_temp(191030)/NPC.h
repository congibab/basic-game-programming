#pragma once
#include <string>

enum e_role
{
	Talk
};

const std::string talk_list[] = {
	"‚±‚ñ‚É‚¿‚Í\n",
	"‚æ‚¤‚±‚»TECH C‚Ö\n",
	"‚±‚±‚©‚ç“Œ‚És‚­‚ÆA‚“c”nê‰w‚Å‚·B\n"
};

const std::string name_list[] = {
	"¶“kA",
	"utA",
	"¶“kB",
	"utB"
};

const std::string icon_list[] = {
	"¶",
	"u",
	"¶",
	"u"
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


