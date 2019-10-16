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
	npcs[0].SetPosX(2);
	npcs[0].SetPosY(2);
	npcs[1].Init(1, 2);
	npcs[1].SetPosX(3);
	npcs[1].SetPosY(3);
	npcs[2].Init(2, 1);
}

void Map::Main()
{

}

void Map::Draw()
{

}

void Map::Draw(int player_pos_y, int player_pos_x)
{
	int npc_count = 0;
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
			else if (map[i][j] == "N")
			{
				npcs[npc_count].Draw();
				npc_count++;
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

Square_data Map::GetSquare(int y, int x)
{
	Square_data square;

	square.square_str = map[y][x];
	if (square.square_str == "N")
	{
		for (int i = 0; i < 3; i++)
		{
			if (npcs[i].GetPosX() == x && npcs[i].GetPosY() == y)
			{
				square.content = npcs[i].GetTalk();
				square.name = npcs[i].GetName();
			}

		}
	}
	return square;
}