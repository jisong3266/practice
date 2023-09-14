#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <fstream>

using namespace std;

class Person1 {
public:
  virtual void sleep() = 0;
};
class Student1 : public Person1 {
public:
void sleep() { 
  cout << "10시 취침" << endl;
  }
};
int main1(){
  Student1 s;
  s.sleep();
}

class Shape{
protected:
  virtual void draw() = 0;
};
class Circle : public Shape{
public:
  void draw(){
    cout << "Circle" << endl;
  }
};
class Rect : public Shape{
public:
  void draw(){
    cout << "Rectangle" << endl;
  }
};
class Triagle : public Shape{
public:
  void draw(){
    cout << "Triangle" << endl;
  }
};
int main2(){
  Circle c;
  Rect r;
  Triagle t;
  c.draw();
  r.draw();
  t.draw();
}
class Snack {
protected:
	int price;
	string name;
	string maker;
public:
	Snack() { }
	string getName() {
		return name;
	}
	virtual void showInfo() { //virtual 안하면 업캐스팅 해도 여기에 있는 결과 출력됨
		cout << name << " 과자입니다~" << endl;
	}
};
class Candy : public Snack{
public:
  string taste;
  Candy(string t, int p, string n, string c) {
    name = n;
    taste = t;
    price = p;
    maker = c;
  }
  void showInfo() {
		cout << taste <<"맛입니다~" << endl;
	}
};
class Chocolate : public Snack{
public:
  string shape;
  Chocolate(string s, int p, string n, string c){
    name = n;
    shape = s;
    price = p;
    maker = c;
  }
  void showInfo() {
		cout << shape << "모양입니다~" << endl;
	}
};
int main3(){
  Candy c1("a",1,"신호등","c");
	Candy c2("aa",2 ,"츄파", "cc");
	Chocolate ch1("aaa",3, "가나","ccc");
	Chocolate ch2("aaaa",4, "키캣","cccc");
  Snack snackBasket[4] = {c1,c2,ch1,ch2};
  for (Snack snack : snackBasket) {
		cout << snack.getName() << endl;
    snack.showInfo(); // snack에서 설정한 showInfo()가 나옴
	}
}
int main4(){
  Candy c1("a",1,"신호등","c");
	Candy c2("b",2 ,"츄파", "cc");
	Chocolate ch1("c",3, "가나","ccc");
	Chocolate ch2("d",4, "키캣","cccc");
  Snack *snackBasket[4] = {&c1,&c2,&ch1,&ch2}; //포인터의 배열
  //Candy *p1 = new Candy("자두", "신호등") = Candy *p1 = &c1 같은것 Snack * = Candy *, Snack * = Candy
  //업캐스팅
  for (Snack *snack : snackBasket) {
		//cout << snack->getName() << endl;
    snack->showInfo(); // Candy, Chocolate 의 showInfo()로 나옴
	} 
  //다운캐스팅 (snack자리에 candy가 있으니까)
  //((Candy*)snackBasket[0])->showInfo();
  cout << ((Candy*)snackBasket[0])->taste<<endl;
  cout << ((Candy*)snackBasket[1])->taste<<endl;
  cout << ((Chocolate*)snackBasket[2])->shape<<endl;
  cout << ((Chocolate*)snackBasket[3])->shape<<endl;
}
class Person {
public:
	virtual void intro() {
		cout << "사람입니다~" << endl;
	}
};

class Student : public Person {
	string name;

public:
	Student(string name) {
		this->name = name;
	}
	void intro() {
		cout << name << "학생입니다." << endl;
	}

	void learn() {
		cout << "배웁니다." << endl;
	}
};

class Teacher : public Person {
	string name;

public:
	Teacher(string name) {
		this->name = name;
	}
	void intro() {
		cout << name << "선생입니다." << endl;
	}

	void teach() {
		cout << "가르칩니다." << endl;
	}
};
int main5(){
  Person* pList[3];
  string names[3];
  cout << "3명의 이름을 입력해주세요. (선생님, 학생, 학생)" << endl;
  cin >> names[0] >> names[1] >> names[2];
  Teacher t(names[0]);
  Student s1(names[1]);
  Student s2(names[2]);
  pList[0] = &t;
  pList[1] = &s1;
  pList[2] = &s2;
  for(auto p : pList){
    p ->intro();
  }
  ((Teacher*)pList[0]) -> teach();
  ((Student*)pList[1]) -> learn();
  ((Student*)pList[2]) -> learn();
}
class Snack {
protected:
	int price;
	string name;
	string maker;
	static int count;
public:
	Snack(){ count++; }
	virtual ~Snack() { count--; }
	static int get_count() {
		return count;
	}
	string get_name() {
		return name;
	}
	virtual void show_info() {
		cout << "과자입니다~" << endl;
	}
};

int Snack::count = 0;

class Candy : public Snack {
	string flavor;
public:
	Candy(string flavor) {
		this->price = 200;
		this->name = "사탕";
		this->maker = "농심";
		this->flavor = flavor;
	}
	void show_info() {
		cout << flavor << "맛 사탕" << endl;
	}
};

class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape) {
		this->price = 1000;
		this->name = "초콜릿";
		this->maker = "롯데";
		this->shape = shape;
	}

	void show_info() {
		cout << shape << "모양 초콜릿" << endl;
	}
};
int main(){
  int n;
  cout << "과자 바구니에 추가할 간식을 고르시오( 1: 사탕 2: 초콜릿, 0: 종료)";
  cin >> n;
  int i=0;
  Snack *snack[100];
  while(n!= 0){
    switch(n){
    case 1:
      {string flavor;
      cout << "맛을 입력하세요 : ";
      cin >> flavor;
      Candy c(flavor);
      snack[i] = &c;
      i++;
      cout << "과자 바구니에 추가할 간식을 고르시오( 1: 사탕 2: 초콜릿, 0: 종료)";
      cin >> n;
      break;}//{}있어야 선언가능
    case 2: 
      { string shape;
        cout << "모양을 입력하세요 : ";
        cin >> shape;
        Chocolate ch(shape);  
        snack[i] = &ch;
        i++;
        cout << "과자 바구니에 추가할 간식을 고르시오( 1: 사탕 2: 초콜릿, 0: 종료)";
        cin >> n;
        break;}
    default:
        break;
  }
  }
  cout << "과자 바구니에 담긴 간식의 개수는" <<Snack::get_count() <<"개 입니다" <<endl;
  cout << "간식 확인하기!";
  for(int j=0;j<i;j++){
    snack[i]->show_info();
  }
}