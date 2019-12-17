#include "Battle.h"


Battle::Battle()
{
}


Battle::~Battle()
{
}

void Battle::battleCoil() // 코일 포켓몬 전투 함수
{
	count = 1; // 턴 변수 선언
	cHealth = 40; // 반복 전투 시 코일 체력 초기화

	while (count == 1) // 플레이어 턴
	{
		count = 1;
		system("cls");
		
		if (Event::pSelect == 1) // 파이리 일때 전투 이미지 표시
		{
			cout << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\t\t코일 : L 1" << endl;
			cout << "\t│ HP : " << cHealth << endl;
			cout << "\t└────────->" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
			cout << "\t\t\t\t\t\t\t               *@#-             " << endl;
			cout << "\t\t\t\t\t\t\t              =#=+          :+: " << endl;
			cout << "\t\t\t\t\t\t\t               .%@-     :#%%@@@ " << endl;
			cout << "\t\t\t\t\t\t\t                *%%***-:@**-    " << endl;
			cout << "\t\t\t\t\t\t\t              ++=+***+*@#=*     " << endl;
			cout << "\t\t\t\t\t\t\t         :=+-++=**::-#=-@*#@@%@@" << endl;
			cout << "\t\t\t\t\t\t\t      @@%@@#*@==%    :#-@ ---.  " << endl;
			cout << "\t\t\t\t\t\t\t           ==#@=#:   +#@@       " << endl;
			cout << "\t\t\t\t\t\t\t           *#@#+%#%*%@@**       " << endl;
			cout << "\t\t\t\t\t\t\t      +@@**+-   @*=-:  		   " << endl << endl;

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << "\t   .,.,-        .,,,,.   \t\t\t\t\t" << endl;
			cout << "\t  ,=-=-        -;,..;==  \t\t\t\t\t" << endl;
			cout << "\t-,-,==        -=;,;;;,++ \t\t\t\t\t" << endl;
			cout << "\t==----.       =;,;;;,,+X \t\t\t\t\t" << endl;
			cout << "\t==-;;;=.     .=,;,;,,.,-+\t\t\t\t\t" << endl;
			cout << "\t,=,;=-;      --;,;,,;=+Xx\t\t\t\t\t" << endl;
			cout << "\t  ,=x,      ,;.,;,;=x+-. \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "\t파이리 : L " << pLevel << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << "\t  ;-x     .-;..,,,.-=    \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "│ HP : " << pHealth << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << "\t ,=,=    ,=,,,,,;=-.,;,  \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "│ MP : " << pSkill << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << "\t ;,.-.   +=;,,;-=,.+==x= \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "└────────->" << endl;
		}

		else if (Event::pSelect == 2)// 꼬부기 일때 전투 이미지 표시
		{
			cout << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\t\t코일 : L 1" << endl;
			cout << "\t│ HP : " << cHealth << endl;
			cout << "\t└────────->" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
			cout << "\t\t\t\t\t\t\t               *@#-             " << endl;
			cout << "\t\t\t\t\t\t\t              =#=+          :+: " << endl;
			cout << "\t\t\t\t\t\t\t               .%@-     :#%%@@@ " << endl;
			cout << "\t\t\t\t\t\t\t                *%%***-:@**-    " << endl;
			cout << "\t\t\t\t\t\t\t              ++=+***+*@#=*     " << endl;
			cout << "\t\t\t\t\t\t\t         :=+-++=**::-#=-@*#@@%@@" << endl;
			cout << "\t\t\t\t\t\t\t      @@%@@#*@==%    :#-@ ---.  " << endl;
			cout << "\t\t\t\t\t\t\t           ==#@=#:   +#@@       " << endl;
			cout << "\t\t\t\t\t\t\t           *#@#+%#%*%@@**       " << endl;
			cout << "\t\t\t\t\t\t\t      +@@**+-   @*=-:  		   " << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "\t           ,=ooo+.       \t\t\t\t\t" << endl;
			cout << "\t         .=..-+=+°+      \t\t\t\t\t" << endl;
			cout << "\t        ,o,,-=-=,°$0     \t\t\t\t\t" << endl;
			cout << "\t        oo-=+---,+Ø$     \t\t\t\t\t" << endl;
			cout << "\t      +Ø$0=,-°o°°--Ø° .  \t\t\t\t\t" << endl;
			cout << "\t    oØ0Ø$+oo0 +ØooØø     \t\t\t\t\t" << endl;
			cout << "\t   ¥ø+--o®o0$Ø øo--,$°   \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "\t꼬부기 : L " << pLevel << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "\t  $$.-=,0Øoo0$+$++ooØ°   \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "│ HP : " << pHealth << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "\t  ®Øøo0$®oo0oØ +®0++..   \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "│ MP : " << pSkill << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "\t  ,$®0o°0Ø0°o0-oø        \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "└────────->" << endl;
		}

		else if (Event::pSelect == 3)// 피카츄 일때 전투 이미지 표시
		{
			cout << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\t\t코일 : L 1" << endl;
			cout << "\t│ HP : " << cHealth << endl;
			cout << "\t└────────->" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
			cout << "\t\t\t\t\t\t\t              @*@#-             " << endl;
			cout << "\t\t\t\t\t\t\t              =#=+          :+: " << endl;
			cout << "\t\t\t\t\t\t\t               .%@-     :#%%@@@ " << endl;
			cout << "\t\t\t\t\t\t\t                *%%***-:@**-    " << endl;
			cout << "\t\t\t\t\t\t\t              ++=+***+*@#=*     " << endl;
			cout << "\t\t\t\t\t\t\t         :=+-++=**::-#=-@*#@@%@@" << endl;
			cout << "\t\t\t\t\t\t\t      @@%@@#*@==%    :#-@ ---.  " << endl;
			cout << "\t\t\t\t\t\t\t           ==#@=#:   +#@@       " << endl;
			cout << "\t\t\t\t\t\t\t           *#@#+%#%*%@@**       " << endl;
			cout << "\t\t\t\t\t\t\t      +@@@@+-   @*=-:  		   " << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			cout << "\t+#=-		                          \t\t\t\t" << endl;
			cout << "\t## ,=+,   ##=            .-X#.     \t\t\t\t" << endl;
			cout << "\t,=-   =+-  +#x=,       -+xX##      \t\t\t\t" << endl;
			cout << "\t   =+;  ,==, ;xX#++=-+=- =-.       \t\t\t\t" << endl;
			cout << "\t .==,    ,#- #=.   +#.   --        \t\t\t\t" << endl;
			cout << "\tX#,   Xx,  =x            xX=       \t\t\t\t" << endl;
			cout << "\t  -- .#.  +;              ,-=;     \t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "\t피카츄 : L " << pLevel << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			cout << "\t.-+++=-  x          .;=-     #=    \t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "│ HP : " << pHealth << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			cout << "\t+#xx+, ;##==-,.      .,.  .-+      \t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "│ MP : " << pSkill << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			cout << "\t  .X## xx  .,==-;          ,+xx=   \t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "└────────->" << endl;
		}			      

		// 전투메뉴 UI표시
		cout << endl << endl;
		cout << "\t┌──────────────────────┐" <<  "  ┌─────────────────┐" << endl;
		cout << "\t│ 전투메뉴 선택" << "                              │" << "  │ 아이템                           │" << endl;
		cout << "\t│  1. 공격   2. 스킬   3.아이템   4.도주     │" << "  │  1. 포션 : " << potion << "개   " << "2. 허브 : " << hub << "개" << "   │" << endl;
		cout << "\t└──────────────────────┘" << "  └─────────────────┘" << endl << "\t ◎ 메뉴를 선택해주세요 : ";
		cin >> select; // 전투 메뉴 선택
		srand(time(NULL));

		switch (select) // 전투 메뉴 선택 스위치문
		{
		case 1:// 일반 공격 선택
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
			if (Event::pSelect == 1)
			{
				cout << endl << "\t - 파이리의 꼬리치기 !!" << endl << "\t - "  << pAttack << "의 피해를 입혔다." << endl;
				Beep(500, 150);
				cHealth = cHealth - pAttack;
			}
			if (Event::pSelect == 2)
			{
				cout << endl << "\t - 꼬부기의 때리기 !!" << endl << "\t - " << pAttack << "의 피해를 입혔다." << endl;
				cHealth = cHealth - pAttack;
				Beep(500, 150);
			}
			if (Event::pSelect == 3)
			{
				cout << endl << "\t - 피카츄의 할퀴기 공격!!" << endl << "\t - " << pAttack << "의 피해를 입혔다." << endl;
				cHealth = cHealth - pAttack;
				Beep(500, 150);
			}

			break;
		case 2: // 스킬 공격 선택
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
			if (pSkill > 9)
			{
				if (Event::pSelect == 1)
				{
					cout << endl << "\t - 화염방사 스킬 작렬!! " << endl << "\t - " << pPower << "의 피해를 입혔다." << endl;
					Beep(700, 150);
					cHealth = cHealth - pPower;
					pSkill = pSkill - 10;
				}
				else if (Event::pSelect == 2)
				{
					cout << endl << "\t - 물대포 스킬 작렬!! " << endl << "\t - " << pPower << "의 피해를 입혔다." << endl;
					Beep(700, 150);
					cHealth = cHealth - pPower;
					pSkill = pSkill - 10;
				}
				else if (Event::pSelect == 3)
				{
					cout << endl << "\t - 백만볼트 스킬 작렬!! " << endl << "\t - " << pPower << "의 피해를 입혔다." << endl;
					Beep(700, 150);
					cHealth = cHealth - pPower;
					pSkill = pSkill - 10;
				}
			}
			else
			{
				cout << "\t - 마나가 없습니다. 다시 선택해주세요.";
				continue;
			}
			break;

		case 3: // 아이템 사용 선택
			cout << "\t - 1.포션    2. 허브    선택해주세요 : ";
			cin >> itemSelect;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
			switch (itemSelect)
			{
			case 1: // 포션 선택
				if (potion > 0)
				{
					cout << "\t - 40 체력이 회복되었습니다." << endl;
					pHealth = pHealth + 40;
				}
				else
				{
					cout << "\t - 포션이 부족합니다." << endl;
					Sleep(1000);
					continue;
				}

				if (Event::pSelect == 1)
				{
					if (pHealth > fHealth)
					{
						pHealth = fHealth;
					}
				}
				else if (Event::pSelect == 2)
				{
					if (pHealth > wHealth)
					{
						pHealth = wHealth;
					}
				}
				else if (Event::pSelect == 3)
				{
					if (pHealth > gHealth)
					{
						pHealth = gHealth;
					}
				}
				potion--;
				break;
			case 2: // 허브 선택
				if (hub > 0)
				{
					cout << "\t - 20 마나가 회복되었습니다." << endl;
					pSkill = pSkill + 20;
				}
				else
				{
					cout << "\t - 허브가 부족합니다." << endl;
					Sleep(1000);
					continue;
				}

				if (Event::pSelect == 1)
				{
					if (pSkill > fSkill)
					{
						pSkill = fSkill;
					}
				}
				else if (Event::pSelect == 2)
				{
					if (pSkill > wSkill)
					{
						pSkill = wSkill;
					}
				}
				else if (Event::pSelect == 3)
				{
					if (pSkill > gSkill)
					{
						pSkill = gSkill;
					}
				}
				hub--;
				break;
			}
			break;
		case 4: // 도주 선택
			cout << "\t - 소년 A는 도주하였습니다" << endl;
			count = 0;
			break;
		}

		if (count == 0) 
		{
			break;
		}

		Sleep(1000);

		// 적턴 시작
		eselect = rand() % 2 + 1; // 적의 공격 랜덤 선택
		switch (eselect) // 적 공격 스위치문
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		case 1: // 코일 일반 공격
			cout << endl << "\t - 코일의 때리기!! " << endl << "\t - " << cAttack << "의 피해를 입었다." << endl;
			Beep(500, 150);
			Sleep(2000);
			pHealth = pHealth - cAttack;
			break;
		case 2: // 코일 스킬 공격
			cout << endl << "\t - 코일의 전기코일 공격!!" << endl << "\t - " << cPower << "의 피해를 입었다." << endl;
			Beep(700, 150);
			pHealth = pHealth - cPower;
			Sleep(2000);
			break;
		}

		if (pHealth <= 0) // 패배 게임오버 이벤트
		{
			cout << "\t ◎ 소년 A가 졌습니다." << endl;
			count = 0;
			Sleep(2000);
			Event::event_gameOver();
		}
		else if (cHealth <= 0) // 승리 이벤트
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << endl << "\t ◎ 소년 A가 이겼습니다." << endl;
			cout << "\t  - 레벨 상승!! HP, MP, 공격력, 스킬 공격력 증가!!" << endl;
			pLevel++;
			fHealth += 5; fSkill += 10; fAttack += 2; fPower += 3;
			wHealth += 5; wSkill += 10; wAttack += 2; wPower += 3;
			gHealth += 5; gSkill += 10; gAttack += 2; gPower += 3;
			setStat();
			count = 0;
			Sleep(3000);
			getch();
			Event::cWinCount++; // 코일 승리 카운트
		}
	}
}

void Battle::battleDigda() // 디그다 전투 이하 코일 전투와 동일한 구조임
{
	count = 1;
	dHealth = 50;

	while (count == 1)
	{
		count = 1;
		system("cls");

		if (Event::pSelect == 1)
		{
			cout << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\t\t디그다 : L 2" << endl;
			cout << "\t│ HP : " << dHealth << endl;
			cout << "\t└────────->" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			cout << "\t\t\t\t\t\t\t                   ,;,,=-         " << endl;
			cout << "\t\t\t\t\t\t\t                =X#-x#+x#+        " << endl;
			cout << "\t\t\t\t\t\t\t               ,#X       X#.      " << endl;
			cout << "\t\t\t\t\t\t\t               ;#x  | |  x#,      " << endl;
			cout << "\t\t\t\t\t\t\t               -#x (   ) x#.      " << endl;
			cout << "\t\t\t\t\t\t\t               ;#        X#.      " << endl;
			cout << "\t\t\t\t\t\t\t               ;#+       X#.      " << endl;
			cout << "\t\t\t\t\t\t\t             ,##x        x#x.     " << endl;
			cout << "\t\t\t\t\t\t\t             ##x###=X#x=X###+x    " << endl;
			cout << "\t\t\t\t\t\t\t               - .-====-=x-,     " << endl << endl;

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << "\t   .,.,-        .,,,,.   \t\t\t\t\t" << endl;
			cout << "\t  ,=-=-        -;,..;==  \t\t\t\t\t" << endl;
			cout << "\t-,-,==        -=;,;;;,++ \t\t\t\t\t" << endl;
			cout << "\t==----.       =;,;;;,,+X \t\t\t\t\t" << endl;
			cout << "\t==-;;;=.     .=,;,;,,.,-+\t\t\t\t\t" << endl;
			cout << "\t,=,;=-;      --;,;,,;=+Xx\t\t\t\t\t" << endl;
			cout << "\t  ,=x,      ,;.,;,;=x+-. \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "\t파이리 : L " << pLevel << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << "\t  ;-x     .-;..,,,.-=    \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "│ HP : " << pHealth << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << "\t ,=,=    ,=,,,,,;=-.,;,  \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "│ MP : " << pSkill << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << "\t ;,.-.   +=;,,;-=,.+==x= \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "└────────->" << endl;
		}

		else if (Event::pSelect == 2)
		{
			cout << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\t\t디그다 : L 2" << endl;
			cout << "\t│ HP : " << dHealth << endl;
			cout << "\t└────────->" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			cout << "\t\t\t\t\t\t\t                   ,;,,=-         " << endl;
			cout << "\t\t\t\t\t\t\t                =X#-x#+x#+        " << endl;
			cout << "\t\t\t\t\t\t\t               ,#X       X#.      " << endl;
			cout << "\t\t\t\t\t\t\t               ;#x  | |  x#,      " << endl;
			cout << "\t\t\t\t\t\t\t               -#x (   ) x#.      " << endl;
			cout << "\t\t\t\t\t\t\t               ;#        X#.      " << endl;
			cout << "\t\t\t\t\t\t\t               ;#+       X#.      " << endl;
			cout << "\t\t\t\t\t\t\t             ,##x        x#x.     " << endl;
			cout << "\t\t\t\t\t\t\t             ##x###=X#x=X###+x    " << endl;
			cout << "\t\t\t\t\t\t\t               - .-====-=x-,     " << endl << endl;

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "\t           ,=ooo+.       \t\t\t\t\t" << endl;
			cout << "\t         .=..-+=+°+      \t\t\t\t\t" << endl;
			cout << "\t        ,o,,-=-=,°$0     \t\t\t\t\t" << endl;
			cout << "\t        oo-=+---,+Ø$     \t\t\t\t\t" << endl;
			cout << "\t      +Ø$0=,-°o°°--Ø° .  \t\t\t\t\t" << endl;
			cout << "\t    oØ0Ø$+oo0 +ØooØø     \t\t\t\t\t" << endl;
			cout << "\t   ¥ø+--o®o0$Ø øo--,$°   \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "\t꼬부기 : L " << pLevel << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "\t  $$.-=,0Øoo0$+$++ooØ°   \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "│ HP : " << pHealth << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "\t  ®Øøo0$®oo0oØ +®0++..   \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "│ MP : " << pSkill << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "\t  ,$®0o°0Ø0°o0-oø        \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "└────────->" << endl;
		}

		else if (Event::pSelect == 3)
		{
			cout << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\t\t디그다 : L 2" << endl;
			cout << "\t│ HP : " << dHealth << endl;
			cout << "\t└────────->" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			cout << "\t\t\t\t\t\t\t                   ,;,,=-         " << endl;
			cout << "\t\t\t\t\t\t\t                =X#-x#+x#+        " << endl;
			cout << "\t\t\t\t\t\t\t               ,#X       X#.      " << endl;
			cout << "\t\t\t\t\t\t\t               ;#x  | |  x#,      " << endl;
			cout << "\t\t\t\t\t\t\t               -#x (   ) x#.      " << endl;
			cout << "\t\t\t\t\t\t\t               ;#        X#.      " << endl;
			cout << "\t\t\t\t\t\t\t               ;#+       X#.      " << endl;
			cout << "\t\t\t\t\t\t\t             ,##x        x#x.     " << endl;
			cout << "\t\t\t\t\t\t\t             ##x###=X#x=X###+x    " << endl;
			cout << "\t\t\t\t\t\t\t               - .-====-=x-,     " << endl << endl;

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			cout << "\t+#=-		                          \t\t\t\t" << endl;
			cout << "\t## ,=+,   ##=            .-X#.     \t\t\t\t" << endl;
			cout << "\t,=-   =+-  +#x=,       -+xX##      \t\t\t\t" << endl;
			cout << "\t   =+;  ,==, ;xX#++=-+=- =-.       \t\t\t\t" << endl;
			cout << "\t .==,    ,#- #=.   +#.   --        \t\t\t\t" << endl;
			cout << "\tX#,   Xx,  =x            xX=       \t\t\t\t" << endl;
			cout << "\t  -- .#.  +;              ,-=;     \t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "\t피카츄 : L " << pLevel << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			cout << "\t.-+++=-  x          .;=-     #=    \t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "│ HP : " << pHealth << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			cout << "\t+#xx+, ;##==-,.      .,.  .-+      \t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "│ MP : " << pSkill << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			cout << "\t  .X## xx  .,==-;          ,+xx=   \t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "└────────->" << endl;
		}

		cout << endl << endl;
		cout << "\t┌──────────────────────┐" << "  ┌─────────────────┐" << endl;
		cout << "\t│ 전투메뉴 선택" << "                              │" << "  │ 아이템                           │" << endl;
		cout << "\t│  1. 공격   2. 스킬   3.아이템   4.도주     │" << "  │  1. 포션 : " << potion << "개   " << "2. 허브 : " << hub << "개" << "   │" << endl;
		cout << "\t└──────────────────────┘" << "  └─────────────────┘" << endl << "\t ◎ 메뉴를 선택해주세요 : ";
		cin >> select;
		srand(time(NULL));

		switch (select)
		{
		case 1:// 공격 선택
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
			if (Event::pSelect == 1)
			{
				cout << endl << "\t - 파이리의 꼬리치기 !!" << endl << "\t - " << pAttack << "의 피해를 입혔다." << endl;
				Beep(500, 150);
				dHealth = dHealth - pAttack;
			}
			if (Event::pSelect == 2)
			{
				cout << endl << "\t - 꼬부기의 때리기 !!" << endl << "\t - " << pAttack << "의 피해를 입혔다." << endl;
				Beep(500, 150);
				dHealth = dHealth - pAttack;
			}
			if (Event::pSelect == 3)
			{
				cout << endl << "\t - 피카츄의 할퀴기 공격!!" << endl << "\t - " << pAttack << "의 피해를 입혔다." << endl;
				Beep(500, 150);
				dHealth = dHealth - pAttack;
			}

			break;
		case 2:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
			if (pSkill > 9)
			{
				if (Event::pSelect == 1)
				{
					cout << endl << "\t - 화염방사 스킬 작렬!! " << endl << "\t - " << pPower << "의 피해를 입혔다." << endl;
					Beep(700, 150);
					dHealth = dHealth - pPower;
					pSkill = pSkill - 10;
				}
				else if (Event::pSelect == 2)
				{
					cout << endl << "\t - 물대포 스킬 작렬!! " << endl << "\t - " << pPower << "의 피해를 입혔다." << endl;
					Beep(700, 150);
					dHealth = dHealth - pPower;
					pSkill = pSkill - 10;
				}
				else if (Event::pSelect == 3)
				{
					cout << endl << "\t - 백만볼트 스킬 작렬!! " << endl << "\t - " << pPower << "의 피해를 입혔다." << endl;
					Beep(700, 150);
					dHealth = dHealth - pPower;
					pSkill = pSkill - 10;
				}
			}
			else
			{
				cout << "\t - 마나가 없습니다. 다시 선택해주세요.";
				continue;
			}
			break;

		case 3:
			cout << "\t - 1.포션    2. 허브    선택해주세요 : ";
			cin >> itemSelect;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
			switch (itemSelect)
			{
			case 1:
				if (potion > 0)
				{
					cout << "\t - 40 체력이 회복되었습니다." << endl;
					pHealth = pHealth + 40;
				}
				else
				{
					cout << "\t - 포션이 부족합니다." << endl;
					Sleep(1000);
					continue;
				}

				if (Event::pSelect == 1)
				{
					if (pHealth > fHealth)
					{
						pHealth = fHealth;
					}
				}
				else if (Event::pSelect == 2)
				{
					if (pHealth > wHealth)
					{
						pHealth = wHealth;
					}
				}
				else if (Event::pSelect == 3)
				{
					if (pHealth > gHealth)
					{
						pHealth = gHealth;
					}
				}
				potion--;
				break;
			case 2:
				if (hub > 0)
				{
					cout << "\t - 20 마나가 회복되었습니다." << endl;
					pSkill = pSkill + 20;
				}
				else
				{
					cout << "\t - 허브가 부족합니다." << endl;
					Sleep(1000);
					continue;
				}

				if (Event::pSelect == 1)
				{
					if (pSkill > fSkill)
					{
						pSkill = fSkill;
					}
				}
				else if (Event::pSelect == 2)
				{
					if (pSkill > wSkill)
					{
						pSkill = wSkill;
					}
				}
				else if (Event::pSelect == 3)
				{
					if (pSkill > gSkill)
					{
						pSkill = gSkill;
					}
				}
				hub--;
				break;
			}
			break;
		case 4:
			cout << "\t - 플레이어는 도주하였습니다" << endl;
			count = 0;
			break;
		}

		if (count == 0)
		{
			break;
		}

		Sleep(1000);

		eselect = rand() % 2 + 1;
		switch (eselect)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		case 1:
			cout << endl << "\t - 디그다의 박치기!! " << endl << "\t - " << dAttack << "의 피해를 입었다." << endl;
			Beep(500, 150);
			Sleep(2000);
			pHealth = pHealth - dAttack;
			break;
		case 2:
			cout << endl << "\t - 디그다의 땅파기 스킬 공격!!" << endl << "\t - " << dPower << "의 피해를 입었다." << endl;
			Beep(700, 150);
			pHealth = pHealth - dPower;
			Sleep(2000);
			break;
		}

		if (pHealth <= 0)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\t ◎ 소년 A가 졌습니다. 포켓몬 마스터의 꿈은 끝났습니다." << endl;
			count = 0;
			Sleep(2000);
			Event::event_gameOver();
			exit(0);
		}
		else if (dHealth <= 0)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << endl << "\t ◎ 소년 A가 이겼습니다." << endl;
			cout << "\t  - 레벨 상승!! HP, MP, 공격력, 스킬 공격력 증가!!" << endl;
			pLevel++;
			fHealth += 5; fSkill += 10; fAttack += 2; fPower += 3;
			wHealth += 5; wSkill += 10; wAttack += 2; wPower += 3;
			gHealth += 5; gSkill += 10; gAttack += 2; gPower += 3;
			setStat();
			count = 0;
			Sleep(3000);
			getch();
			Event::dWinCount++;
		}
	}
}

// 아군 포켓몬 스탯
int Battle::pHealth = 0;
int Battle::pSkill = 0;
int Battle::pPower = 0;
int Battle::pAttack = 0;
int Battle::potion = 0;
int Battle::hub = 0;

// 파이리
int Battle::fAttack = 10;
int Battle::fPower = 15;
int Battle::fHealth = 40;
int Battle::fSkill = 40;

//꼬부기
int Battle::wAttack = 8;
int Battle::wPower = 10;
int Battle::wHealth = 60;
int Battle::wSkill = 30;

//이상해씨
int Battle::gAttack = 6;
int Battle::gPower = 20;
int Battle::gHealth = 40;
int Battle::gSkill = 50;

//레벨 변수
int Battle::pLevel = 1;

//플레이어 체력 변수 설정
void Battle::setpHealth(int input)
{
	pHealth = input;
}

//플레이어 스킬 변수 설정
void Battle::setpSkill(int input)
{
	pSkill = input;
}

// 포션 변수 설정
void Battle::setpotion(int input)
{
	potion = input;
}

// 허브 변수 설정
void Battle::sethub(int input)
{
	hub = input;
}

// 선택한 포켓몬 스탯 초기화
void Battle::setStat()
{
	if (Event::pSelect == 1) // 파이리
	{
		pHealth = fHealth;
		pSkill = fSkill;
		pAttack = fAttack;
		pPower = fPower;
	}
	if (Event::pSelect == 2) // 꼬부기
	{
		pHealth = wHealth;
		pSkill = wSkill;
		pAttack = wAttack;
		pPower = wPower;
	}
	if (Event::pSelect == 3) // 피카츄
	{
		pHealth = gHealth;
		pSkill = gSkill;
		pAttack = gAttack;
		pPower = gPower;
	}
}