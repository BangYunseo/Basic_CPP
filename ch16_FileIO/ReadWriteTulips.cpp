#include <iostream>
#include <fstream>

using namespace std; 

int main(){
  const char* srcFile = "c:\\temp\\tulips.jpg";
  const char* destFile = "c:\\temp\\copytulips.jpg";

  ifstream fsrc(srcFile, ios::in | ios::binary);
  if(!fsrc){ // 열기 실패 검사
    cout << srfFile << "열기 오류" << endl;
    return 0;
  }

  ofstream fdest(destFile, ios::out | ios::binary);
  if(!fdest){ // 열기 실패 검사
    cout << destFile << " 열기 오류" << endl;
    return 0;
  }

  // 소스 파일에서 목적 파일로 복사
  char buf[1024];
  while(!src.eof()){ // 파일 끝까지 읽기
    fsrc.read(bug, 1024);
    // 최대 1024바이트를 읽어 배열 s에 저장
  
    int n = fsrc.gcount();
    // 실제 읽은 바이트 수 알아냄
  
    fdest.write(buf, n);
    // 읽은 바이트 수만큼 버퍼에서 목적 파일에 기록
  }
  cout << srcFile << "을 " << destFile << "로 복사 완료" << endl;
  fsrc.close();
  fdest.close();
}

// c:\temp\tulips.jpg을
// c:\temp\copytulips.jpg로 복사 완료