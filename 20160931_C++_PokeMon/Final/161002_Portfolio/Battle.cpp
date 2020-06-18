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
			cout << "\t\tCoil : L 1" << endl;
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
			cout << "\t  ,=x,      ,;.,;,;=x+-. \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "\tChamander : L " << pLevel << endl;
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
			cout << "\t\tCoil : L 1" << endl;
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
			cout << "\t   ¥ø+--o®o0$Ø øo--,$°   \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "\tSquirtle : L " << pLevel << endl;
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
			cout << "\t\tCoil : L 1" << endl;
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
			cout << "\t  -- .#.  +;              ,-=;     \t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "\tPicachu : L " << pLevel << endl;
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
		cout << "\t│  Battle Menu" << "                              │" << "  │ Item                           │" << endl;
		cout << "\t│  1. Attack   2. Skill   3.Item   4.Run away     │" << "  │  1. Potion : " << potion << "   " << "2. Hub : " << hub << " " << "   │" << endl;
		cout << "\t└──────────────────────┘" << "  └─────────────────┘" << endl << "\t ◎ Select the menu : ";
		cin >> select; // 전투 메뉴 선택
		srand(time(NULL));

		switch (select) // 전투 메뉴 선택 스위치문
		{
		case 1:// 일반 공격 선택
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
			if (Event::pSelect == 1)
			{
				cout << endl << "\t - Tail attack of Charmander !!" << endl << "\t - "  << pAttack << " damage." << endl;
				Beep(500, 150);
				cHealth = cHealth - pAttack;
			}
			if (Event::pSelect == 2)
			{
				cout << endl << "\t - Attack of Squirtle !!" << endl << "\t - " << pAttack << " damage." << endl;
				cHealth = cHealth - pAttack;
				Beep(500, 150);
			}
			if (Event::pSelect == 3)
			{
				cout << endl << "\t - Scratch of Picachu!!" << endl << "\t - " << pAttack << " damage." << endl;
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
					cout << endl << "\t - Fire Breath!! " << endl << "\t - " << pPower << " damage." << endl;
					Beep(700, 150);
					cHealth = cHealth - pPower;
					pSkill = pSkill - 10;
				}
				else if (Event::pSelect == 2)
				{
					cout << endl << "\t - Hydro pump!! " << endl << "\t - " << pPower << " damage." << endl;
					Beep(700, 150);
					cHealth = cHealth - pPower;
					pSkill = pSkill - 10;
				}
				else if (Event::pSelect == 3)
				{
					cout << endl << "\t - Million Bolt Thunder!! " << endl << "\t - " << pPower << " damage." << endl;
					Beep(700, 150);
					cHealth = cHealth - pPower;
					pSkill = pSkill - 10;
				}
			}
			else
			{
				cout << "\t - Not enough mana.";
				continue;
			}
			break;

		case 3: // 아이템 사용 선택
			cout << "\t - 1.Potion    2. Hun    Select : ";
			cin >> itemSelect;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
			switch (itemSelect)
			{
			case 1: // 포션 선택
				if (potion > 0)
				{
					cout << "\t - 40 HP Healed." << endl;
					pHealth = pHealth + 40;
				}
				else
				{
					cout << "\t - Not enough potion." << endl;
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
					cout << "\t - 20 mana restore." << endl;
					pSkill = pSkill + 20;
				}
				else
				{
					cout << "\t - Not enough hub." << endl;
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
			cout << "\t - Boy A is ran away" << endl;
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
			cout << endl << "\t - Attack of Coil!! " << endl << "\t - " << cAttack << " damage." << endl;
			Beep(500, 150);
			Sleep(2000);
			pHealth = pHealth - cAttack;
			break;
		case 2: // 코일 스킬 공격
			cout << endl << "\t - Thunder Attack of Coil!!" << endl << "\t - " << cPower << " damage." << endl;
			Beep(700, 150);
			pHealth = pHealth - cPower;
			Sleep(2000);
			break;
		}

		if (pHealth <= 0) // 패배 게임오버 이벤트
		{
			cout << "\t ◎ Boy A is defeated." << endl;
			count = 0;
			Sleep(2000);
			Event::event_gameOver();
		}
		else if (cHealth <= 0) // 승리 이벤트
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << endl << "\t ◎ Boy A Win." << endl;
			cout << "\t  - Level up!! HP, MP, atk, skill atk increase!!" << endl;
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
			cout << "\t\tDiglet : L 2" << endl;
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
			cout << "\t  ,=x,      ,;.,;,;=x+-. \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "\tChamander : L " << pLevel << endl;
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
			cout << "\t\ttDiglet : L 2" << endl;
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
			cout << "\t   ¥ø+--o®o0$Ø øo--,$°   \t\t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "\tSqirtle : L " << pLevel << endl;
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
			cout << "\t\ttDiglet : L 2" << endl;
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
			cout << "\t  -- .#.  +;              ,-=;     \t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "\tPicachu : L " << pLevel << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			cout << "\t.-+++=-  x          .;=-     #=    \t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "│ HP : " << pHealth << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			cout << "\t+#xx+, ;##==-,.      .,.  .-+      \t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "│ MP : " << pSkill << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			cout << "\t  .X## xx  .,==-;          ,+xx=   \t\t\t\t"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << "└────────->" << endl;
		}


		cout << endl << endl;
		cout << "\t┌──────────────────────┐" << "  ┌─────────────────┐" << endl;
		cout << "\t│  Battle Menu" << "                              │" << "  │ Item                           │" << endl;
		cout << "\t│  1. Attack   2. Skill   3.Item   4.Run away     │" << "  │  1. Potion : " << potion << "   " << "2. Hub : " << hub << " " << "   │" << endl;
		cout << "\t└──────────────────────┘" << "  └─────────────────┘" << endl << "\t ◎ Select the menu : ";
		cin >> select;
		srand(time(NULL));

		switch (select)
		{
		case 1:// 공격 선택
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);

			if (Event::pSelect == 1)
			{
				cout << endl << "\t - Tail attack of Charmander !!" << endl << "\t - " << pAttack << " damage." << endl;
				Beep(500, 150);
				dHealth = dHealth - pAttack;
			}
			if (Event::pSelect == 2)
			{
				cout << endl << "\t - Attack of Squirtle !!" << endl << "\t - " << pAttack << " damage." << endl;
				dHealth = dHealth - pAttack;
				Beep(500, 150);
			}
			if (Event::pSelect == 3)
			{
				cout << endl << "\t - Scratch of Picachu!!" << endl << "\t - " << pAttack << " damage." << endl;
				dHealth = dHealth - pAttack;
				Beep(500, 150);
			}
			break;
		case 2:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
			if (pSkill > 9)
			{
				if (Event::pSelect == 1)
				{
					cout << endl << "\t - Fire Breath!! " << endl << "\t - " << pPower << " damage." << endl;
					Beep(700, 150);
					dHealth = dHealth - pPower;
					pSkill = pSkill - 10;
				}
				else if (Event::pSelect == 2)
				{
					cout << endl << "\t - Hydro pump!! " << endl << "\t - " << pPower << " damage." << endl;
					Beep(700, 150);
					dHealth = dHealth - pPower;
					pSkill = pSkill - 10;
				}
				else if (Event::pSelect == 3)
				{
					cout << endl << "\t - Million Bolt Thunder!! " << endl << "\t - " << pPower << " damage." << endl;
					Beep(700, 150);
					dHealth = dHealth - pPower;
					pSkill = pSkill - 10;
				}
			}
			else
			{
				cout << "\t - Not enough mana.";
				continue;
			}
			break;

		case 3:
			cout << "\t - 1.Potion    2. Hub    Select : ";
			cin >> itemSelect;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
			switch (itemSelect)
			{
			case 1:
				if (potion > 0)
				{
					cout << "\t - 40 HP healed." << endl;
					pHealth = pHealth + 40;
				}
				else
				{
					cout << "\t - Not enough potion." << endl;
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
					cout << "\t - 20 Mana restored." << endl;
					pSkill = pSkill + 20;
				}
				else
				{
					cout << "\t - Not enough hub." << endl;
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
			cout << "\t - Player ran away" << endl;
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
			cout << endl << "\t - Headbutt of diglet!! " << endl << "\t - " << dAttack << " damage." << endl;
			Beep(500, 150);
			Sleep(2000);
			pHealth = pHealth - dAttack;
			break;
		case 2:
			cout << endl << "\t - Skill attack of diglet!!" << endl << "\t - " << dPower << " damage." << endl;
			Beep(700, 150);
			pHealth = pHealth - dPower;
			Sleep(2000);
			break;
		}

		if (pHealth <= 0)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\t ◎ Boy A is defeated. His adventure is ended" << endl;
			count = 0;
			Sleep(2000);
			Event::event_gameOver();
			exit(0);
		}
		else if (dHealth <= 0)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << endl << "\t ◎ Boy A win." << endl;
			cout << "\t  - Level up!! HP, MP, atk, skill atk increase!!" << endl;
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