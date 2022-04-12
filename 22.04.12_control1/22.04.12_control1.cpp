/*
    ★제어문
    1. 조건문 : 특정 조건에 따라서 실행문을 실행할지 안할지 제어 : if / switch
    2. 반복문 : 특정 조건에 따라서 실행문을 일정 횟수만큼 반복 실행 제어 : while / for

    ●조건문
    1-1. if 문
    
    if (조건식1) {
        실행문1;
    }
    else if (조건식2) {
        실행문2;
    }
    else {
        실행문3;
    }

    1-2. switch 문

    switch (정수형 변수) {
        case 정수1:
            실행문1;
        break;

        case -3:
            실행문2;
        break;

        defualt: //해당하는 정수 값이 없을 때
            실행문3;
        break;
    }

    ●반복문
    2-1. while 문

    while (조건식) {
        실행문;
        조건식을 바꾸는 실행문을 넣어 루프를 방지; - while문을 중단시키는 첫번째 방법.

        if (조건식) {
            break; - break로 중단시키는 두번쨰 방법. if 문안에 있지 않고 while에 break를 사용하면 실행문이 한번만 돌고 끝내게 된다
        }
    }

    do-while 문 - while과 차이점은 do-while문은 한번은 무조건 실행하게 된다.

    do {
        실행문;
    }
    while (조건식);

    2-2. for 문

    for ( (1)초기식; (2)조건식; (3)증감식;) {
        (4)실행문;
    }

    (1) - > (2) -> (4) -> (3) -> (2) -> (4) -> (3) -> 조건식에 만족하지 않을 때까지 반복.
*/

#include <iostream>
using namespace std;

int main(void)
{
#pragma region    // if 문 실습1.
    //점수를 하나 입력받아서
    //입력 받은 숫자가 10보다 크면 " 입력된 숫자가 10보다 큽니다. " 출력
    //10이하 9초과면 " 9보다 큽니다. " 출력
    //9이하 6초과면 " 6보다 큽니다. " 출력
    //그 이외에는 " 6보다 작거나 같습니다. " 출력

    //int input_score;
    //cout << "점수를 입력해주세요 : ";
    //cin >> input_score;

    //if (10 < input_score) {
    //    cout << "입력된 숫자가 10보다 큽니다" << endl;
    //}
    //else if (input_score > 9) {      // or (10 >= input_score && 9 < input_score)
    //    cout << "9보다 큽니다." << endl;
    //}
    //else if (input_score > 6) {      //※ (9 >= input_score > 6) 다음과 같이 조건식을 짜게되면 input_score가 9라 했을때
    //                                 //  ((9 >= 9) > 6)가 된다 (9 >= 9) 는 1로 표현이 되기 때문에
    //                                 //  (1 > 6)이 되는데, 거짓이 때문에 실행되지 않는다.
    //    cout << "6보다 큽니다." << endl;
    //}
    //else {
    //    cout << "6보다 작거나 같습니다." << endl;
    //}
#pragma endregion

#pragma region    // switch 문 실습1.
    //당신의 고향은 어디입니까?
    //    1. 서울   2.양평    3. 광주   4. 대전   5.제주도
    //    각 지역의 인사말이 나오도록 출력
    //    default : 5개 중에 선택해주세요.

    //int switch_input;
    //cout << "당신의 고향은 어디입니까?" << endl;
    //cout << "1.서울   " << "2.양평  " << "3.광주  " << "4.대전  " << "5.제주도 " << endl;
    //cin >> switch_input;

    ////switch 문 if 문으로 바꿔보기.
    //if (switch_input == 1) {
    //    cout << "안녕하세요. 서울이군요." << endl;
    //}
    //else if (switch_input == 2) {
    //    cout << "안녕하세요. 양평이군요." << endl;
    //}
    //else if (switch_input == 3) {
    //    cout << "안녕하세요. 광주이군요." << endl;
    //}
    //else if (switch_input == 4) {
    //    cout << "안녕하세요. 대전이군요." << endl;
    //}
    //else if (switch_input == 5) {
    //    cout << "안녕하세요. 제주도군요." << endl;
    //}
    //else {
    //    cout << "5개 중에 선택해주세요." << endl;
    //}

    //switch (switch_input) {
    // case 1:
    //    cout << "안녕하세요. 서울이군요." << endl;
    //    break;
    // case 2:
    //    cout << "안녕하세요. 양평이군요." << endl;
    //    break;
    // case 3:
    //    cout << "안녕하세요. 광주이군요" << endl;
    //    break;
    // case 4:
    //    cout << "안녕하세요. 대전이군요." << endl;
    //    break;
    // case 5:
    //    cout << "안녕하수꽝. 제주도군요." << endl;
    //    break;
    // default :
    //    cout << "5개 중에 선택해주세요." << endl;
    //}
#pragma endregion

#pragma region    //예제1. while를 활용한 Hello World 를 5번 출력하는 프로그램.
    //int while_count = 0;
    //while (5 > while_count) { //조건식을 제어하여 중단
    //    cout << "Hello World" << endl;
    //    while_count++;

    //    if (while_count >= 5) { //if 문에 break를 사용하여 중단
    //        break;
    //    }
    //}
#pragma endregion 

#pragma region //예제2. "예제1"를 do while를 활용하여 변경해보자.
    //int while_count = 0;
    //do {
    //    cout << "Hello World" << endl;
    //    while_count++;
    //   
    //} while (5 > while_count);
#pragma endregion

#pragma region    //실습1.
    //while문을 써서 1 ~ 10 까지의 정답(랜덤한 숫자)을 맞출 때까지 반복되는 프로그램을 수정해보자.
    //srand(time(NULL));
    //int input_number;
    //int rand_number = rand() % 10 + 1;
    //cout << "미리보기 정답 : " << rand_number << endl;
    //while (1) {
    //    cout << "1 ~ 10까지의 숫자를 입력해주세요 : ";
    //    cin >> input_number;
    //        if (input_number == rand_number) {
    //            cout << "정답입니다." << endl;
    //            break;
    //        }
    //    cout << "틀렸습니다. 다시 시도해주세요." << endl;
    //}
#pragma endregion

#pragma region //for 문을 활용한 실습1.
//10 부터 1까지 차례대로 출력되는 코드를 작성해보자.(10, 9, 8 ,7 ,6, 5 ...1)
//for (int i = 10; i >= 1; i--)
//{
//    cout << i << endl;
//}
#pragma endregion

#pragma region //for 문을 활용한 실습2.
//100미만의 3의 배수를 차례대로 출력되는 코드를 작성해 보자.(3, 6, 9 ...99)
//for (int i = 3; i < 100; i +=3)
//{
//    //i += 3;
//    cout << i << endl;
//}
#pragma endregion

#pragma region //for 문을 활용한 실습3.
//1000미만의 2의 승수를 차례대로 출력되는 코드를 작성해보자.(1, 2, 4, 8, 16, 32, 64...512)
//for (int i = 1; i < 1000; i *=2)
//{
//    cout << i << endl;
//    //i *= 2;
//}
#pragma endregion

#pragma region //for문을 활용한 실습4.
//구구단을 출력해보자.
//4-1. 2단을 차례대로 출력해보자
// 2 * 1 = 2
// 2 * 2 = 4
// 2 * 3 = 6
// 2 * 4 = 8
// 2 * 5 = 10
// 2 * 6 = 12
// 2 * 7 = 14
// 2 * 8 = 16
// 2 * 9 = 18

//for (int i = 2; i <= 9; i++)
//{
//    cout << 2 << " x " << i << "= " << 2 * i << endl;
//}

// 4-2. 구구단 2단 ~ 9단을 차례대로 출력해보자.
// 2단
//
// 3단
//
// 4단
//
// ...
//
// 9단

//for (int i = 2; i < 9; i++) {
//    cout << i << " 단을 시작합니다." << endl;
//
//    for (int j = 1; j <= 9; j++) {
//        cout << i << " x " << j << "= " << i * j << endl;
//    }
//    cout << endl;
//}

// 4-3. 구구단 2단 ~ 9단을 다음과 같은 형태로 출력해 보자.
// 2단 3단 4단
// 5단 6단 7단
// 8단 9단
    //4-3.의 경우 많이 해메었는데 단수 값을 찍는 for문이 맨 위로 나오냐 아니냐에 따라 가로로 출력이 달라졌다.
    // 
    //for (int j = 1; j <= 9; j++)
    //{   
    //    for (int i = 2; i <= 9; i++)
    //    {
    //        cout << i << " x " << j << "= " << i * j << "   ";
    //    }
    //    cout << endl;
    //}

    //for (int i = 2; i <= 9; i++)
    //{
    //    for (int j = 1; j <= 9; j++)
    //    {
    //        cout << i << " x " << j << "= " << i * j << "   ";
    //    }
    //    cout << endl;
    //}

#pragma endregion



}