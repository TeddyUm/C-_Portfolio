#pragma once
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>
#include <conio.h>
#include <vector>
#include "Event.h"

using namespace std;

class Battle
{
	//코일 스탯
	int cAttack = 8;
	int cPower = 12;
	int cHealth = 40;
	int cLevel = 1;

	//디그다 스탯
	int dAttack = 10;
	int dPower = 15;
	int dHealth = 50;
	int dLevel = 2;

	int select = 0;		// 전투 메뉴 선택 변수
	int eselect = 0;	// 적 전투메뉴 선택 변수
	int count = 1;		// 턴 계산 변수
	int itemSelect = 0; // 아이템 선택 변수

public:
	//파이리 스탯
	static int fAttack;
	static int fPower;
	static int fHealth;
	static int fSkill;

	//꼬부기 스탯
	static int wAttack;
	static int wPower;
	static int wHealth;
	static int wSkill;

	//피카츄 스탯
	static int gAttack;
	static int gPower;
	static int gHealth;
	static int gSkill;

	//플레이어 포켓몬 선택 능력치
	static int pHealth;
	static int pSkill;
	static int pPower;
	static int pAttack;
	static int pLevel;

	// 아이템
	static int potion;
	static int hub;

	// 아이템 및 스탯 셋 함수
	static void setpHealth(int input);
	static void setpSkill(int input);
	static void setpotion(int input);
	static void sethub(int input);
	static void setStat();
	static void pOutPut();

	// 전투 포켓몬 함수
	void battleCoil();
	void battleDigda();

	Battle();
	~Battle();
};

