#include <iostream>
#include <stdint.h>
#include <time.h>

using namespace std;

//6.논리연산자
//왼쪽 항과 오른쪽 항의 값을 각각 참과 거짓으로 연산해서
//두 값을 비교해서 참과 거짓을 반환하는 연산자

//&& : 논리곱(AND)
//a && b : a의 결과값이 참이고 b의 결과값도 참이면 1을 반환

//|| : 논리합(OR)
//a || b : a의 결과값이 참이거나 b의 결과값이 참이면 1을 반환

//!: 논리부정(NOT)
//!a : a의 결과값이 참이면 거짓을 반환, 거짓이면 참을 반환
//std::cout << !1 << std::endl; // 결과값 0

//7. 삼항연산자
//a ? b : c; : a의 결과값이 참이면 b실행문이 동작을 하고 거짓이면 c실행문이 동작
//(10 > 5) ? std::cout << "10이 5보다 크다." : std::cout << "10이 5보다 작다.";

//난수(랜덤 값)
//rand(); // 0 ~ 32767 사이의 랜덤함 값이 반환된다.
//rand()가 41값만 나오는 이유 : 함수 내부에 seed값이 있어서 이 값에 의해서 리턴값이 정해진다. 기본적으로 seed는 1로 세팅되어 있다.
//seed 값을 바꾸는 방법은 srand()사용한다
//선언
//srand(time(NULL)); //time은 시간 값, 매개변수는 NULL
//cout << rand() << endl;

int main(void)
{   
    srand(time(NULL));
    // 실습1. 3 ~ 7 사이의 랜덤한 숫자를 출력하는 프로그램을 작성하자.(3, 7 포함)
    cout << "실습1 : " << rand() % (3, 7) << endl;

    // 실습2. 가장 작은 값과 큰 값을 입력받아서, 그 사이의 임의의 값을 출력하는 프로그램을 작성하자.
    int prectice2_1;
    int prectice2_2;
    cout << "작은 숫자를 입력해주세요 : ";
    cin >> prectice2_1;
    cout << "큰 숫자를 입력해주세요 : ";
    cin >> prectice2_2;
    cout << "실습2 : " << rand() % (prectice2_1, prectice2_2) << endl;

    // 실습3. 프로그램을 실행하면 내부적으로 1 ~ 10 사이의 숫자가 정답으로 정해진다. 
    //          유저가 1 ~ 10 사이의 숫자를 입력하면 맞으면 true, 틀리면 false를 출력한다.
    int prectice3 = rand() % 10 + 1;
    int input;
    cout << "실습 3" << endl;
    cout << "1 ~ 10 사이의 숫자를 입력해주세요 : ";
    cin >> input;
    cout << (input == prectice3) << "True" << endl;
    cout << (input != prectice3) << "False" << endl;


    

    return 0;
}



