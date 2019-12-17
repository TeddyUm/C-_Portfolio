#pragma once
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>
#include <conio.h>
#include <vector>
#include "Battle.h"
#include "stdlib.h"

using namespace std;

class Event
{
private:
	int pokeSelect = 0; // 포켓몬 선택 변수
	char pokeRestore = 0; // 포켓몬 침대 이벤트 회복 변수
	int pokeItem = 0; // 포켓몬 아이템 이벤트 변수
public:
	static int pSelect; // 포켓몬 선택 변수
	static bool cWinCount; // 코일 전투 승리 카운트
	static bool dWinCount; // 디그다 전투 승리 카운트
	Event();
	~Event();

	void event_Doctor(); // 오박사 이벤트
	void event_Bed(); // 침대 이벤트
	void event_ItemBox(); // 아이템 획득 이벤트 
	void event_gameEnd(); // 게임 종료 이벤트
	static void event_gameOver(); // 게임 오버 이벤트
	static void setpSelect(int input); // 오박사 이벤트 대사 출력 변수
};

