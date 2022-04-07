/*
*연산자*
 데이터를 가공(연산)하는 모든 명령에 필요한 것들
 1)어떤 종류의 연산자들이 있는지?
 2)연산자들의 우선순위
 3)결합 순서 : 좌측부터 연산하는 연사자, 우측부터 연산하는 연산자
 
 1. 사칙연산자 : 산술연산자 (좌측부터 연산)
     + : 더하기
     - : 뺴기
     * : 곱하기
     / : 나누기 11 / 3 => 3
     % : 나머지 11 / 3 => 2
    우선순위 :  *, /, % > +, -
    정수와 0을 나누게 되면 런타임에러, 잘못 된 메모리 주소 호출로 값이 나오지 않는다.

 2. 대입연산자 (우측부터 연산)
     = : 왼쪽 항에 오른쪽 항의 값을 대입한다.

 3. 복합 대입 연산자 (변수의 값이 변경된다.)
    += : a += b; => a = a + b;
    -= : a -= b; => a = a - b;
    *= : a *= b; => a = a * b;
    /= : a /= b; => a = a / b;
    %= : a %= b; => a = a % b; (a와 b는 정수형 타입이어야 한다.)

 4. 증감연산자
    특정 변수의 값을 1씩 증가시키거나 감소시킬 때 사용한다.
    변수의 앞이나 뒤에 ++ / --를 붙여서 사용한다.
 
 5. 관계연산자
    두 값을 비교한 결과가 참인지 거짓인지 반환하는 연산자(참/true = 1 or 거짓/false = 0)
    a < b : 왼 쪽항의 값이 오른쪽 항의 값보다 "작으면" 참(1, true) 반환
    a > b : 왼 쪽항의 값이 오른쪽 항의 값보다 "크면" 참(1, true) 반환
    a <= b : 왼 쪽항의 값이 오른쪽 항의 값보다 "작거나 같으면" 참(1, true) 반환
    a >= b : 왼 쪽항의 값이 오른쪽 항의 값보다 "크거나 같으면" 참(1, true) 반환
    a == b : 왼 쪽항의 값이 오른쪽 항의 값과 "같으면" 참(1, true) 반환
    a != b : 왼 쪽항의 값이 오른쪽 항의 값과 "다르면" 참(1, true) 반환
*/

#include <iostream>
using namespace std;
#include <string>

int main()
{
    int left_value = 22;
    int right_value = 2;

    //사칙연산자
    cout << "+ : " << left_value + right_value << endl;
    cout << "- : " << left_value - right_value << endl;
    cout << "* : " << left_value * right_value << endl;
    cout << "/ : " << left_value / right_value << endl;
    cout << "% : " << left_value % right_value << endl;

    cout << "\n";

    //복합연산자
    left_value += right_value;
    cout << "+ : " << left_value << endl;
    left_value -= right_value;
    cout << "- : " << left_value << endl;
    cout << "* : " << (left_value *= right_value) << endl;
    cout << "/ : " << (left_value /= right_value) << endl;
    cout << "% : " << (left_value %= right_value) << endl;

    //증감연산자
    left_value = 10;
    right_value = 10;
    //left_value++;
    cout << ++left_value << endl; // 출력 : 12, 메모리 : 12
    //++right_value;
    cout << right_value++ << endl; // 출력 : 11, 메모리 : 12

    cout << "\n";

    //관계연산자

        /*실습.
        1. 고객의 나이를 입력받아서 미성년자(19세이하)면 true를 출력, 성인이면 false를 출력
        2. 아까 입력 받은 나이를 기준으로, 주민등록증 발급대상(20살만)이면 true를 아니면 false를 출력
        3. 입력받은 나이가 아홉수(1 ~ 9)인지 확인해서 true, false를 출력*/
    
    int age;
    bool a;

    cout << boolalpha;

    cout << "나이 입력" << endl;
    cin >> age;
    a = age > 19; //age와 19를 비교하여 a변수에 0 or 1를 넣어 출력한다.
    cout << a << endl;

    a = age == 20;
    cout << a << endl; //age와 20를 비교하여 a변수에 0 or 1를 넣어 출력한다.

    a = (age % 10) == 9; //10으로 나누어 떨어지는 값이 9이면 된다.
    cout << a << endl;

}   
