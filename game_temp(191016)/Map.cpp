#include"stdafx.h"
#include"Map.h"

Map::Map()
{

}

Map::~Map()
{

}

void Map::Init()
{/*
	npcs[0].Init(0, 0);
	npcs[0].SetPosX(2);
	npcs[0].SetPosY(1);
	npcs[1].Init(1, 2);
	npcs[1].SetPosX(3);
	npcs[1].SetPosY(2);
	npcs[2].Init(2, 1);
	npcs[2].SetPosX(4);
	npcs[2].SetPosY(3);
*/
	mn = town1;
	for (int i = 0; i < MAX_map_x; i++)
	{
		for (int j = 0; j < MAX_map_y; j++)
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
				Npc temp_npc;
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
	for (int i = 0; i < MAX_map_y; i++)
	{
		//ここにマップの左辺の描画
		for (int j = 0; j < MAX_map_x; j++)
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
//
//PositionData Map::MapChange(int x, int y, int vec_x, int vec_y)
//{
//	PositionData pd;
//	
//
//	return pd;
//}