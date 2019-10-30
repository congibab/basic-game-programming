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
	
	PositionData temp = map.MapChange(player.GetPlayerPosX(), player.GetPlayerPosY(),player.GetPlayerVecX(),player.GetPlayerVecY());
	if (temp.x != -1)
	{
		player.SetPosition(temp);
	}
}

void Game::Draw()
{
	system("cls");	//‰æ–ÊƒNƒŠƒA
	map.Draw(player.GetPlayerPosY(),player.GetPlayerPosX());
	player.Draw();
}

void Game::Destroy()
{
	player.Destroy();
	map.Destroy();
}

