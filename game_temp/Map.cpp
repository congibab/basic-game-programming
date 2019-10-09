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
			else if (map[i][j] == "NN")  
			{
				npcs[npc_Count].Draw();
				npc_Count++;
			}
			else
			{
				//ここにmap配列の各要素の描画
				printf("%s", map[i][j].c_str());
			}
		}
		//ここにマップの改行の描画
		printf("\n");
	}
}

void Map::Destroy()
{

}