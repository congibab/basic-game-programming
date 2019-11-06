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
	for (int i = 0; i < MAX_map_y; i++)
	{
		for (int j = 0; j < MAX_map_x; j++)
		{
			map[i][j] = map_default[mn][i][j];
		}
	}

	int npc_count = 0;
	for (int i = 0; i < MAX_map_y; i++)
	{
		for (int j = 0; j < MAX_map_x; j++)
		{
			if (map[i][j] == "N")
			{
				NPC temp_npc;
				temp_npc.Init(npc_count, npc_count);
				temp_npc.SetPosX(j);
				temp_npc.SetPosY(i);

				npcs.push_back(temp_npc);
				npc_count++;
				
			}
		}
	}
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
	/*マップ描画*/
	for (int i = player_pos_y -7; i <player_pos_y + 8; i++)
	{
		//ここにマップの左辺の描画
		for (int j = player_pos_x -7; j < player_pos_x + 8 ; j++)
		{
			/*ここにプレイヤーの描画の処理を追加*/
			if (player_pos_y == i && player_pos_x == j)
			{
				printf("Ｐ");
				
			}
			else if (map[i][j] == "N")
			{
				npcs[npc_count].Draw();
				npc_count++;
			}
			else
			{
				//ここにmap配列の各要素の描画
				printf("%s", map[i][j].substr(0,2).c_str());
			}
		}
		//ここにマップの改行の描画
		printf("\n");
	}
}

void Map::Destroy()
{

}

Square_data Map::GetSquare(int y, int x)
{
	Square_data square;	//戻り値用変数

	square.square_str = map[y][x];
	if (square.square_str == "N")
	{
		for (int i = 0; i < 3; i++)
		{
			if (npcs[i].GetPosX() == x && npcs[i].GetPosY() == y)
			{
				square.contents = npcs[i].GetTalk();
				square.name = npcs[i].GetName();
			}
		}
	}

	return square;
}

PositionData Map::MapChange(int x,int y,int vec_x,int vec_y)
{
	PositionData pd;
	std::string temp = map[y][x];
	Map_no no = mn;
	if (vec_x == 0 && vec_y == 0)
	{
		return pd;
	}
	if (temp.find("▼") != std::string::npos)
	{
		for (int i = 0; i < MapNum; i++)
		{
			if (no != (Map_no)i)
			{
				for (int j = 0; j < MAX_map_y; j++)
				{
					for (int k = 0; k < MAX_map_x; k++)
					{
						if (map_default[i][j][k] == temp)
						{
							mn = (Map_no)i;
							pd.x = k;
							pd.y = j;
							pd.vec_x = 0;
							pd.vec_y = 0;
						}
					}
				}
			}

		}
		Init();
	}
	return pd;
}