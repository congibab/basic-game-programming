// game_temp.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include<Windows.h>
#include<stdlib.h>
#include<conio.h>
#include<string>

#include"Game.h"

int main()
{
	Game game;

	game.Init();
	do {
		game.Main();

		game.Draw();
		Sleep(32);		//32ミリ秒待機
	} while (true);
	game.Destroy();
    return 0;
}



