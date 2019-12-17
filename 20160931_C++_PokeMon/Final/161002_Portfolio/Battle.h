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
	//���� ����
	int cAttack = 8;
	int cPower = 12;
	int cHealth = 40;
	int cLevel = 1;

	//��״� ����
	int dAttack = 10;
	int dPower = 15;
	int dHealth = 50;
	int dLevel = 2;

	int select = 0;		// ���� �޴� ���� ����
	int eselect = 0;	// �� �����޴� ���� ����
	int count = 1;		// �� ��� ����
	int itemSelect = 0; // ������ ���� ����

public:
	//���̸� ����
	static int fAttack;
	static int fPower;
	static int fHealth;
	static int fSkill;

	//���α� ����
	static int wAttack;
	static int wPower;
	static int wHealth;
	static int wSkill;

	//��ī�� ����
	static int gAttack;
	static int gPower;
	static int gHealth;
	static int gSkill;

	//�÷��̾� ���ϸ� ���� �ɷ�ġ
	static int pHealth;
	static int pSkill;
	static int pPower;
	static int pAttack;
	static int pLevel;

	// ������
	static int potion;
	static int hub;

	// ������ �� ���� �� �Լ�
	static void setpHealth(int input);
	static void setpSkill(int input);
	static void setpotion(int input);
	static void sethub(int input);
	static void setStat();
	static void pOutPut();

	// ���� ���ϸ� �Լ�
	void battleCoil();
	void battleDigda();

	Battle();
	~Battle();
};

