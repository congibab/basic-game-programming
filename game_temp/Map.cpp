#include"stdafx.h"
#include"Map.h"

Map::Map()
{

}

Map::~Map()
{

}

void Map::Init()
{
	npcs[0].Init(0, 0);
	npcs[1].Init(0, 1);
	npcs[2].Init(0, 2);
}

void Map::Main()
{

}

void Map::Draw()
{

}

void Map::Draw(int player_pos_y, int player_pos_x)
{
	int npc_Count = 0;
	/*�}�b�v�`��*/
	for (int i = 0; i < MAX_map_y; i++)
	{
		//�����Ƀ}�b�v�̍��ӂ̕`��
		for (int j = 0; j < MAX_map_x; j++)
		{
			/*�����Ƀv���C���[�̕`��̏�����ǉ�*/
			if (player_pos_y == i && player_pos_x == j)
			{
				printf("�o");
			}
			else if (map[i][j] == "NN")  
			{
				npcs[npc_Count].Draw();
				npc_Count++;
			}
			else
			{
				//������map�z��̊e�v�f�̕`��
				printf("%s", map[i][j].c_str());
			}
		}
		//�����Ƀ}�b�v�̉��s�̕`��
		printf("\n");
	}
}

void Map::Destroy()
{

}