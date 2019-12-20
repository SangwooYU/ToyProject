// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

#ifndef PCH_H
#define PCH_H
#include <iostream>
#include <Windows.h>

static void gotoxy(int x, int y) {
	
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
	
}



static void Info() {
	std::cout << "\n\n";
	std::cout << "■■■■      ■      ■           ■■■■  ■      ■  ■             ■     ■■■■■  ■■■■■ ■■■■   \n";
	std::cout << "■          ■  ■    ■           ■        ■      ■  ■           ■  ■       ■      ■      ■ ■      ■ \n";
	std::cout << "■        ■■■■■  ■           ■        ■      ■  ■         ■■■■■     ■      ■      ■ ■■■■■ \n";
	std::cout << "■        ■      ■  ■           ■        ■      ■  ■         ■      ■     ■      ■      ■ ■      ■ \n";
	std::cout << "■■■■  ■      ■  ■■■■■   ■■■■  ■■■■■  ■■■■■ ■      ■     ■      ■■■■■ ■      ■ \n\n";

	std::cout << "----------------------------------------------------------------------------------------------------------------\n";
	std::cout << "Hello. This program is Calculator which was developed by c++";
	std::cout << "Developing Date : 2019/12/20 --- !!!!   \n\n";


}
static void MainMenu(){
	std::cout << "\t  ======= MAIN Menu ====== ";
	gotoxy(3, 15); std::cout << "☞ \t  1. Normal Calculator";
	gotoxy(3, 16); std::cout <<  " \t  2. Engineer Calculator";
	gotoxy(3, 17); std::cout <<  " \t  3. Developer Calculator\n\n";

	std::cout << "\t※ Select Mode Using rudder key then, Press Enter \n";
}


class NormCalc {
	
};

class EnginCalc {

};

class DevCalc {

};


// TODO: 여기에 미리 컴파일하려는 헤더 추가

#endif //PCH_H
