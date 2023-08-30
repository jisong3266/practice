#include <iostream>

int p1() {
  std::string name;
  int age;
  std::cout << "이름을 입력하세요.";
  std::cin >> name; 
  std::cout << "나이를 입력하세요.";
  std::cin >> age;
  std::cout << "안녕하세요! " << name << "님(" << age << ")세";
}
  int p2(){
    int age;
    while(1){
      std::cout << "나이를 입력하세요.";
      std::cin >> age;
      if(age >=1 && age <=7){
        std::cout << "유아\n";
      }
      else if(age >=8 && age <= 13){
        std::cout << "초등학생\n";
      } 
      else if(age >=14 && age <= 16){
        std::cout << "중학생\n";
      } 
      else if(age >=17 && age <= 19){
        std::cout << "고등학생\n";
      }
      else if(age >=20 && age <200){
        std::cout << "성인\n";
      } 
      else{
        std::cout << "나이가 너무 많습니다..!\n";
      }
    }
  }

  int p3(){
    std::string name;
    std::cout << "이름을 입력하세요.";
    std::cin >> name; 
    if( name == "홍길동"){
      std::cout << "남자\n";
    }
    else if(name == "성춘향"){
      std::cout << "여자\n";
    }
    else{
      std::cout << "모르겠어요\n";
    }
    int a, b;
    std::cout << "숫자를 입력하세요.";
    std::cin >> a;
    b = a % 5;
    b == 0 ? std::cout << a << "는 5의 배수입니다.\n" : std::cout << a << "는 5의 배수가 아니네요ㅜㅜ\n";
    int c =0, d =0;
    std::cout << "연산할 정수 두 개를 입력해 주세요.";
    std::cin >> c >> d;
    char e;
    std::cout << "연산자를 입력해주세요. (+ - * /)  ";
    std::cin >> e;
    switch(e){
      case '+':
        std::cout << "****연산결과 --->" << c + d << "\n";
        break;
      case '-':
        break;
        std::cout << "****연산결과 --->" << c - d << "\n";
      case '*':
        break;
        std::cout << "****연산결과 --->" << c * d << "\n";
      case '/':
        std::cout << "****연산결과 --->" << " 몫 :" <<c / d << " 나머지는" << c % d << "입니다\n";
        break;
    }
}
