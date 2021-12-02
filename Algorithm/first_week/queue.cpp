#include <iostream>
#include <queue> //queue 라이브러리
#include <stdio.h>

using namespace std;

int main()
{
    //큐 생성
    //자료형과 같이 생성한다
    queue<int> q;

    //기본함수
    q.push(1); //변수 input
    q.front(); // front의 값 가져오기
    q.pop();   // top의 값 삭제
    q.empty(); // true : stack이 비어있음
}