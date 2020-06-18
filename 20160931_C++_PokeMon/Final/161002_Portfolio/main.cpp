#include "Map.h"
#include "Event.h"
#include "Battle.h"
#include "Opening.h"

void cursor(int n) // 커서 보이기 & 숨기기
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
	SetConsoleTitle(TEXT("Pokemon of Boy A")); // 타이틀 제목 변경
	system("mode con cols=120 lines=55");		// 콘솔 크기 조정
	cursor(0);	// 커서 표시 삭제
	Map mp_House;	// 집맵 객체 생성
	Opening op;		// 오프닝 객체 생성

	getch(); Sleep(500);
	op.gameStart();	// 오프닝 출력
	mp_House.houseMap(); // 집맵 출력
	system("cls");
}