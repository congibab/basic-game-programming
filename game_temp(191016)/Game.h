#pragma once
#include<Windows.h>
#include<stdlib.h>
#include<conio.h>
#include<string>

#include"Map.h"
#include"Player.h"

/*ゲームクラス*/
class Game
{
public:
	Game();			//コンストラクタ
	~Game();		//デストラクタ
	void Init();	//初期化
	void Main();	//メイン
	void Draw();	//描画
	void Destroy();	//破棄
private:
	Player player;
	Map map;
};
