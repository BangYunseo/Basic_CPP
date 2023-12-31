#include <iostream>

using namespace std;

class Rect;
// Rect 클래스가 선언되기 전에 먼저 참조되는 컴파일 오류(forward reference)를 막기 위한 선언문(forward declaration)

bool equals(Rect r, Rect s);
// equals() 함수 선언

// Rect 클래스 선언
class Rect{
  int width, height;
public:
  Rect(int width, int height){
    this->width = width;
    this->height = height;
  }
  friend bool equals(Rect r, Rect s)
};

// 외부 함수
bool equals(Rect r, Rect s){
  if(r.width == s.width && r.height == s.height) return true;
  else return false;
}

int main(){
  Rect a(3, 4), b(4, 5);
  if(equals(a, b))  cout << "Equals!" << endl;
  else  cout << "Not Equals!" << endl;
}

// 출력 예시
// Not Equals!
