#include "Map.h"
#include "Event.h"
#include "Battle.h"
#include "Opening.h"

void cursor(int n) // Ŀ�� ���̱� & �����
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = n;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

void main()
{
	SetConsoleTitle(TEXT("�ҳ�A�� ���ϸ���")); // Ÿ��Ʋ ���� ����
	system("mode con cols=120 lines=55");		// �ܼ� ũ�� ����
	cursor(0);	// Ŀ�� ǥ�� ����
	Map mp_House;	// ���� ��ü ����
	Opening op;		// ������ ��ü ����

	getch(); Sleep(500);
	op.gameStart();	// ������ ���
	mp_House.houseMap(); // ���� ���
	system("cls");
}