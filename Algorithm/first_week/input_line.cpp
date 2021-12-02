//여러 줄 입력시 구별 하는 방법

// cin의 경우 줄바꿈을 변수에 저장하지 않는다.
//그러므로 다음 입력 전에
//버퍼에 남아있는 /n을 지워주는 cin.ignore()을 실행 해야 한다.

#include <iostream>

int main()
{
    //"3
    // hello world"
    //입력 시

    int num;
    std::cin >> num;
    std::cin.ignore(); // 3뒤의 줄바꿈(/n)제거

    std::string s;
    std::cin >> s;
    std::cin.ignore(); // world 뒤의 줄바꿈(/n)제거

    std::cout << num << std::endl;
    std::cout << s << std::endl;
}
