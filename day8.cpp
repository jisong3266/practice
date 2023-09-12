#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <fstream>
using namespace std;
//구조체, 클래스 연습
struct Rectangle{
  float width, height;
};

class Rectangle1{
  public:
    Rectangle1() {} //기본 생성자
    Rectangle1(float width1, float height1) 
    :m_width(width1), m_height(height1){}
    Rectangle1(const Rectangle1& other){
      m_width = other.m_width;
      m_height = other.m_height;
    }
    float area(){
      return m_width * m_height;
    }
  private:
    float m_width;
    float m_height;
};

int main(){
  float width, height;
  cout << "가로, 세로 길이를 입력하세요.";
  cin >> width >> height;
  Rectangle1 r(width,height);  
  cout << r.area() << endl;
  Rectangle1 rr = r;
  cout << rr.area() << endl;
  Rectangle1 a = rr;
  cout << a.area();  
} 
