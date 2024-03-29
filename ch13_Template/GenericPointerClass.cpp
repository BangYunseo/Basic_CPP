#include <iostream> 

using namespace std;

// Stack 템플릿
template <class T> 
class MyStack {
  int tos;    
  // top of stack 변수

  T data [100]; 
  // T 타입의 배열
  // 스택의 크기는 100 
public:
  MyStack();
  void push(T element); 
  // element를 data[] 배열에 삽입 

  T pop(); 
  // 스택의 탑에 있는 데이터를 data[] 배열에서 리턴
};

// 생성자
template <class T>
MyStack<T>::MyStack() {
  tos = -1; 
  // 스택은 비어 있음
}

template <class T>
void MyStack<T>::push(T element) { 
  if(tos == 99) {
    cout << "stack full"; 
    return;
}
  tos++;
  data[tos] = element; 
}

template <class T> 
T MyStack<T>::pop() {
  T retData;
  if(tos == -1) {
    cout << "stack empty"; 
    return 0; // 오류 표시
  }
  retData = data[tos--]; 
  return retData;
}

class Point { 
  int x, y;
public:
  Point(int x = 0, int y = 0) { this->x = x; this->y = y; }
  void show() { cout << '(' << x << ',' << y << ')' << endl; } 
};

int main() {
  // 출력 0 10 20
  MyStack<int *> ipStack; 
  // int* 만을 저장하는 스택 
  int *p = new int[3];
  for(int i=0; i<3; i++) p[i] = i * 10; 
  // 0, 10, 20으로 초기화 
  ipStack.push(p); 
  // 포인터 푸시
  int *q = ipStack.pop(); 
  // 포인터 팝
  for(int i = 0; i < 3; i++) cout << q[i] << ' '; // 화면 출력 
  cout << endl;
  delete []p;

  // 출력 (2, 3)
  MyStack<Point> pointStack; 
  // Point 객체 저장 스택 
  Point a(2, 3), b;
  pointStack.push(a); 
  // Point 객체 a 푸시. 복사되어 저장 
  b = pointStack.pop(); 
  // Point 객체 팝
  b.show(); 
  // Point 객체 출력

  // 출력 (10, 20)
  MyStack<Point*> pStack; 
  // Point* 포인터 스택 
  pStack.push(new Point(10, 20)); 
  // Point 객체 푸시 
  Point* pPoint = pStack.pop(); 
  // Point 객체의 포인터 팝 
  pPoint->show(); 
  // Point 객체 출력

  // 출력 java c++
  MyStack<string> stringStack; //  문자열만 저장하는 스택
  string s = "c++";
  stringStack.push(s);
  stringStack.push("java");
  cout << stringStack.pop() << ' '; 
  cout << stringStack.pop() << endl;
}

// 출력 예시
// 0 10 20
// (2, 3)
// (10, 20)
// java c++
