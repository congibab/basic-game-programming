#include"stdafx.h"
#include"Game.h"

Game::Game()
{

}

Game::~Game()
{

}

void Game::Init()
{
	player.Init();
	map.Init();
}

void Game::Main()
{
	if (!battle.GetisBattle())
	{
		player.Main();
		map.Main();

		player.MoveCheck(map.GetMap(player.GetPlayerPosY() + player.GetPlayerVecY()
			, player.GetPlayerPosX() + player.GetPlayerVecX()));

		player.FowCheck(map.GetSquare(player.GetPlayerPosY() + player.GetPlayerVecY()
			, player.GetPlayerPosX() + player.GetPlayerVecX()));

		PositionData temp = map.MapChange(player.GetPlayerPosX(), player.GetPlayerPosY(), player.GetPlayerVecX(), player.GetPlayerPosY());
		if (temp.x != -1)
		{
			player.SetPosition(temp);
		}

		if (_kbhit()) // Skip
		{
			if (_getch() == 32) //32 = SpaceBar
			{
				battle.Init();
				battle.BattleBegin();
				
			}
		}
	}
	
	else 
	{
		
		/*
		if (player.GetMove_val() != 0)
		{
			battle.EnCount();
		}
		*/
		battle.Main();

	}

	
	
	
}

void Game::Draw()
{
	system("cls");	//‰æ–ÊƒNƒŠƒA
	if (!battle.GetisBattle())
	{
		map.Draw(player.GetPlayerPosY(), player.GetPlayerPosX());
		player.Draw();
	}
	else
	{
		battle.Draw();
	}
	
}

void Game::Destroy()
{
	player.Destroy();
	map.Destroy();
}

