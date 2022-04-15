/*
	●구조체..
	1. 절차적
	2. 구조적
	3. 객체지향적

	### 추상화 ###
	- C언어에서 코드를 추상화하는 데 사용되는 삼총사 : 배열, 구조체, 함수
	- 추상화란? 실제 세계 ( 현상 )를 간략화/기호화/보편화해서 표현한 것
	- 코드에서 추상화가 필요한 이유 : 결국 코드는 사람이 짜는 것이기 때문에
	다른 사람이 코드를 해석하기 편리해야 하고 인수인계받아서 유지보수하기 편리해야하며
	다른 사람들과 함께 공동으로 코드를 만들기 편해야한다.

	배열 : 속성이 동일한 여러 개의 데이터를 같은 이름과 순서를 지정한 연속된 번호로 서로 연관되어 있음을 표시함으로써 추상화함

	구조체 : 데이터(자료형)을 실제로 쓰이는 데이터끼리 묶어서 추상화
	- 변수를 모아 놓은 집합체
	- 특정 변수들이 무언가의 하위 개념으로 묶일 수 있을 때
	- studentName[10], studentAge[10], studentKorScore[10] ... 공통점은 '학생'의 'xxx' 이름, 나이, 국어점수, 석차 등등을 '학생'이라는 "구조체"로 묶어서 사용
	 ●구조체 문법 사용법
		1. 구조체를 정의하는 위치 : 구조체가 사용되는 함수(main ... 등등)의 앞에 정의한다.
		2. 구조체 정의의 방법
		struct 구조체 변수명
		{
			구조체 안에 들어갈 하위 변수들 "이름, 나이, 국어점수, 석차 등등"
		};
		
		구조체는 일종의 우리가 새롭게 만든 데이터형이다.

		구조체 안에 들어갈 수 있는 하위변수는 무엇이 있을까?
		당연히, int/bool, float 등과 같은 자료형들은 모두 사용 가능

		3. 구조체의 선언과 초기화
		기본적으로 구조체 변수의 개념은 배열 변수의 개념과 동일
		ex) int a[3] = {50, 70, 80}
		구조체 변수도 다음과

	함수 : 프로세스(코드)를 특정 기능단위로 묶어서 추상화

	최악의 추상화 -> 추상화 단계를 상승시키는 과정
		string a, b, c; //최악의 추상화
		string a[3]; //위의 것보다는 좀 낫다
		string name1, name2, name3; // 위의 것보다는 낫다
		string studentName[3]; //사용의 의도가 명료하게 드러나기 때문에 좋은 추상화
*/
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

//struct score
//{
//	int kor;
//	int eng;
//	int math;
//};
//
//struct student
//{
//	string name;
//	int age;
//	string homTown;
//	int pride;
//	int month[12]; //배열도 만들 수 있다.
//	score myscore; //구조체 안에 구조체를 선언 할 수도 있다
//}seoyeon, jaehyuk; //중괄호와 세미콜론사이에 변수를 미리 선언할 수 도 있다 ★"student minseop과 같다"
struct Player
{
    int player_x = 0;                   //플레이어 x 위치
    int player_y = 0;                   //플레이어 y 위치
};

struct escape_xy
{
    int exit_x = rand() % 9 + 1;     //탈출 x위치  
    int exit_y = rand() % 9 + 1;     //탈출 y위치
};

struct tile_xy
{
    int forest_x = rand() % 9 + 1;  //숲 x위치
    int forest_y = rand() % 9 + 1;  //숲 y위치
    int sms_x = rand() % 9 + 1;    //늪 x위치
    int sms_y = rand() % 9 + 1;    //늪 y위치
};

int main()
{
	//int a;
	//student minseop; //구조체 변수의 선언
	//minseop.name = "심민섭"; //minseop의 name은 " 심민섭"이다.
	//minseop.age = 34; //minseop의 age는 34이다.
	//minseop.homTown = "인천"; //minseop의 언어점수는 99점이다.
	//minseop.pride = 1; //minseop의 랭크는 1등급이다.
	////초간단 실습 : student 구조체를 사용해서 자기 자신의 정보를 입력해 보자.
	//minseop.myscore.eng = 100; //구조체 안에 있는 구조체의 변수 값 넣기
	//score myScore = { 50, 70, 80 }; //배열을 초기화하듯 구조체 변수도 초기화할 수 있다.
	/*cout << myScore.kor << myScore.eng << myScore.math << endl;

	cout << minseop.homTown << endl;
	cout << minseop.age << endl;
	cout << minseop.name << endl;
	cout << minseop.pride << endl;
	cout << minseop.myscore.eng << endl;*/

#pragma region //콘솔 탈출 게임의 업데이트
    /*
        사용할 수 있는 모든 요소에 구조체를 활용해서 소스 코드를 개선해 보세요.
        tile : 지형 정보 추가(숲 -1, 늪 -3, 평지 0)
        player : 피로도 추가
        플레이어가 어느 지형에 있는지, 플레이어의 피로도가 얼마나 남았는지 출력
    */

    srand(time(NULL));
    Player Player;
    escape_xy Exit;
    tile_xy a;
    tile_xy tile_xy;

    int key;
    char map[10][10];
    char player = 'P';
    char escape = 'E';
    int tierd = 20;

    //숲 맵 구성(-1) //2차원 배열을 만들어서 값을 저장 하고 불러와서 사용하기!!
    //map[a.forest_x][a.forest_y] = '@';
    for (int map1 = 0; map1 < 4; map1++)
    {
        map[rand() % 9 + 1][rand() % 9 + 1] = '@';
    }
    //map[tile_xy.forest_x][tile_xy.forest_y] = '@';


    // 늪 맵 구성(-3)
    for (char map1 = 0; map1 < 4; map1++)
    {
        map[rand() % 9 + 1][rand() % 9 + 1] = '\\';
    }

    while (true)
    {
        //전체 맵 구성
        for (char map1 = 0; map1 < 10; map1++)
        {
            for (char map2 = 0; map2 < 10; map2++)
            {
                map[map1][map2] = '#';
            }
        }

        //플레이어
        map[Player.player_x][Player.player_y] = player;

        //탈출구
        map[Exit.exit_x][Exit.exit_y] = escape;

        //탈출 지점과 플레이어 위치 비교
        if (Player.player_x == Exit.exit_x && Player.player_y == Exit.exit_y)
        {
            cout << "탈출에 성공하였습니다.";
            break;
        }

        //숲과 플레이어 위치 비교
        if (Player.player_x == tile_xy.forest_x && Player.player_y == tile_xy.forest_y)
        {
            cout << "숲이다!!";
            tierd -= 1;
        }

        //늪과 플레이어 위치 비교
        if (Player.player_x == tile_xy.sms_x && Player.player_y == tile_xy.sms_y)
        {
            cout << "늪이다!!";
            tierd -= 2;
        }

        cout << "탈출 좌표 x, y : " << Exit.exit_x << ", " << Exit.exit_y << endl;
        cout << "플레이어 좌표 x, y : " << Player.player_x << ", " << Player.player_y << endl;
        cout << "플레이어 피로도 : " << tierd << endl;
     
        //출력 부분 ★★★출력 구문을 따로 둘 수 있다는 것!!!
        for (char map1 = 0; map1 < 10; map1++)
        {
            for (char map2 = 0; map2 < 10; map2++)
            {
                cout << map[map1][map2];
            }
            cout << endl;
        }

        // 키 움직임
        switch (key = _getch())
        {
        case 'w':   //w : 119
            Player.player_x -= 1;
            if (Player.player_x < 0)
            {
                Player.player_x = 0;

            }
            break;

        case 'a':    //a : 97
            Player.player_y -= 1;
            if (Player.player_y < 0)
            {
                Player.player_y = 0;

            }
            break;

        case 's':   //s : 112
            Player.player_x += 1;
            if (Player.player_x > 9)
            {
                Player.player_x = 9;

            }
            break;

        case 'd':   //d : 100
            Player.player_y += 1;
            if (Player.player_y > 9)
            {
                Player.player_y = 9;

            }
            break;

        default:
            break;
        }

        //피로도 소진 구문
        if (key == 'w' || key == 'a' || key == 's' || key == 'd')
        {
            tierd -= 1;
        }
        if (tierd == 0)
        {
            cout << "피로도가 모두 소진되었습니다.";
            break;
        }
        system("cls");
    }

#pragma endregion 
}	
