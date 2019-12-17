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
	int pokeSelect = 0; // ���ϸ� ���� ����
	char pokeRestore = 0; // ���ϸ� ħ�� �̺�Ʈ ȸ�� ����
	int pokeItem = 0; // ���ϸ� ������ �̺�Ʈ ����
public:
	static int pSelect; // ���ϸ� ���� ����
	static bool cWinCount; // ���� ���� �¸� ī��Ʈ
	static bool dWinCount; // ��״� ���� �¸� ī��Ʈ
	Event();
	~Event();

	void event_Doctor(); // ���ڻ� �̺�Ʈ
	void event_Bed(); // ħ�� �̺�Ʈ
	void event_ItemBox(); // ������ ȹ�� �̺�Ʈ 
	void event_gameEnd(); // ���� ���� �̺�Ʈ
	static void event_gameOver(); // ���� ���� �̺�Ʈ
	static void setpSelect(int input); // ���ڻ� �̺�Ʈ ��� ��� ����
};

