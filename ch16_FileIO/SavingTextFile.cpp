#include <iostream> 
#include <fstream> 

using namespace std;

int main() {
  char name[10], dept[20]; 
  int sid;
  // 키보드로부터 읽기 
  
  cout << "이름 >> ";
  cin >> name; 
  // 키보드에서 이름 입력 
  
  cout << "학번 >> ";
  cin >> sid; 
  // 키보드에서 학번 입력 
  
  cout << "학과 >> ";
  cin >> dept; 
  // 키보드에서 학과 입력

  // 파일 열기. student.txt 파일을 열고, 출력 스트림 생성 
  ofstream fout("c:\\temp\\student.txt"); 
  if(!fout) { // 열기 실패했는지 검사
    cout << "c:\\temp\\student.txt 파일을 열 수 없습니다. "; 
    return 0;
}
  // 파일 쓰기
  fout << name << endl; // name 쓰기
  fout << sid << endl; // sid 쓰기
  fout << dept << endl; // dept 쓰기
  
  fout.close(); // 파일 닫기
}

// 출력 예시
// 이름 >> kitae 
// 학번 >> 20131111 
// 학과 >> computer
