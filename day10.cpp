#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <fstream>
#include "snack.h"
#include "candy.h"
using namespace std;

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
static string last;

class Candy : public Snack {
	string flavor;
public:
	Candy(string flavor) {
		this->price = 200;
		this->name = "사탕";
		this->maker = "농심";
		this->flavor = flavor;
	}
	virtual void show_info() {
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

	virtual void show_info() {
		cout << shape << "모양 초콜릿" << endl;
	}
};
static int sum = 0;
class util{
public:
  static int add(){
    sum++;
    return sum;
  }
};
int main(){
  int n;
  cout << "과자 바구니에 추가할 간식을 고르시오( 1: 사탕 2: 초콜릿, 0: 종료)";
  cin >> n;
  vector<Snack*> snackBasket; 
  while(n!= 0){
    switch(n){
    case 1:
      {string flavor;
      cout << "맛을 입력하세요 : ";
      cin >> flavor;
      Candy* c = new Candy(flavor); 
      snackBasket.push_back(c);
      //Candy cc(flavor);
      //snackBasket.push_back(&cc); 이렇게 하면 case문 지나가면 삭제됨
      cout << "과자 바구니에 추가할 간식을 고르시오( 1: 사탕 2: 초콜릿, 0: 종료)";
      util::add();
      cin >> n;
      break;}//{}있어야 선언가능
    case 2: 
      { string shape;
        cout << "모양을 입력하세요 : ";
        cin >> shape;
        Chocolate* ch = new Chocolate(shape);  
        snackBasket.push_back(ch);
        util::add();
        cout << "과자 바구니에 추가할 간식을 고르시오( 1: 사탕 2: 초콜릿, 0: 종료)";
        cin >> n;
        break;}
    default:
        if(n < 0 || n > 2){
          cout << "0~2 사이의 숫자를 입력하세요" << endl;
        }
         cout << "과자 바구니에 추가할 간식을 고르시오( 1: 사탕 2: 초콜릿, 0: 종료)";
        cin >> n;
        break;
  }
  }
  cout << "과자 바구니에 담긴 간식의 개수는" << Snack::get_count() <<"개 입니다\n" << "간식 확인하기!" <<endl;
  
   for(Snack* snack : snackBasket){
      snack -> show_info();
      last = ((Candy*)snack)->get_name();
      delete snack;
  }
  cout << "마지막으로 추가한 간식의 종류 : " << last << endl;
  cout << "간식의 개수 : " << sum << endl;
}