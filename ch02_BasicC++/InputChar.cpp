#include <iostream> 

using namespace std;

int main() {
  cout << "이름 입력 >> ";
  char name[11]; 
// 한글은 5개 글자, 영문은 10까지 저장 

  cin >> name; 
// 키보드로부터 문자열을 읽음

cout << "이름은 " << name << endl; 
}

// 출력 예시 (1)
// 이름 입력 >> 방윤서
// 이름은 방윤서
// 빈칸없이 키를 입력했을 때의 결과

// 출력 예시 (2)
// 이름 입력 >> 방 윤 서
// 이름은 방
// 위의 예시에서 빈칸을 만나면 문자열 입력이 종료되기 때문에 '방' 으로만 출력되는 사실을 확인할 수 있다.
