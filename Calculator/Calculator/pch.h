// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

#ifndef PCH_H
#define PCH_H
// The Define sentence for control key and 'q', OK 
#define KUp 1
#define KDown 2
#define KLeft 3
#define KRight 4
#define KOk 5
#define KQuit -1

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <string>

static void gotoxy(int x, int y) {
	
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
	
}

static int KeyControl() {
	char temp = _getch();
	if (temp == -32)
		temp = _getch();
	else if (temp == '\r');
	else if (temp == 'q');
	else return -1;

	switch (temp) {
	case 72: // ↑
		temp = KUp;
		break;
	case 80: // ↓
		temp = KDown;
		break;
	
	case 75: // ←
		return KLeft;
		
	case 77: // → 
		return KRight;
		
	case '\r':
		temp = KOk;
		break;
	case 'q':
		temp = KQuit;
		break;
	}
	return temp;
}

static void Info() {
	std::cout << "\n\n";
	std::cout << "■■■■      ■      ■           ■■■■  ■      ■  ■             ■     ■■■■■  ■■■■■ ■■■■   \n";
	std::cout << "■          ■  ■    ■           ■        ■      ■  ■           ■  ■       ■      ■      ■ ■      ■ \n";
	std::cout << "■        ■■■■■  ■           ■        ■      ■  ■         ■■■■■     ■      ■      ■ ■■■■■ \n";
	std::cout << "■        ■      ■  ■           ■        ■      ■  ■         ■      ■     ■      ■      ■ ■      ■ \n";
	std::cout << "■■■■  ■      ■  ■■■■■   ■■■■  ■■■■■  ■■■■■ ■      ■     ■      ■■■■■ ■      ■ \n\n";

	std::cout << "----------------------------------------------------------------------------------------------------------------\n";
	std::cout << "Hello. This program is Calculator which was developed by c++\n";
	std::cout << "Developing Date : 2019/12/20 --- !!!!   \n";
	std::cout << "Use ↑,↓ for selecting mode & 'q' is Quit Key , Enter Key is OK Key\n\n";

}
static int MainMenu(){
	int Start_num;
	int Mode_PosX = 3;
	int Mode_PosY = 16;
	std::cout << "\t  ======= MAIN Menu ====== ";
	gotoxy(Mode_PosX, Mode_PosY); std::cout << "☞" << " \t  1. Normal Calculator";
	gotoxy(Mode_PosX, Mode_PosY+1); std::cout <<  " \t  2. Engineer Calculator";
	gotoxy(Mode_PosX, Mode_PosY + 2); std::cout <<  " \t  3. Developer Calculator\n\n";

	std::cout << "\t※ Select Mode Using rudder key then, Press Enter \n";


	while (1) {
		int n = 0;
		n = KeyControl();
		
		//std::cout << "출력되는 값은 " << n << "\n";
		
		
		switch (n) {
		case KUp:
			if (Mode_PosY > 16)
			{
				gotoxy(Mode_PosX, Mode_PosY);
				std::cout << " ";
				gotoxy(Mode_PosX, --Mode_PosY);
				std::cout << "☞";
			}
			break;
		case KDown:
			if (Mode_PosY <18)
			{
				gotoxy(Mode_PosX, Mode_PosY);
				std::cout << " ";
				gotoxy(Mode_PosX, ++Mode_PosY);
				std::cout << "☞";
			}
			break;
		case KLeft:
			if (Mode_PosY > 16)
			{
				gotoxy(Mode_PosX, Mode_PosY);
				std::cout << " ";
				gotoxy(Mode_PosX, --Mode_PosY);
				std::cout << "☞";
			}
			break;
		case KRight:
			if (Mode_PosY < 18)
			{
				gotoxy(Mode_PosX, Mode_PosY);
				std::cout << " ";
				gotoxy(Mode_PosX, ++Mode_PosY);
				std::cout << "☞";
			}
			break;
		case KOk:
			gotoxy(Mode_PosX, Mode_PosY + 4);
		//	std::cout << Mode_PosY - 16 << " \n";
			return Mode_PosY-16; // mode 선택에 따라 0,1,2 리턴 됨.

		case KQuit:
		return -1;

			}
	
	}
}


class Calc{
public:
	int num = 1;
	Calc(int n){
		system("cls");
		if (n < 0 || n >2) {
			std::cout << "This Mode is Wrong \n";
			num = 0;
		}
		std::cout << "Hello User This is ";
		
		switch (n) {
		case 0:
				std::cout << "General Calculator! \n";
				break;
		case 1:
			std::cout << "Engineer Calculator! \n";
				break;
		case 2:
			std::cout << "Developer Calculator! \n";
			break;
		}
		std::cout << "(If you wanna quit, press \'q\') \n\n";
	}
	

};

class EnginCalc
{	
};

class DevCalc {
	
};


// TODO: 여기에 미리 컴파일하려는 헤더 추가

#endif //PCH_H
