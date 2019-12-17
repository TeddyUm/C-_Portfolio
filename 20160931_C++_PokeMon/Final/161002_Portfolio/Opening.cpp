#include "Opening.h"



Opening::Opening()
{
}


Opening::~Opening()
{
}

int Opening::gameStart() // 오프닝 출력 함수
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	Sleep(500);
	cout << endl << endl << endl << "\t\t\t지우는 이상해 씨를 데리고 태초마을을 떠났다." << endl;
	Sleep(3000);
	system("cls");
	Sleep(2000);
	cout << endl << endl << endl << "\t\t\t내가 지우보다 꿀리는게 뭔데? 나도 할수 있어" << endl;
	Sleep(2000);
	cout << "\t\t\t나도 훌륭한 포켓몬 마스터가 될거야!!!" << endl;
	Sleep(3000);
	system("cls");
	cout << endl << endl << endl << "\t\t\t그렇게 평범한 마을소년 A는 따스한 침대를 박차고 일어났다." << endl;
	Sleep(2000);
	cout << "\t\t\t소년의 모험은 어떻게 될 것인가..." << endl;
	Sleep(3000);
	system("cls");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << endl;
	cout << "                                      -+,                                                           " << endl;
	cout << "                                      -###+.                                                        " << endl;
	cout << "                                       ######-                                                      " << endl;
	cout << "                                       -X==+###;                                                    " << endl;
	cout << "                                        ;     -x=.                                                  " << endl;
	cout << "                                        ,-      ,=,                                                 " << endl;
	cout << "                                         --. ... .=,                                                " << endl;
	cout << "                                          -=. ... .=.                                               " << endl;
	cout << "                                           ,=;  .. ;=                                               " << endl;
	cout << "                                            .--,... -,                                              " << endl;
	cout << "                                        .;;-;,;-,...--                                              " << endl;
	cout << "                                     .---,,.. . ....,-;                                             " << endl;
	cout << "                                   .--,. ...........  ;=                                            " << endl;
	cout << "                                  --, ............ ..  ;-                                           " << endl;
	cout << "                               ;--;. ............., X#  -;    .,..                                  " << endl;
	cout << "                            .--;... . ........... ####;  -  ,=-;--=.                                " << endl;
	cout << "                          .--, . ;..  .. ....,..   ++, ;-++-;. .  ;=                                " << endl;
	cout << "                         ;=,... .=; .#.;# ....        -x++x, .... ;-                                " << endl;
	cout << "                        -- ... .--- .###X  .  -+=x-   -x++. ......;-                                " << endl;
	cout << "                       -,     .-- ,,  ;.  ..x#####+ .  -x. ...... -;                                " << endl;
	cout << "                      -,  .;=+-;...--=--;   -#+---=  . .,  ...... -,                                " << endl;
	cout << "                     ,######+;,,,,.=x===x-   ,=;;-- ...-. ...... ,=                                 " << endl;
	cout << "                    .###+-.    .   .=+=++= .  .-==, ...,........ =;                                 " << endl;
	cout << "                    .,,.    ..... ..-=+=-  ...  .   ........... -=                                  " << endl;
	cout << "                       ;-  ......;-;.  ..,,,.......;;......... ;=,                                  " << endl;
	cout << "                        --. . .;-,. . ... .....,;;-,..........;=,                                   " << endl;
	cout << "                         -- .;-, ............................-+;                                    " << endl;
	cout << "                          --=;. ..............................-;                                    " << endl;
	cout << "                           --  ........- .................... .=                                    " << endl;
	cout << "                           .=...... .,;=...................... -;                                   " << endl;
	cout << "                            .=-----=---= ......................,=                                   " << endl;
	cout << "                                   ==,;; ....     ............. -;                                  " << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "                                              ,#+,                                                  " << endl;
	cout << "      ..-=+xxxXXXXx;                         -#+=x+                                                 " << endl;
	cout << "      ##+-;,     .-##,      ,,;;;,.  ;#x,   +#,  ;##-==##,    +#xx+X#x.-=-; .+==-;    ,;,,.         " << endl;
	cout << "      x#-   --==,   x#, .  .##+++##;x#--X+,X#X.-###+    +#+ -#X.   -#X+---+x##x;=X#.  ##+++##=      " << endl;
	cout << "      -#+   X#X##;  ,#Xx+xxX#X   X##+   .#X------;X+     .X##-     =-   .   .X;   +#, #X   x#;      " << endl;
	cout << "       ##   =#xX#.  .,      =X   #x.   =X#+       X=  .-   -   ;. .   =###x   .    -#+#+   ##       " << endl;
	cout << "       ##.  .;.    .  .xXX;  , . ;   =X#x#+  x#####=   #x.   .x# ... ,##;+#+   . .  ,##-  .#X       " << endl;
	cout << "       +#-     .;-x.  X#x##,  ..    x##-;#x      ;#-   X##= =##x  .  ,#x .#+ .. .#.  .#;  -#+       " << endl;
	cout << "       -#+   x#####   ## +#- ... ,   ,+x+#+  ;-;,=#-   #XX#####x      +#=XX.    ,##,  ..  =#-       " << endl;
	cout << "       .#x   =#- x#,  -#+#+   .  #x.   .+#X  x#####;  .#x -#-.#+   +.   ;.  .   -###-     x#.       " << endl;
	cout << "        ##.  ,#- -##.   .    +   x##+.   .-       ;,   #x     #=   X#+;. .,=X,  =#+##=    ##        " << endl;
	cout << "        x#,   #x  +##+-...;=##,,,xXx##+     ,;;;;,=+=-=#X    ,#+,,.x###########X##  ##+,.;#X        " << endl;
	cout << "        =#x+xX##   ;x############## .###=.-##############    =#######. ;;;.--++xX#   ######x        " << endl;
	cout << "        ;####Xx+      .,;,. ......,   -#####+                 ,...;;;                 ..;-=,        " << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
   cout << endl << endl << "\t\t\t\t   P r e s s   A n y   K e y" << endl;
   getch();

	return 0;
}