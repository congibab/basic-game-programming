#pragma once
#include<Windows.h>
#include<stdlib.h>
#include<conio.h>
#include<string>

#include"Map.h"
#include"Player.h"

/*�Q�[���N���X*/
class Game
{
public:
	Game();			//�R���X�g���N�^
	~Game();		//�f�X�g���N�^
	void Init();	//������
	void Main();	//���C��
	void Draw();	//�`��
	void Destroy();	//�j��
private:
	Player player;
	Map map;
};
