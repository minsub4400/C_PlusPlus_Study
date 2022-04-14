/*
    boolean Type(데이터 타입)
    bool is_alive = false; // true; 두가지 값으로만 표현(1Byte)

    ●배열(자료구조)
    같은 데이터타입의 여러 변수를 하나의 묶음으로 나타낸 것.

    배열의 데이터타입에 대한 동일한 크기로 메모리상에 "연속된 공간"이 할당된다.
    4 Btye 크기의 값이 메모리에 저장되며 선언방법은 int nums[10] - 10개의 공간을 잡아 놓은 것(총 40 Btye)
    배열의 변수 명이 메모리 주소 값으로 쓸 수 있어서 메모리 주소를 따로 알 필요가 없음.(메모리 주소 확인 : &변수명)
    배열 명이 메모리 "시작" 주소이다.

    ●2차원배열 및 다차원배열
    배열이 "개념적으로" 2중으로, 다중으로 구성되어 있는 것. ※실제론 1차원이다.

    1차원 배열 : int student_nums[5];       // 5개의 int
        -> 5명의 학생이 있다.
    
    2차원 배열 : int student_nums[3][5];    // 15개 int
        -> 3개 반에 각각 5명의 학생이 있다.
    
    3차원 배열 : int student_nums[4][3][5]; // 60개 int
        -> 4개 학년에 각각 3개 반이 존재하고 각 반에 5명의 학생이 있다.

    (엔터 없이) 문자 하나를 입력받는 방법
    _getch(); : int input_key = _getch(); // 입력 값을 ASCII값으로 반환한다.

    (데이터타입)형변환 : 데이터 타입을 변환한다.
    묵시적 형변환 : _getch(); 와 같은 것을 사용하여 자동적으로 데이터 타입이 변환되는 것
    명시적 형변환 : 문법을 사용하여 강제적으로 변환
        예시) char input_key_char = _getch();
              cout << (int)input_key_char << endl;
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{   
    //int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //cout << nums << endl; //메모리 주소가 출력됨.
    //cout << &nums[0] << endl; // 변수명[0] 맨 처음 값이기 때문에 배열 명과 같은 메모리 주소가 나온다.
    //cout << &nums[1] << endl;
    //cout << &nums[2] << endl;

    //int student_nums[3][5] = {
    //{1, 2, 3, 4, 5,},
    //{6, 7, 8, 9, 10},
    //{11, 12, 13, 14, 15}
    //};

    //cout << student_nums << endl;
    //cout << &student_nums[0][1] << endl; // 인덱스 주소가 틀리더라도 값은 메모리 주소는 연속되어 있기 때문에 다음 인덱스의 값으로 정상 출력된다. ex) student_nums[0][5]

 
#pragma region //배열 실습1.

    /*
    실습1. string형 배열변수 5개짜리를 선언하고 반복문을 통해 학생의 이름을 입력받는다.
            입력을 다 받고나서 1 ~ 5사이의 값을 입력하면 해당학생의 이름이 출력 된다.

            예시) 
                1번째 학생의 이름을 입력하세요 : _
                2번째 학생의 이름을 입력하세요 : _
                3번째 학생의 이름을 입력하세요 : _
                4번째 학생의 이름을 입력하세요 : _
                5번째 학생의 이름을 입력하세요 : _

                1 ~ 5사이의 번호를 입력하세요 : _3
                3번째 학생의 이름은 ... 입니다.
    */

    //string student[5];
    //int student_num;

    //for (int i = 0; i < 5; i++)
    //{
    //    cout << i + 1 << " 번째 학생의 이름을 입력해주세요 : ";
    //    cin >> student[i];
    //}
    //    cout << "1 ~ 5사이의 번호를 입력하세요 : ";
    //    cin >> student_num;
    //    cout << student_num << "번째 학생의 이름은 " << student[student_num - 1] << "입니다.";
#pragma endregion

#pragma region    //ASCII코드와 _getch(); 실습
    /*
    A ~ Z 키 중에 하나를 정답으로 설정한다.
    유저는 한 개의 키를 입력해서 설정된 값을 맞춘다.
    유저가 입력한 키와 설정된 값이 맞으면 승리, 프로그램 종료.
    틀리면 남은 기회를 보여주고, 5번 틀리면 정답을 알려주고 게임오버.

    + 틀릴 때마다 정답 알파벳이 입력된 알파벳 앞에 있는지, 뒤에 있는지 힌트를 준다.

    + 입력된 값이 대소문자 구분없이 처리될 수 있도록 수정 해보자.
    */
    
    //srand(time(NULL));
    //int chance = 4;
    //int randdom = rand() % 26 + 65;
    //cout << (char)randdom;

    //while (chance >= 0)
    //{   
    //    cout << "A ~ Z 중에 하나를 입력해주세요 : ";
    //    int getch = _getch();
    //    
    //    if (getch > 97)
    //    {
    //        getch -= 32;
    //    }
    //    cout << endl;
    //    
    //    if (getch == randdom)
    //    {
    //        cout << "정답!" << endl;
    //        exit(0);
    //    }
    //    else if (chance == 0)
    //    {
    //        cout << endl << "모든 기회를 소진하셨습니다. 정답은 " << (char)randdom << "입니다." << endl;
    //        break;
    //    }
    //    else
    //    {   
    //        cout << "남은 기회 : " << chance << endl;
    //        cout << "오답!" << endl;
    //        chance -= 1;
    //        if (randdom < getch)
    //        {
    //            cout << "힌트 : 입력한 것 보다 앞에 있습니다.";
    //        }
    //        else
    //        {
    //            cout << "힌트 : 입력한 것 보다 뒤에 있습니다.";
    //        }
    //        //(randdom < getch) ? cout << "힌트 : 입력한 것 보다 앞에 있습니다." : cout << "힌트 : 입력한 것 보다 뒤에 있습니다.";
    //    }
    //}
    
#pragma endregion

#pragma region //콘솔용 탈출 게임만들기
/*
    10 * 10 크기의 맵을 구성한다. (2차원 배열)
    플레이어(0, 0)가 존재한다.
    탈출지점이 존재한다.
    WASD 키입력을 통해 플레이어를 이동시킨다.
    탈출 지점은 (0, 0)을 제외하고 랜덤 설정.
    P가 E에 도착하면 "탈출에 성공했습니다." 프로그램 종료
    화면 클리어 : system("cls");

    #P########
    ##########
    ##########
    ##########
    ##########
    ##########
    ##########
    ######E###
    ##########
    ##########
*/
    //srand(time(NULL));
    //char map[10][10];
    //int key;
    //int player_x = 0; //플레이어 x 위치
    //int player_y = 0; //플레이어 y 위치
    //int exit_x = rand() % 9 + 1;   //탈출 x 위치, 9 + 1 하는 이유는 0, 0 를 제외한 조건이 있기 때문
    //int exit_y = rand() % 9 + 1;   //탈출 y위치
    //char player = 'P';
    //char escape = 'E';

    //while (true)
    //{   
    //    //탈출 지점과 플레이어 지점 비교
    //    if (player_x == exit_x && player_y == exit_y)
    //    {
    //        cout << "탈출에 성공하였습니다.";
    //        break;
    //    }

    //    //맵 구성
    //    for (char map1 = 0; map1 < 10; map1++)
    //    {
    //        for (char map2 = 0; map2 < 10; map2++)
    //        {
    //            map[map1][map2] = '#';
    //        }
    //    }

    //    //플레이어
    //    map[player_x][player_y] = player;

    //    //탈출구
    //    map[exit_x][exit_y] = escape;

    //    cout << "탈출 좌표 x, y : " << exit_x << ", " << exit_y << endl;
    //    cout << "플레이어 좌표 x, y : " << player_x << ", " << player_y << endl;

    //    //출력 부분 ★★★출력 구문을 따로 둘 수 있다는 것!!!
    //    for (char map1 = 0; map1 < 10; map1++)
    //    {
    //        for (char map2 = 0; map2 < 10; map2++)
    //        {
    //            cout << map[map1][map2];
    //        }
    //        cout << endl;
    //    }

    //    // 키 움직임
    //    switch (_getch())
    //    {
    //    case 'w':   //w : 119
    //        player_x -= 1;
    //        if (player_x < 0)
    //        {
    //            player_x = 0;

    //        }
    //        break;

    //    case 'a':    //a : 97
    //        player_y -= 1;
    //        if (player_y < 0)
    //        {
    //            player_y = 0;

    //        }
    //        break;

    //    case 's':   //s : 112
    //        player_x += 1;
    //        if (player_x > 9)
    //        {
    //            player_x = 9;

    //        }
    //        break;

    //    case 'd':   //d : 100
    //        player_y += 1;
    //        if (player_y > 9)
    //        {
    //            player_y = 9;

    //        }
    //        break;

    //    default:
    //        break;
    //    }
    //    system("cls");
    //}
    
#pragma endregion 


    return 0;
}