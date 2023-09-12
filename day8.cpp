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
class Rectangle1{
  public:
    Rectangle1() {} //기본 생성자
    Rectangle1(float width1, float height1) 
    :m_width(width1), m_height(height1){}
    Rectangle1(const Rectangle1& other){
      m_width = other.m_width;
      m_height = other.m_height;
    }
    float getwidth(){
      return m_width;
    }
    float getheight(){
      return m_height;
    }
    void setwidth(float width){
      this -> m_width = width;
    }
    void setheight(float height){
      this -> m_height = height;
    }
    float area(){
      return m_width * m_height;
    }
  private:
    float m_width;
    float m_height;
};

int main1(){
  float width, height;
  cout << "가로, 세로 길이를 입력하세요.";
  cin >> width >> height;
  Rectangle1 r(width,height);  
  cout << r.area() << endl;
  r.setwidth(width);
  r.setheight(height);
  cout << "가로 세로 길이는 : " << r.getwidth() << " " << r.getheight();
} 

class character{
  public :
    string name;
    int level=0, item_num =0;
  void setname(string name){
    this -> name = name;
  }
  string getname(){
    return name;
  }
  void level_up(){
      level ++;
    }
  int getlevel(){
    return level;
    }
  void add_item(){
      this ->item_num ++;
    }
  void use_item(){
      item_num --;
  }
  int getitem_num(){
      return item_num;
    }
};

int main2(){
  string name;
  int n;
  character ch;
  cout << "이름을 입력하세요 :";
  cin >> name;
  ch.setname(name);
  cout << ch.getname() << " 캐릭턱가 생성되었습니다.\n";
  while(n != 0){
    cout << "어떤 동작을 실행하시겠습니까? (0: 종료)";
  cin >> n;
    switch(n){
    case 0:
      cout << "게임 종료";
      break;
    case 1:
      cout << "새 이름을 입력하세요 :";
      cin >> name;
      ch.setname(name);
      cout << "new name : " << ch.getname() << endl;
      break;
    case 2:
      ch.level_up();
      cout << "level up!!\n" << "현재 레벨 : " << ch.getlevel() <<endl;
      break;
    case 3:
      ch.add_item();
      cout << "아이템을 얻었습니다!\n" << "현재 아이템 개수 : " << ch.getitem_num() <<endl;
      break;
    case 4:
      if(ch.getitem_num() == 0){
        cout << "사용 가능한 아이템이 없습니다!" << "현재 아이템 개수 : 0";
      }
      else{
        ch.use_item();
        cout << "아이템을 사용했습니다!\n" << "현재 아이템 개수 : " << ch.getitem_num()<<endl;
      }
      break;
    case 5:
      cout << "이름 : " << ch.getname() << endl << "레벨 : " << ch.getlevel() << endl << "현재 아이템 개수 : " << ch.getitem_num() << endl;
  } 
  }
}
class Shape{
  public :
    int n,width;
    void printInfo(){
      cout << "변의 개수 : " << n << " 밑변의 길이 : " << width << endl;
  }
};
class Rectangle : public Shape{
  public :
   int length;
   Rectangle(int a, int b, int c) : length(b){
     n = c;
     width = a;
   }
   int r_area(){
     printInfo();
     cout << "넓이 : ";
     return width * length;
  }
  void printInfo(){ //오버라이딩
       cout << "사각형의 넓이는 " << width * length << endl;;
     }
 void printInfo(int w, int h){ //오버로딩
    cout << "사각형의 넓이는 " << w * h << endl;
  }
};
class Triangle : public Shape{
  public:
    int height;
    Triangle(int a, int b, int c) : height(b){ 
      width = a;
      n = c;
    }
    int t_area(){
      printInfo();
      cout << "넓이 : ";
      return 0.5 * width * height;
  }
    void printInfo(){
       cout << "삼각형의 넓이는 " << width * height * 0.5 << endl;
     }
  void printInfo(int w, int h){
    cout << "삼각형의 넓이는 " << w * h * 0.5 << endl;
  }
};

int main(){
  Rectangle r(5,6,4);
  r.printInfo(4,5);
  Triangle t(6,7,3);
  t.printInfo(4,5);
} 