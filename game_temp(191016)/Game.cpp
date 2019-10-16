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
	player.Main();
	map.Main();

	player.MoveCheck(map.GetMap(player.GetPlayerPosY()+player.GetPlayerVecY()
								,player.GetPlayerPosX() + player.GetPlayerVecX()));
	player.FowCheck(map.GetSquare(player.GetPlayerPosY() + player.GetPlayerVecY()
		, player.GetPlayerPosX() + player.GetPlayerVecX()));
}


void Game::Draw()
{
	system("cls");	//画面クリア
	map.Draw(player.GetPlayerPosY(), player.GetPlayerPosX());
	player.Draw();
}

void Game::Destroy()
{
	player.Destroy();
	map.Destroy();
}

