
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;


struct monster
{
    string mon_name;               //몬스터 이름
    int mon_life = rand();           //몬스터 체력
    int mon_attack = rand();       //몬스터 공격력
    int mon_defence = rand();    //몬스터 방어력
    string mon_type;                //몬스터 타입
};

int main()
{
    //1. 두정수를 입력받은 후, 두 정수의 사칙연산 +, % 결과를 출력하기.
    int input_num1;
    int input_num2;
    int add = 0;
    int ioi = 0;
    //cout << " 첫 번째 정수를 입력해주세요 : ";
    //cin >> input_num1;
    //cout << " 두 번째 정수를 입력해주세요 : ";
    //cin >> input_num2;
    //
    //if (input_num2 == 0)
    //{
    //    cout << "0은 나눌 수 없습니다." << endl;
    //    exit(0);
    //}
    //add = input_num1 + input_num2;
    //ioi = input_num1 % input_num2;

    //cout << "두 수의 합은 " << add << "입니다." << endl;
    //cout << "두 수의 나머지 계산한 값은 " << ioi << "입니다." << endl;

    //2. 최소값과 최대값을 입력 받은 후, 두 수 사이의 랜덤한 숫자 1개 출력하기.
    srand(time(NULL));
     
    //cout << "최소 값을 입력해주세요 : ";
    //cin >> input_num1;
    //cout << "최대 값을 입력해주세요 : ";
    //cin >> input_num2;
    //cout << "랜덤 수는 : " << rand() % (input_num2 - input_num1) + input_num1 + 1<< "입니다." << endl;

    //3. 1 ~ 3사이의 숫자를 입력받은 후, 입력 받은 숫자에 따라 다른 인삿말이 나오도록하기.
    //cout << "숫자 입력 : ";
    //int a = _getch(); //_getch()로 숫자를 받으려면 '' 작은 따옴표를 사용하고 아니면 cin를 사용!!
    //switch (a)
    //{
    //case '1':
    //    cout << "안녕하세요. 서울";
    //    break;
    //case '2':
    //    cout << "안녕하세요. 미국";
    //    break;
    //case '3':
    //    cout << "안녕하세요. 러시아";
    //    break;
    //default:
    //    break;
    //}
    
    //4. 1 부터 100까지의 숫자를 차례대로 출력하기
    // 출력되는 숫자의 옆에 홀수이면 홀수, 짝수이면 짝수라고 표시하기
    // 출력되는 숫자의 옆에 3의 배수이면 3의 배수라고 5의 배수이면 5의 배수라고 표시하기.
    // 예시)
    //      1 홀수
    //      2 짝수
    //      3 홀수 3의 배수
    //      4 짝수
    //      5 홀수 5의 배수
    //      6 짝수
    
    //for (int i = 1; i <= 100; i++)
    //{   
    //    if (i % 5 == 0 && i % 3 == 0)
    //    {
    //        cout << i << " 홀수 3의 배수, 5의 배수" << endl;
    //    }
    //    else if (i % 3 == 0)
    //    {
    //        cout << i << " 홀수 3의 배수" << endl;
    //    }
    //    else if (i % 5 == 0)
    //    {
    //        cout << i << " 홀수 5의 배수" << endl;
    //    }
    //    else if (i % 2 == 0)
    //    {
    //        cout << i << " 짝수" << endl;
    //    }
    //    else
    //    {
    //        cout << i << " 홀수" << endl;
    //    }
    //}
    

    //5. 1 ~ 100 사이의 임의의 숫자를 맞추는 게임
    //오답을 입력하면 컴퓨터가 정답이 오답보다 큰지 작은지 알려주고 5번 틀리면 게임 오버
    //int number = rand() % 99 + 1;
    //int input_num;
    //int chance = 5;
   
    //while (chance > 0)
    //{
    //    cin >> input_num;
    //    if (number == input_num)
    //    {
    //        cout << "정답!" << endl;
    //        break;
    //    }
    //    else
    //    {
    //        cout << "오답!" << endl;
    //        chance -= 1;
    //        cout << "남은 기회 : " << chance << endl;
    //        if (chance == 0)
    //        {
    //            cout << "기회를 모두 소진하였습니다." << endl;
    //            break;
    //        }
    //        else if (input_num > number)
    //        {
    //            cout << "입력한 숫자 보다 작습니다." << endl;
    //        }
    //        else if (input_num < number)
    //        {
    //            cout << "입력한 숫자 보다 큽니다." << endl;
    //        }
    //    }
    //}
    

    //6. 숫자 대신 알파벳 중 하나를 입력받고 컴퓨터가 생각하는 알파벳과 같은 값을 찾는 게임 만들기
    //틀렸을 때, 입력한 문자보다 앞에 있는지, 뒤에 있는지 알려주고 5번까지 기회를 준다.
    //int input_num;
    //int chance = 5;
    //int rand_num = rand() % 25 + 97;
    //do
    //{
    //    if (chance == 0)
    //    {
    //        cout << endl << "모든 기회를 소진하였습니다." << endl;
    //        break;
    //    }
    //    char input_num = _getch();
    //    //cout << rand_num;
    // 
    //    if (rand_num == input_num)
    //    {
    //        cout << "정답!" << endl;
    //        break;
    //    }
    //    else if (rand_num > input_num)
    //    {   
    //        chance -= 1;
    //        cout << "오답!" << endl;
    //        cout << "남은 기회 : " << chance << endl;
    //        cout << "입력한 값보다 뒤에 있습니다." << endl;
    //    }
    //    else if (rand_num < input_num)
    //    {
    //        chance -= 1;
    //        cout << "오답!" << endl;
    //        cout << "남은 기회 : " << chance << endl;
    //        cout << "입력한 값보다 앞에 있습니다." << endl;
    //    }

    //} while (chance >= 0);
 
    //7. 몬스터라는 구조체를 만들고 5개를 선언하시오.
    //5개의 이름은 cin 으로 입력받게 하고 몬스터의 공격력, 방어력은 랜덤으로 설정되도록 하시오.
    //그 후 1 ~ 5 사이의 숫자를 입력하면 번호에 해당하는 몬스터의 이름, 공격력, 방어력을 출력하시오.
    
    //monster monster_info;

    //cout << "몬스터의 이름을 입력해주세요 : ";
    //cin >> monster_info.mon_name;
    //cout << "몬스터의 타입을 입력해주세요 : ";
    //cin >> monster_info.mon_type;

    //cout << "몬스터의 정보를 보려면 해당 번호를 입력하세요." << endl;
    //cout << "1. 몬스터 이름" << "\t" << "2.몬스터 타입" << "\t" << "3. 몬스터 체력" << "\t" << "4. 몬스터 공격력" << "\t" << "5번 몬스터 방어력" << endl;
    //switch (_getch())
    //{
    //case '1':
    //    cout << monster_info.mon_name;
    //    break;
    //case '2':
    //    cout << monster_info.mon_type;
    //    break;
    //case '3':
    //    cout << monster_info.mon_life;
    //    break;
    //case '4':
    //    cout << monster_info.mon_attack;
    //    break;
    //case '5':
    //    cout << monster_info.mon_defence;
    //    break;
    //default:
    //    break;
    //}
}


