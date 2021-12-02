#include <iostream>
#include <stack> //stack 라이브러리
#include <string.h>

int main()
{
    // stack 선언
    //자료형과 같이 선언한다
    std::stack<int> stack;

    //기본함수
    stack.push(1); //변수 input
    stack.top();   // top의 값 가져오기
    stack.pop();   // top의 값 삭제
    stack.empty(); // true : stack이 비어있음
}