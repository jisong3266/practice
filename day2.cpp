#include <iostream>
//반복문 예제
//1.구구단 출력
int p4(){
  std::cout << "1~9단 출력\n";
  /*for(int i=1;i<10;i++){
    std::cout <<"--- "<< i << "단---\n";
    for(int j=1;j<10;j++){
      std::cout << i <<" * " << j << " = " << i*j << "\n";
      }
    }*/
  int i = 1;
  while(i < 10){
    int j = 1;
    std::cout <<"--- "<< i << "단---\n";
    while(j < 10){
      std::cout << i <<" * " << j << " = " << i*j << "\n";
      j++;
    }
    i++;
  }
}
//2.1부터 n까지 합 구하기
int p5(){
  int n,sum = 0;
  std::cout << "1부터 n까지의 합 구하기\n숫자(양의 정수)를 입력하세요: "; 
  std::cin >> n;
  /*for(int i =1;i<n+1;i++){
    sum += i;
  }*/
  int i = 1;
  while(i < n+1){
    sum += i;
    i++;
  }
  std::cout << "1부터 " << n << "까지의 합 : " << sum;
}//3.입력한 숫자 더하기
int p6(){
  int sum = 0;
  std::cout << "사용자가 입력한 숫자 더하기\n";
  while(1){
    int n;
    std::cout << "숫자를 입력하세요 (0: exit) : ";
    std::cin >> n;
    sum += n;
    if(n == 0){
      break;
    }
  }
  std::cout << "사용자가 입력한 수의 합은 : " << sum;
}
//4.입력한 숫자만큼 별찍기
int p7(){
  int n;
  std::cout << "input : ";
  std::cin >> n;
  std::cout << "output : \n";
  for(int i=1;i<n+1;i++){
      for(int k = 1; k <i+1; k++){
          std::cout<< "*";
      }
    std::cout << "\n";
    }
  }
//함수 예제
//1.사칙연산 함수 만들기
int add(int a,int b){
  return a+b;
}
int sub(int a,int b){
  if(a > b){
    return a-b;
  }
  else{
      return b-a;
  }
}
int mul(int a,int b){
  return a*b;
}
float divide(int a,int b){
  return float(a)/float(b);
}
int p8(){
  int a,b;
  std::cout << "두 정수를 입력하세요";
  std::cin >> a >> b;
  std::cout <<"add : "<< add(a,b) <<"\n";
  std::cout <<"sub : " << sub(a,b) <<"\n";
  std::cout <<"mul : "<< mul(a,b) <<"\n";
  std::cout <<"divide : "<< divide(a,b)<< "\n";
}
//짝수 홀수 판별함수
std::string det(int a){
  if(a % 2 == 0){
    return "짝수";
  }
  else{
    return "홀수";
  }
}
//가장 큰 수 판별함수
float max(float a, float b, float c){
  float box;
  a <= b ? box = b : box = a;   
  if(box <= c){
    return c;
  }  
  else{
    return box;
  }
}
//가장 작은 수 판별함스
float min(float a, float b, float c, float d){
  float box1, box2;
  a <= b ? box1 = a : box1 = b;   
  c <= d ? box2 = c : box2 = d;   
  return (box1 <= box2 ? box1 : box2);
}
int p9(){
  int n, a,b,c;
  std::cout << "정수를 입력하세요";
  std::cin >> n;
  std::cout << det(n) <<"\n";
  std::cout << "세개의 수를 입력하세요";
  std::cin >> a >> b >> c;
  std::cout << max(a,b,c); 
  int a1,b1,c1,d1;
  std::cout << "정수를 입력하세요";
  std::cin >> a1 >> b1 >> c1 >> d1;
  std::cout << min(a1,b1,c1,d1); //min을 두번써서 해도 됨 min(min(a1,b1),min(c1,d1))
}
//배열예제
int p10(){
  std::string city[5] = {"대한민국","중국","미국","일본","캐나다"};
  for(std::string c : city){
    std::cout << c << std::endl;
  }
}
int p11(){
  std::string city[5];
  std::cout << "입력\n";
  for(int i =0; i < sizeof(city)/sizeof(city[0]); i++){
    std::cin >> city[i];
  }
  std::cout << "출력\n";
  for(std::string c2 : city){
    std::cout << c2 << std::endl;
  }
}
int main(){
  int grade[5];
  float ave = 0;
  for(int i =1;i<6; i++){
      std::cout << i << "번학생의 성적을 입력하세요: ";
      std::cin >> grade[i];
      ave += grade[i];
  }
  std::cout << "성적 평균 : " << ave / 5;
}