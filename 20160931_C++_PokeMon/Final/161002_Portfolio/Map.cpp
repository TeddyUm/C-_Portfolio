#include "Map.h"



Map::Map()
{
}


Map::~Map()
{
}

void Map::houseMap()
{
	// 게임 시작 이벤트
	if (Event::pSelect == 0)
	{
		Map::houseMapDrawing(); // 맵 그림 그리기
		cout << "Grey Oak : Get up!! Satoshi has gone already. <Enter>"; // 이벤트문 출력
		Sleep(500);
		getch(); // 키 입력 시 다음텍스트 출력 (반복)
		Map::houseMapDrawing();
		cout << "Grey Oak : You said you will go faster than Satoshi =_=;; <Enter>";
		Sleep(500);
		getch();
		Map::houseMapDrawing();
		cout << "Grey Oak : If you want to be Pokemon master, come to me <Enter>";
		Sleep(500);
		getch();
	}
	Map::houseMapDrawing();
	
	while (bEsc) // 집 맵 반복 출력문
	{
		if (_kbhit()) // 키 입력 함수
		{
			move = _getch();
			downCount = 0;
			Sleep(50);

			switch (move) // 이동 화살표 스위치문
			{
			case LEFT: // 왼쪽 이동 (이하 이동문 반복 사용)
				for (int y = 0; y < 10; y++) // 2중 for문
				{
					for (int x = 0; x < 10; x++)
					{
						if (house[y][x] == 'c') // 캐릭터 선택 이프문
						{
							// 충돌오브젝트 체크 이동 방지
							if (house[y][x - 1] != '1' &&
								house[y][x - 1] != 'i' &&
								house[y][x - 1] != 'd' &&
								house[y][x - 1] != 'b' &&
								house[y][x - 1] != 'o')
							{
								temp = house[y][x];
								house[y][x] = house[y][x - 1];
								house[y][x - 1] = temp;
							}
							// 포켓몬이 없는 상태에서 필드 이동 방지
							else if (house[y][x - 1] == 'd')
							{
								if (Event::pSelect == 0)
								{
									cout << "Grey Oak : Outside is too dangerous without Pokemon." << endl;
									Sleep(1000);
									break;
								}
								cout << "Go to field." << endl;
								Sleep(1000);
								bEsc = 0;
								break;
							}
							// 오박사 일때 이벤트
							else if (house[y][x - 1] == 'o')
							{
								Event::event_Doctor();
								break;
							}
							// 침대 이벤트
							else if (house[y][x - 1] == 'b')
							{
								Event::event_Bed();
								break;
							}
							// 아이템 이벤트
							else if (house[y][x - 1] == 'i')
							{
								Event::event_ItemBox();
								break;
							}
							break;
	
						}
					}
				}
				break;
			case RIGHT:
				for (int y = 0; y < 10; y++)
				{
					for (int x = 0; x < 10; x++)
					{
						if (house[y][x] == 'c')
						{
							if (house[y][x + 1] != '1' &&
								house[y][x + 1] != 'i' &&
								house[y][x + 1] != 'd' &&
								house[y][x + 1] != 'b' &&
								house[y][x + 1] != 'o')
							{
								temp = house[y][x + 1];
								house[y][x + 1] = house[y][x];
								house[y][x] = temp;
							}
							else if (house[y][x + 1] == 'd')
							{
								if (Event::pSelect == 0)
								{
									cout << "Grey Oak : Outside is too dangerous without Pokemon." << endl;
									Sleep(1000);
									break;
								}
								cout << "Go to field." << endl;
								Sleep(1000);
								bEsc = 0;
								break;
							}
							else if (house[y][x + 1] == 'o')
							{
								Event::event_Doctor();
								break;
							}
							else if (house[y][x + 1] == 'b')
							{
								Event::event_Bed();
								break;
							}
							else if (house[y][x + 1] == 'i')
							{
								Event::event_ItemBox();
								break;
							}
							break;
						}
					}
				}
				break;
			case UP: // 위 이동
				for (int y = 0; y < 10; y++)
				{
					for (int x = 0; x < 10; x++)
					{
						if (house[y][x] == 'c')
						{
							if (house[y - 1][x] != '1' &&
								house[y - 1][x] != 'i' &&
								house[y - 1][x] != 'd' &&
								house[y - 1][x] != 'b' &&
								house[y - 1][x] != 'o')
							{
								temp = house[y - 1][x];
								house[y - 1][x] = house[y][x];
								house[y][x] = temp;
							}
							else if (house[y - 1][x] == 'd')
							{
								if (Event::pSelect == 0)
								{
									cout << "Grey Oak : Outside is too dangerous without Pokemon." << endl;
									Sleep(1000);
									break;
								}
								cout << "Go to field." << endl;
								Sleep(1000);
								bEsc = 0;
								break;
							}
							else if (house[y - 1][x] == 'o')
							{
								Event::event_Doctor();
								break;
							}
							else if (house[y - 1][x] == 'b')
							{
								Event::event_Bed();
								break;
							}
							else if (house[y - 1][x] == 'i')
							{
								Event::event_ItemBox();
								break;
							}
							break;
						}

					}
				}
				break;
			case DOWN: // 아래 이동
				for (int y = 0; y < 10; y++)
				{
					for (int x = 0; x < 10; x++)
					{
						if (house[y][x] == 'c' && downCount == 0)
						{
							if (house[y + 1][x] != '1' &&
								house[y + 1][x] != 'i' &&
								house[y + 1][x] != 'd' &&
								house[y + 1][x] != 'b' &&
								house[y + 1][x] != 'o')
							{
								temp = house[y + 1][x];
								house[y + 1][x] = house[y][x];
								house[y][x] = temp;
								downCount++;
							}

							else if (house[y + 1][x] == 'd')
							{
								if (Event::pSelect == 0)
								{
									cout << "Grey Oak : Outside is too dangerous without Pokemon." << endl;
									Sleep(1000);
									break;
								}
								cout << "Go to field." << endl;
								Sleep(1000);
								bEsc = 0;
								break;
							}
							else if (house[y + 1][x] == 'o')
							{
								Event::event_Doctor();
								break;
							}
							else if (house[y + 1][x] == 'b')
							{
								Event::event_Bed();
								break;
							}
							else if (house[y + 1][x] == 'i')
							{
								Event::event_ItemBox();
								break;
							}
							break;
						}
					}
				}
				break;
			default:
				break;
			}

			// 기본 화면 출력
			system("cls");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			cout << endl << endl <<
				"\t     ###   ##  #  # ###  # #   #  ##  #   #" << endl <<
				"\t     #  # #  # # #  #   #  ## ## #  # ##  #" << endl <<
				"\t     ###  #  # ##   ###    # # # #  # # # #" << endl <<
				"\t     #    #  # # #  #      #   # #  # #  ##" << endl <<
				"\t     #     ##  #  # ###    #   #  ##  #   #" << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

			cout << "\t┌──────────────────────┐" << endl <<
				"\t│                                            │" << endl <<
				"\t│                                            │" << endl <<
				"\t│                                            │" << endl;
			cout << "\t│            ";

			for (int y = 0; y < 10; y++)
			{
				for (int x = 0; x < 10; x++)
				{
					if (house[y][x] == '1') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); cout << "■"; }
					else if (house[y][x] == '0') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8); cout << ". "; }
					else if (house[y][x] == 'c') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "우"; }
					else if (house[y][x] == 'i') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); cout << "▣"; }
					else if (house[y][x] == 'd') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8); cout << "〓"; }
					else if (house[y][x] == 'b') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "□"; }
					else if (house[y][x] == 'o') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "옷"; }

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
					if ((x + 1) % 10 == 0)
					{
						if (y == 9)
						{
							cout << "            │" << endl;
						}
						else
						{
							cout << "            │" << endl << "\t│            ";
						}
					}
				}
			}
			
			cout << "\t│                                            │" << endl <<
				"\t│                                            │" << endl <<
				"\t│                                            │" << endl <<
				"\t└──────────────────────┘" << endl;

			// 포켓몬이 없을 때 정보 출력
			if (Event::pSelect == 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << "\t┌──────────────────────┐" << endl;
				cout << "\t│ Information : Don't have Pokemon.      │" << endl;
				cout << "\t│                                            │" << endl;
				cout << "\t│ Item : Potion " << Battle::potion << " , Hub " << Battle::hub <<
					"\t      │" << endl <<
					"\t└──────────────────────┘" << endl;
			}
			// 포켓몬이 있을 때 정보 출력
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << "\t┌──────────────────────┐" << endl;
				cout << "\t│ Information : "; pOutPut(); cout << "\t\t\t      │" << endl;
				cout << "\t│ Status : Level = " << Battle::pLevel << " , HP = " << Battle::pHealth << " , MP = " << Battle::pSkill << " │" << endl;
				cout << "\t│ Item : Potion " << Battle::potion << " , Hub " << Battle::hub <<
					"\t      │" << endl <<
					"\t└──────────────────────┘" << endl;
			}

			cout << "\t ◎ ";
		}
	} //while end

	Map::fieldMap();
}

void Map::fieldMap()
{
	system("cls");
	bEsc = 1;
	if (Event::cWinCount == 1) { field[2][7] = 'X'; } // 전투 승리 시 X로 변환
	if (Event::dWinCount == 1) { field[5][17] = 'X'; }
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

	cout << endl << endl <<
		"\t     ###   ##  #  # ###  # #   #  ##  #   #" << endl <<
		"\t     #  # #  # # #  #   #  ## ## #  # ##  #" << endl <<
		"\t     ###  #  # ##   ###    # # # #  # # # #" << endl <<
		"\t     #    #  # # #  #      #   # #  # #  ##" << endl <<
		"\t     #     ##  #  # ###    #   #  ##  #   #" << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

	cout << "\t┌──────────────────────┐" << endl <<
		"\t│                                            │" << endl;
	cout << "\t│  ";
	for (int y = 0; y < 15; y++) // 맵 모양 그리기
	{
		for (int x = 0; x < 20; x++)
		{
			if (field[y][x] == '1') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); cout << "▒"; }
			else if (field[y][x] == '0') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8); cout << ". "; }
			else if (field[y][x] == 'm') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); cout << "▲"; }
			else if (field[y][x] == 'l') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); cout << "~~"; }
			else if (field[y][x] == 'h') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); cout << "■"; }
			else if (field[y][x] == 'H') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8); cout << "□"; }
			else if (field[y][x] == 'c') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "우"; }
			else if (field[y][x] == 'D') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); cout << "◐"; }
			else if (field[y][x] == 'C') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); cout << "◐"; }
			else if (field[y][x] == 'X') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8); cout << "XX"; }

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

			if ((x + 1) % 20 == 0)
			{
				if (y == 14)
				{
					cout << "  │" << endl;
				}
				else
				{
					cout << "  │" << endl << "\t│  ";
				}
			}
		}
	}
	cout << "\t│                                            │" << endl <<
		"\t└──────────────────────┘" << endl;
	// 포켓몬이 없을 때 정보 출력
	if (Event::pSelect == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "\t┌──────────────────────┐" << endl;
		cout << "\t│ Information : Don't have Pokemon.      │" << endl;
		cout << "\t│                                            │" << endl;
		cout << "\t│ Item : Potion " << Battle::potion << " , Hub " << Battle::hub <<
			"\t      │" << endl <<
			"\t└──────────────────────┘" << endl;
	}
	// 포켓몬이 있을 때 정보 출력
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "\t┌──────────────────────┐" << endl;
		cout << "\t│ Information : "; pOutPut(); cout << "\t\t\t      │" << endl;
		cout << "\t│ Status : Level = " << Battle::pLevel << " , HP = " << Battle::pHealth << " , MP = " << Battle::pSkill << " │" << endl;
		cout << "\t│ Item : Potion " << Battle::potion << " , Hub " << Battle::hub <<
			"\t      │" << endl <<
			"\t└──────────────────────┘" << endl;
	}


	cout << "\t ◎ ";

	while (bEsc) // 이동 반복문 (집과 동일한 구조)
	{
		if (Event::cWinCount == 1) { field[2][7] = 'X'; }
		if (Event::dWinCount == 1) { field[5][17] = 'X'; }
		move = _getch();

		if (_kbhit())
		{
			move = _getch();
			downCount = 0;
			Sleep(50);

			switch (move)
			{
			case LEFT:
				for (int y = 0; y < 15; y++)
				{
					for (int x = 0; x < 20; x++)
					{
						if (field[y][x] == 'c')
						{
							if (field[y][x - 1] != '1' &&
								field[y][x - 1] != 'm' &&
								field[y][x - 1] != 'l' &&
								field[y][x - 1] != 'H' &&
								field[y][x - 1] != 'h' &&
								field[y][x - 1] != 'D' &&
								field[y][x - 1] != 'C' &&
								field[y][x - 1] != 'X')
							{
								temp = field[y][x];
								field[y][x] = field[y][x - 1];
								field[y][x - 1] = temp;
							}
							else if (field[y][x - 1] == 'C')
							{
								cout << "Go to battle." << endl;
								Sleep(1000);
								Battle::battleCoil();
								break;
							}
							else if (field[y][x - 1] == 'D')
							{
								cout << "Go to battle." << endl;
								Sleep(1000);
								Battle::battleDigda();
								break;
							}
							else if (field[y][x - 1] == 'H')
							{
								cout << "Go home." << endl;
								Sleep(1000);
								bEsc = 0;
								break;
							}
							break;
						}
					}
				}
				break;
			case RIGHT:
				for (int y = 0; y < 15; y++)
				{
					for (int x = 0; x < 20; x++)
					{
						if (field[y][x] == 'c')
						{
							if (field[y][x + 1] != '1' &&
								field[y][x + 1] != 'm' &&
								field[y][x + 1] != 'l' &&
								field[y][x + 1] != 'H' &&
								field[y][x + 1] != 'D' &&
								field[y][x + 1] != 'C' &&
								field[y][x + 1] != 'X')
							{
								temp = field[y][x + 1];
								field[y][x + 1] = field[y][x];
								field[y][x] = temp;
							}
							else if (field[y][x + 1] == 'C')
							{
								cout << "Go to battle." << endl;
								Sleep(1000);
								Battle::battleCoil();
								break;
							}
							else if (field[y][x + 1] == 'D')
							{
								cout << "Go to battle." << endl;
								Sleep(1000);
								Battle::battleDigda();
								break;
							}
							break;
						}
					}
				}
				break;
			case UP:
				for (int y = 0; y < 15; y++)
				{
					for (int x = 0; x < 20; x++)
					{
						if (field[y][x] == 'c')
						{
							if (field[y - 1][x] != '1' &&
								field[y - 1][x] != 'm' &&
								field[y - 1][x] != 'l' &&
								field[y - 1][x] != 'H' &&
								field[y - 1][x] != 'h' &&
								field[y - 1][x] != 'D' &&
								field[y - 1][x] != 'C' &&
								field[y - 1][x] != 'X')
							{
								temp = field[y - 1][x];
								field[y - 1][x] = field[y][x];
								field[y][x] = temp;
							}
							else if (field[y - 1][x] == 'C')
							{
								cout << "Go to battle." << endl;
								Sleep(1000);
								Battle::battleCoil();
								break;
							}
							else if (field[y - 1][x] == 'D')
							{
								cout << "Go to battle." << endl;
								Sleep(1000);
								Battle::battleDigda();
								break;
							}
							else if (field[y - 1][x] == 'H')
							{
								cout << "Go home." << endl;
								Sleep(1000);
								bEsc = 0;
								break;
							}
							break;
						}
					}
				}
				break;
			case DOWN:
				for (int y = 0; y < 15; y++)
				{
					for (int x = 0; x < 20; x++)
					{
						if (field[y][x] == 'c'&& downCount == 0)
						{
							if (field[y + 1][x] != '1' &&
								field[y + 1][x] != 'm' &&
								field[y + 1][x] != 'l' &&
								field[y + 1][x] != 'H' &&
								field[y + 1][x] != 'h' &&
								field[y + 1][x] != 'D' &&
								field[y + 1][x] != 'C' &&
								field[y + 1][x] != 'X')
							{
								temp = field[y + 1][x];
								field[y + 1][x] = field[y][x];
								field[y][x] = temp;
								downCount++;
							}
							else if (field[y + 1][x] == 'C')
							{
								cout << "Go to battle." << endl;
								Sleep(1000);
								Battle::battleCoil();
								break;
							}
							else if (field[y + 1][x] == 'D')
							{
								cout << "Go to battle." << endl;
								Sleep(1000);
								Battle::battleDigda();
								break;
							}
							break;
						}
					}
				}
				break;
			default:
				break;
			}

			system("cls");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			cout << endl << endl <<
				"\t     ###   ##  #  # ###  # #   #  ##  #   #" << endl <<
				"\t     #  # #  # # #  #   #  ## ## #  # ##  #" << endl <<
				"\t     ###  #  # ##   ###    # # # #  # # # #" << endl <<
				"\t     #    #  # # #  #      #   # #  # #  ##" << endl <<
				"\t     #     ##  #  # ###    #   #  ##  #   #" << endl << endl;

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

			cout << "\t┌──────────────────────┐" << endl <<
				"\t│                                            │" << endl;
			cout << "\t│  ";

			for (int y = 0; y < 15; y++)
			{
				for (int x = 0; x < 20; x++)
				{
					if (field[y][x] == '1') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); cout << "▒"; }
					else if (field[y][x] == '0') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8); cout << ". "; }
					else if (field[y][x] == 'm') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); cout << "▲"; }
					else if (field[y][x] == 'l') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); cout << "~~"; }
					else if (field[y][x] == 'h') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); cout << "■"; }
					else if (field[y][x] == 'H') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8); cout << "□"; }
					else if (field[y][x] == 'c') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "우"; }
					else if (field[y][x] == 'D') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); cout << "◐"; }
					else if (field[y][x] == 'C') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); cout << "◐"; }
					else if (field[y][x] == 'X') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8); cout << "XX"; }

					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
					if ((x + 1) % 20 == 0)
					{
						if (y == 14)
						{
							cout << "  │" << endl;
						}
						else
						{
							cout << "  │" << endl << "\t│  ";
						}
					}
				}
			}
			cout << "\t│                                            │" << endl <<
				"\t└──────────────────────┘" << endl;

			// 포켓몬이 없을 때 정보 출력
			if (Event::pSelect == 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << "\t┌──────────────────────┐" << endl;
				cout << "\t│ Information : Don't have Pokemon.      │" << endl;
				cout << "\t│                                            │" << endl;
				cout << "\t│ Item : Potion " << Battle::potion << " , Hub " << Battle::hub <<
					"\t      │" << endl <<
					"\t└──────────────────────┘" << endl;
			}
			// 포켓몬이 있을 때 정보 출력
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << "\t┌──────────────────────┐" << endl;
				cout << "\t│ Information : "; pOutPut(); cout << "\t\t\t      │" << endl;
				cout << "\t│ Status : Level = " << Battle::pLevel << " , HP = " << Battle::pHealth << " , MP = " << Battle::pSkill << " │" << endl;
				cout << "\t│ Item : Potion " << Battle::potion << " , Hub " << Battle::hub <<
					"\t      │" << endl <<
					"\t└──────────────────────┘" << endl;
			}

			cout << "\t ◎ ";

			if (Event::cWinCount == 1 && Event::dWinCount == 1)
			{
				cout << "Boy A : Now I've got Pokemon, and there's nowhere to go." << endl << "\t    I want to go home ";
			}
		}
	} //while end
	Map::houseMap();
}

void Map::pOutPut() // 포켓몬 이름 출력 함수
{
	if (Event::pSelect == 1) cout << "Charmander";
	else if (Event::pSelect == 2) cout << "Squirtle";
	else if (Event::pSelect == 3) cout << "Pikachu";
}

void Map::houseMapDrawing() // 집 맵 그리기 함수
{
	system("cls");
	bEsc = 1;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

	cout << endl << endl <<
		"\t     ###   ##  #  # ###  # #   #  ##  #   #" << endl <<
		"\t     #  # #  # # #  #   #  ## ## #  # ##  #" << endl <<
		"\t     ###  #  # ##   ###    # # # #  # # # #" << endl <<
		"\t     #    #  # # #  #      #   # #  # #  ##" << endl <<
		"\t     #     ##  #  # ###    #   #  ##  #   #" << endl << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

	cout << "\t┌──────────────────────┐" << endl <<
		"\t│                                            │" << endl <<
		"\t│                                            │" << endl <<
		"\t│                                            │" << endl;
	cout << "\t│            ";
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if (house[y][x] == '1') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); cout << "■"; }
			else if (house[y][x] == '0') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8); cout << ". "; }
			else if (house[y][x] == 'c') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "우"; }
			else if (house[y][x] == 'i') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); cout << "▣"; }
			else if (house[y][x] == 'd') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8); cout << "〓"; }
			else if (house[y][x] == 'b') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "□"; }
			else if (house[y][x] == 'o') { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "옷"; }

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			if ((x + 1) % 10 == 0)
			{
				if (y == 9)
				{
					cout << "            │" << endl;
				}
				else
				{
					cout << "            │" << endl << "\t│            ";
				}
			}
		}
	}
	cout << "\t│                                            │" << endl <<
		"\t│                                            │" << endl <<
		"\t│                                            │" << endl <<
		"\t└──────────────────────┘" << endl;

	// 포켓몬이 없을 때 정보 출력
	if (Event::pSelect == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "\t┌──────────────────────┐" << endl;
		cout << "\t│ Information : Don't have Pokemon.      │" << endl;
		cout << "\t│                                            │" << endl;
		cout << "\t│ Item : Potion " << Battle::potion << " , Hub " << Battle::hub <<
			"\t      │" << endl <<
			"\t└──────────────────────┘" << endl;
	}
	// 포켓몬이 있을 때 정보 출력
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "\t┌──────────────────────┐" << endl;
		cout << "\t│ Information : "; pOutPut(); cout << "\t\t\t      │" << endl;
		cout << "\t│ Status : Level = " << Battle::pLevel << " , HP = " << Battle::pHealth << " , MP = " << Battle::pSkill << " │" << endl;
		cout << "\t│ Item : Potion " << Battle::potion << " , Hub " << Battle::hub <<
			"\t      │" << endl <<
			"\t└──────────────────────┘" << endl;
	}
	cout << "\t ◎ ";
}