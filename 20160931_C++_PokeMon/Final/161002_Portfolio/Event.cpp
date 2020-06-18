#include "Event.h"

int Event::pSelect = 0; // �÷��̾� ���ϸ� ���� ����

void Event::setpSelect(int input) // ���ڻ� �̺�Ʈ ���ϸ� ���� �Լ�
{
	pSelect = input;
}

bool Event::cWinCount; // ���� ���� �¸� ī��Ʈ
bool Event::dWinCount; // ��״� ���� �¸� ī��Ʈ

Event::Event()
{
}


Event::~Event()
{
}

void Event::event_Doctor() // ���ڻ� �̺�Ʈ
{
	if (pokeSelect == 1 || pokeSelect == 2 || pokeSelect == 3) // �̹� ���ϸ��� ������ ���
	{
		cout << "Gary Oak : Be careful" << endl;
	}
	else // ���ϸ��� �������� ���� ���
	{
		while (1)
		{
			// ���ڻ� �̹��� ���
			system("cls");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << endl << endl;
			cout << "\t	               :+*==---------:                              " << endl;
			cout << "\t                 .. =#=  ====++++=-+#+-:                   	" << endl;
			cout << "\t                 :#@*.   .::       .. :#=                  	" << endl;
			cout << "\t                   =@+.:*###*=.%@+###= .@+                 	" << endl;
			cout << "\t                    +#@@   :=*@#+:::-#%+@=                 	" << endl;
			cout << "\t                     =@@@@%+---::=*@@@@%+.                 	" << endl;
			cout << "\t                     @=:#=%*#@=--%@=##+--@+                 	" << endl;
			cout << "\t                    ++@@   -#---+* ..*@%*:                 	" << endl;
			cout << "\t                      :*#     ==:::--==                    	" << endl;
			cout << "\t                       -#%==#**###+#+:                     	" << endl;
			cout << "\t                   =#**++*@@@@#*#%@@%#%%%=--               	" << endl;
			cout << "\t                 =@= :=. @%=#@*=+%@@@%-*#=:++-             	" << endl;
			cout << "\t           ..   =@%  .++:*@*+#@@@##@@+=+=   #@+            	" << endl;
			cout << "\t      :+++=%@@+-.  %.-=   *@#####%@@:   +:.*=.%%           	" << endl;
			cout << "\t     @%#@@#+%@@@-  @:.+:  *@#****#@@:  -= *@...#@          	" << endl;
			cout << "\t     .=@@+%%==#@%+#@. :*: +@%#%@@%@@: -*   =%  :*=         	" << endl;
			cout << "\t      +#.==+#*+*=*@#   .+.#@@@@@@@@@=:+    :@.  :@.        	" << endl;
			cout << "\t      -+*@-:**:@%:.+.    =@@@@@@@@@@%:     :@.   -%-       	" << endl;
			cout << "\t        :@@@*=+..==       *@@@@@@@@@-      :@- . :@+       	" << endl;
			cout << "\t          +*+*+**@@       *@@***%@@@-      -@- :*@:        	" << endl;
			cout << "\t             ::: -@=-=*+  #@++***+*@- .*+--+@@*#*.         	" << endl;
			cout << "\t                 +@   -#  #@+%+===+@- .#.  :@=             	" << endl;
			cout << "\t                 +@   -*  #@@@%++=*@= .*.  :@              	" << endl;
			cout << "\t                 *@.  -#  #@=*@#=+*@- .#   =@:             	" << endl;
			cout << "\t                 =@+:..   #@==@#+=*@-  =:.-#@.             	" << endl;
			cout << "\t                   =%#++++##=+@#=++%*+++*#*-               	" << endl;
			cout << "\t                    =@@*##+==+@#++++*##*#@#                	" << endl;
			cout << "\t                    .%@%#+=+*@ *@=+%@@%*@=                 	" << endl;
			cout << "\t                   =%#+=*@@@@@=+@%#+++*%@-                 	" << endl;
			cout << "\t                  :@*=-=+%@%#@+ :@@+--=*%%-                	" << endl;
			cout << "\t                    :--::..       .:-::::                    " << endl << endl << endl;

			cout << "\t�� Gary Oak : Forest is dangerous. Take a pokemon" << endl << endl;
			cout << "\t�� (Select) 1. Charmander, 2. Squirtle, 3. Picachu : ";

			// ���ϸ� ����
			cin >> pokeSelect;
			if (pokeSelect == 1) // ���̸�
			{
				cout << endl << "\t�� Gary Oak : It's so hot. Be careful." << endl;
				setpSelect(pokeSelect);
				break;
			}
			else if (pokeSelect == 2) // ���α�
			{
				cout << endl << "\t�� Gary Oak : It's so wet. Be careful" << endl;
				setpSelect(pokeSelect);
				break;
			}
			else if (pokeSelect == 3) // ��ī��
			{
				cout << endl << "\t�� Gary Oak : It's bad ass. Be careful." << endl;
				setpSelect(pokeSelect);
				break;
			}
			else // �ٸ� Ű �Է�
			{
				cout << endl << "\t�� Gary Oak : Select pokemon." << endl;
				Sleep(1000);
				continue;
			}
		}
		Battle::setStat(); // ������ ���ϸ��� ������ �÷��̾� �������� �ʱ�ȭ
	}
	Sleep(2000);
}
void Event::event_Bed() // ħ�� �̺�Ʈ ȣ��
{
	if (dWinCount == 1 && cWinCount == 1) { event_gameEnd(); } // ����, ��״� �¸� �� ���ӿ��� �Լ� ���
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

	// ħ�� �̹��� ���
	cout << endl << endl;
	cout << "\t                                         ,:;,,::,,,. . .            " << endl;
	cout << "\t                                       2HSrrXAssiiSS#S22XXXABXhh3   " << endl;
	cout << "\t                                      H&     :      i      ::   :@: " << endl;
	cout << "\t                                     .@             ;      .,    :@ " << endl;
	cout << "\t                                     AX  . .   . .       .,;.    ;@ " << endl;
	cout << "\t                                     @.  ..     .     .,:,:;     SM " << endl;
	cout << "\t                                    ,@  ..     . . . ..,,::r     AX " << endl;
	cout << "\t                                    H2  ... . . . . ..,,,;:2.    #s " << endl;
	cout << "\t                                    @   .......... ..,,,;;.S.    @, " << endl;
	cout << "\t                                    ;         . ....,..:i;.r.    @  " << endl;
	cout << "\t                          .:,,,,.,.. ..,.,.. . . . .   ,,:::,,.  @  " << endl;
	cout << "\t                         ..           . ..........,.,,,..     ..r@  " << endl;
	cout << "\t                       .                                ,;r,   :BM. " << endl;
	cout << "\t                  .                                   ....si;.  #hX " << endl;
	cout << "\t                                                 ....,.,,,,rrr, :As " << endl;
	cout << "\t              .   .                         ..,.,,,,,,,,:,..;sXH99M " << endl;
	cout << "\t           . . ................. . . ....,.:,,,,,,,,.,...:sGA9r. .@ " << endl;
	cout << "\t   .,                   . ......,,,.....,::,:,:,,.,. .;2AAX:      @ " << endl;
	cout << "\t  ,2@@MHh35Srr;:...                   ,:..::,,.,..,sXBAi.         @ " << endl;
	cout << "\t  . @@@@@@@@@@@@@@@@@@@MBh32X5s;;:,..;.::,.,,.,;3HB2;               " << endl;
	cout << "\t    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@; ,r,,s&MAs.                  " << endl;
	cout << "\t    @;.:rs2XAB@@@@@@@@@@@@@@@@@@@@@@@@@ .,rsX:                      " << endl;
	cout << "\t    @                ,:;rSX&H#@@@@@@@@@: ;:                         " << endl;
	cout << "\t   .@                                @i ::                          " << endl;
	cout << "\t   s@                                @s                             " << endl;
	cout << "\t   r#                                @h                             " << endl;
	cout << "\t                                     @H                             " << endl;
	cout << "\t                                     @@                             " << endl << endl;
			 
	cout << "\t�� Do you want to sleep? (Y/N) : ";
	cin >> pokeRestore; // ħ�� �̺�Ʈ ��뿩�� �Է�
	if (pokeRestore == 'Y' && pokeSelect == 0) // ħ�� �̺�Ʈ �� ü��ȸ��
	{
		cout << "\t�� Go to bed and sleep." << endl;
	}
	else if (pokeRestore == 'Y' && pokeSelect == 1) // �� ���ϸ� �� �̺�Ʈ ��� �޼���
	{
		cout << "\t�� Sleep with charmander. Health restored." << endl;
		Battle::pHealth = Battle::fHealth;
		Battle::pSkill = Battle::fSkill;
	}
	else if (pokeRestore == 'Y' && pokeSelect == 2)
	{
		cout << "\t�� Sleep with squirtle. Health restored." << endl;
		Battle::pHealth = Battle::wHealth;
		Battle::pSkill = Battle::wSkill;
	}
	else if (pokeRestore == 'Y' && pokeSelect == 3)
	{
		cout << "\t�� Sleep with picachu. Health restored." << endl;
		Battle::pHealth = Battle::gHealth;
		Battle::pSkill = Battle::gSkill;
	}
	else // ħ�� ��� �ź� �̺�Ʈ
	{
		cout << "\t�� Not a sleep." << endl;
	}
	Sleep(2000);
}
void Event::event_ItemBox() // ������ �̺�Ʈ �Լ� ���
{
	if (pokeItem == 0) // ������ �̺�Ʈ ������ �� �̺�Ʈ ����
	{
		// ������ ���� �̹��� ���
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		cout << endl << endl;
		cout << "\t          -+**#*###*###***+==---==-:..:..       " << endl;
		cout << "\t          %@%#*#*+=+=+*+++*###*********#*##*.   " << endl;
		cout << "\t          =@@@@@@@%#%###*#@@@%%%%####*+++***#   " << endl;
		cout << "\t           #@@@@@@@@@@@@@@@@@@@@@@@@@@+++++*#+  " << endl;
		cout << "\t           :@@@@@@@@@@@@@%%%%%@%@%@%@@#=*##+*#  " << endl;
		cout << "\t            #@@@@@@@@@%@@%#%%%%%%%%%%@#=+###+#. " << endl;
		cout << "\t            -@@%@@@@@@@@@@%%%%%%%%%%%%%+=*##*#: " << endl;
		cout << "\t             %@@%@@@@@%@@@%%%%%%%%%%%%%*=**#*#: " << endl;
		cout << "\t             =@@@%@@%%##########%%%%%#%#++##**: " << endl;
		cout << "\t              %@@@@@*########%######***#++*#*#  " << endl;
		cout << "\t              =@@%@%##%%%#%#%%##***++++**=#***  " << endl;
		cout << "\t               %%@@%%%%%########*********+*+*=  " << endl;
		cout << "\t              =#%#****#*******#*#*#*#*###*++#   " << endl;
		cout << "\t          :*%@#%%%#********#*********###%*+#=   " << endl;
		cout << "\t      .-#@@@@@%%%%%%##############**##***=#*    " << endl;
		cout << "\t   :+%@@@@@@%@#%%%#%%%#############%%%+==*+     " << endl;
		cout << "\t:*##%###%@@@@@@%@%%%%#############%#+==+*#.     " << endl;
		cout << "\t-#+*=====++++###%%%%%%%%%%%####%#*===+**##=     " << endl;
		cout << "\t.***###*++++=-======++***###%%#+===+****#*=     " << endl;
		cout << "\t #*+*###++#####*##*+++++===+++===********#-     " << endl;
		cout << "\t **+*###*=#########*+*%##*+=+++=********##-     " << endl;
		cout << "\t *++*#*#*+*#***#*##*=*#**#*+*++**#*******#-     " << endl;
		cout << "\t +*+*#*#*=*##*#***#*+*#*##*+*+++********##-     " << endl;
		cout << "\t =*++#*#*+*#*****##*=*##*#++++++*******#*@-     " << endl;
		cout << "\t -#++####+*##*###*#*+*#**#*=+++++******##-      " << endl;
		cout << "\t -##***#*+*###*#*###+*##*#+++*++***#*##=        " << endl;
		cout << "\t  +*#####*#*****#*##++####*+*+++*#*##=          " << endl;
		cout << "\t       :-=**######**+****#*+*++**##+            " << endl;
		cout << "\t              .:=+*##%%##*******#+.             " << endl;
		cout << "\t                     .:-=+*##%#*.               " << endl << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "\t�� Potion 1, Hub 1 acquire" << endl;
		pokeItem++; // ������ ȹ���ߴٴ� ǥ�� ����
		Battle::potion++; // �÷��̾� ���� �߰�
		Battle::hub++; // �÷��̾� ��� �߰�
	}
	else // �̹� ������ ȹ�� �� ���
	{
		cout << "You already took an Item" << endl;
	}

	Sleep(2000);
}

void Event::event_gameOver() // ���� ���� �̺�Ʈ
{
	// ���� ���� �̹���
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "	                                           ########                                               " << endl;
	cout << "                                        ####################                                         " << endl;
	cout << "                                    ########            #########                                    " << endl;
	cout << "                                 ######                       ######                                 " << endl;
	cout << "                               #####                             #####                               " << endl;
	cout << "                             ####                                   ####                             " << endl;
	cout << "                            ####                                      ####                           " << endl;
	cout << "                           ###                                         ####                          " << endl;
	cout << "                          ###                                            ###                         " << endl;
	cout << "                         ###                                              ###                        " << endl;
	cout << "                        ###                                                ###                       " << endl;
	cout << "                        ###                                                ###                       " << endl;
	cout << "                       ###                                                  ###                      " << endl;
	cout << "                       ###         #########              ########          ###    ########          " << endl;
	cout << "         ####          ##        #############         #############         ##  ###### #####        " << endl;
	cout << "      ###########     ###      ################       ################       ##  ##        ###       " << endl;
	cout << "    ####       ####   ###      #################     ##################      #####          ###      " << endl;
	cout << "    ##           ##   ###     ##################     ##################      #####          ###      " << endl;
	cout << "    ##           ##   ###     ###################    ##################      ## ##         #######   " << endl;
	cout << "    ###         ###    ##     ##################     ##################      ## ###            ####  " << endl;
	cout << "     ##        ####    ###     #################     #################      #######              ### " << endl;
	cout << "    ####       ###########      ###############       ###############       ###                   ## " << endl;
	cout << "   ###              #######      ############           ############       ###                    ## " << endl;
	cout << "  ###                   ###          #####                 #####          ###       ####         ### " << endl;
	cout << "  ##                     ###                                             ###    ##########      ###  " << endl;
	cout << "  ##          ######      ###                    ####                   #### ######     ##########   " << endl;
	cout << "  ###         ##########   ###                  ######                 ########           #####      " << endl;
	cout << "   #####    ####     ##########                ########               #####                          " << endl;
	cout << "     #########            #######               ######              ####                             " << endl;
	cout << "                              #####                #              ####                               " << endl;
	cout << "                                 ####                            ###                                 " << endl;
	cout << "                                  ###                            ###                                 " << endl;
	cout << "                             ########                            ########                #######     " << endl;
	cout << "      ######             #######  ###   ###   ###    ##    ##    ##   ########        ############   " << endl;
	cout << "    ##########       #######      ###   ###   ###   ###    ##    ##       ########   ###        ###  " << endl;
	cout << "  ####      ###   ######          ###   ###   ###   ###    ##    ##            ########          ##  " << endl;
	cout << " ###         ########            ####   ###   ###   ###    ##    ####              ###           ##  " << endl;
	cout << "###          ####            ########   ###   ###   ###    ##    ########                        ##  " << endl;
	cout << "###                      #######  ###   ###   ###    ##    ##    ##   ########                  ###  " << endl;
	cout << " ###                 #######       ###  ###    ##    ##    ##  ####       ########           #####   " << endl;
	cout << "  #####           ######            ##############################             #######        ####   " << endl;
	cout << "    ######        ###                  ########################                    ###          ##   " << endl;
	cout << "      ###          ###                                                             ###          ##   " << endl;
	cout << "      ###          ###                                                             ###         ###   " << endl;
	cout << "       ###        ###                                                               ###       ###    " << endl;
	cout << "        ###     ####                                                                 ###########     " << endl;
	cout << "         #########                                                                       ###         " << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "\t\t\t\t Boy A die. Be careful next time~ " << endl << endl << endl;
	Sleep(3000);
	// ���� ����
	exit(0);
}

void Event::event_gameEnd() // ����, ��״� �¸� �� ħ�� �̺�Ʈ ���� �� ����
{
	// ���� ���� �̹��� ���
	system("cls");
	cout << endl << endl << endl << "\t\t\tThere's no place to go. There's no more Pokemon. The developer's not good enough to develop it." << endl;
	Sleep(2000);
	cout << "\t\t\tAs expected, warm blankets are the best!!! If the developer makes more, we'll leave again.~ ��" << endl << endl << endl;
	Sleep(2000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "         	                                                             +ItII,            " << endl;   
	cout << "                                                             =BWMBIIMWBXXVV#+             " << endl;
	cout << "                                                          ;###i. :##:      .#i=+=         " << endl;
	cout << "                                               tB######R.B#I     .#        ##RBBW#W       " << endl;
	cout << "                                             B#Wt;..   I##                 i      W#      " << endl;
	cout << "                                           ,#W      .   #,        ===:,....  ..   .#R     " << endl;
	cout << "                                        ,=+#I  ..    .  :        :#############M    #W    " << endl;
	cout << "                                     ,M##W#I  ,                   ..      V###Y   , ,#    " << endl;
	cout << "                                    Y#Y.  #, ,.                          ###:    ,:  #.   " << endl;
	cout << "                                    #:    :, ..                        Y##Y     :,  R#    " << endl;
	cout << "                                   .#  .                              W##,     ,.;V##     " << endl;
	cout << "                                    #X        ...,,     ,::.        .###         :RWWB=   " << endl;
	cout << "                                     #i       .::;;:,:::::..       =##X              i##  " << endl;
	cout << "                                   ,MW#Y           .,..           V##;                 R# " << endl;
	cout << "                                   W#  :                         t#############X        W " << endl;
	cout << "                                    #+                           .VVVXRXXVVYYVR+      , , " << endl;
	cout << "                                    :#W.                  .,                        .,: . " << endl;
	cout << "                                    #X#;                  R##B;                         B " << endl;
	cout << "                                   V#     .:,. ,:,,,        iM##MI:    :,  :.     :#; R## " << endl;
	cout << "                                   X# ,    .,:==;::.           B####    :;;:.      ;#R:.  " << endl;
	cout << "                                   Y#          .,,         =W###Y+;,   ,::       .,  #;   " << endl;
	cout << "                                    #,:                 ;W###+        ,:,          , ;#   " << endl;
	cout << "                                    ###               W##M,                       .i, #i  " << endl;
	cout << "                              ;V##M##=               .###X=                     ,:tt  #=  " << endl;
	cout << "                            .##Bt.,#:                   ,X####Y.     .  .=;,:,  .+=  #M   " << endl;
	cout << "                            B#     ;           ##RI=;:      ;R#Y     ,;:;==:,   ,. t#V    " << endl;
	cout << "                           ,V#Y,,      .,      =++t###R                .         +##:     " << endl;
	cout << "                         =##VYX    ,:,:,:,,,      ##i                        :iM##t       " << endl;
	cout << "                        i#t                     W#I                      X##W##;          " << endl;
	cout << "                        #R           XRXV##=  Y##             .:;,:,      .   #           " << endl;
	cout << "                        ##   ,,,.,   Yi,M#t  ,##MW##Wt     ,::::,,,.       ., R#          " << endl;
	cout << "                      i#MX=   ,,:=:    +#        ,;+Yi      , ..          . : X#          " << endl;
	cout << "                      #V          ,,  =#                   ,:::;.        ,,: .#t          " << endl;
	cout << "                     .#M       ;:.    ##R###+       ..      .,;:.        ,=. #W           " << endl;
	cout << "                    ##t#,      =##+   =;,.         .,:. .V              .:  ##            " << endl;
	cout << "                   ;#         M#i                 .:=, .#R         t   .  t#B             " << endl;
	cout << "               ,,   #M        :=t;         :   .,;==..R#VXYi;     Y#   =X##=              " << endl;
	cout << "             ,W#M#  W#M .Y+             : .#R===itIVW#M  ;R####BM##XM###B;                " << endl;
	cout << "            ,#B :#i #   =#;      ,.  .,  .#R:MW###MBt        ;IVVt   :                    " << endl;
	cout << "             ##M#t  X#+  .      :; t###MW#V                                               " << endl;
	cout << "              :=    =#t i#YtW#MX:i##+ :+;                                                 " << endl;
	cout << "                    :#BW#RVVB#####X                                                       " << endl;
	cout << "                                                                                          " << endl;  
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	Sleep(3000);
	getch();
	system("cls");         
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        
	cout << endl << endl << endl;
	cout << "    ##############   ####                                         ####                              " << endl;
	cout << "    ###############  #####                                        #####                             " << endl;
	cout << "         #####       ####                                         #####                             " << endl;
	cout << "         ####        ####  #####       #######     ####  ####     ####    ####      ######          " << endl;
	cout << "         #####       ############    ##########    ############   ####  #####     ##########        " << endl;
	cout << "         #####       #####   ####   ####   #####   #####   ####   ##########     #####   ####       " << endl;
	cout << "         #####       ####    ####       ########   ####    ####   ########        #####             " << endl;
	cout << "         #####       ####    ####    ##### #####   ####    ####   #########          #######        " << endl;
	cout << "         #####       ####    ####   ####   ####    ####    ####   ##### ####             ####       " << endl;
	cout << "         #####       #####   ####   ##### ######   ####    ####   ####   ####     ##### #####       " << endl;
	cout << "         #####       #####   ####    ############  ####    ####   #####   #####    #########        " << endl;
	cout << "                                                                                                    " << endl;
	cout << "                                                                                                    " << endl;
	cout << "     ##########                                                                                     " << endl;
	cout << "     ##########                                                                                     " << endl;
	cout << "     ####                                                                                           " << endl;
	cout << "     ####           ########     #### ####                                                          " << endl;
	cout << "     ####         ###########    #########                                                          " << endl;
	cout << "     ##########  #####    ####   ######                                                             " << endl;
	cout << "     #####   #   ####     ####   #####                                                              " << endl;
	cout << "     ####        ####     ####   ####                                                               " << endl;
	cout << "     ####         ####   #####   ####                                                               " << endl;
	cout << "     ####          ##########    ####                                                               " << endl;
	cout << "     ####            ######      ####                                                               " << endl;
	cout << "                                                                                                    " << endl;
	cout << "                                                                                                  	 " << endl;
	cout << "     ##########     ######                                ####                                      " << endl;
	cout << "     ############   ######                                ####                                      " << endl;
	cout << "     ####    ####    ####         #                   #                                             " << endl;
	cout << "     ####    #####   ####    ##########    ####   #####   ####   ############     ##########        " << endl;
	cout << "     ####    ####    ####   #####  #####   ####   ####    ####   ######  #####   ####  #####        " << endl;
	cout << "     ###########     ####         ######    #### ####     ####   #####   #####  ####    ####        " << endl;
	cout << "     #########       ####     ##########     #######      ####   #####   #####  ####    ####        " << endl;
	cout << "     ####            ####   #####  #####     ######       ####   #####   #####  #####  #####        " << endl;
	cout << "     ####            ####   ####   #####      #####       ####   #####   #####    ##########        " << endl;
	cout << "     ####            #####  #############     ####        ####   #####   #####          ####        " << endl;
	cout << "     ####             ###     #####   ###  ######         ####    ###     ###    ##########         " << endl;
	cout << "                                           ###                                    ########   		 " << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	Sleep(4000);
	cout << endl << endl;
	exit(0);
}