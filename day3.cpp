#include <iostream>
#include <iomanip>
#include <vector>
//동적할당 연습
int d31(){
  int n1, n2;
  std::cout << "x를 입력하세요: ";
  std::cin >> n1;
  std::cout << "y를 입력하세요: ";
  std::cin >> n2;
  if(n1 || n2 <= 0){
    std::cout << "x와 y모두 양수를 입력해주세요.\n";
    std::cout << "x를 입력하세요: ";
    std::cin >> n1;
    std::cout << "y를 입력하세요: ";
    std::cin >> n2;
  }
  int **arr = new int *[n1];
  int k = 1;
  for (int i = 0; i < n1; i++)
  {
    arr[i] = new int[n1];
  }
  for(int i =0; i < n1; i++){
    for(int j = 0; j <n2; j++){
      arr[i][j] = k;
      k++;
    }
  }
  for(int i =0; i < n1; i++){
    for(int j = 0; j <n2; j++){
      std::cout << std::setw(3) << arr[i][j] << " ";
    }
    std::cout << "\n";
  }
  for(int i = 0;i < n1;i++){
    delete[] arr[i];
  }
  delete[] arr;
}
int d32(){
  int n;
  double sum = 0;
  std::cout << "학생 수를 입력하세요 : ";
  std::cin >> n;
  int *arr = new int[n];
  for(int i=0;i<n;i++){
    int score;
    std::cout << i+1 << "번째 학생의 성적을 입력하세요: ";
    std::cin >> score;
    arr[i] = score;
    sum += score;
  }
    std::cout << "성적 평균 : " << sum / n << "\n";
  delete[] arr;
} 
//벡터 연습
int d33(){
  std::vector<std::vector<int>>arr;
  int x,y,k=1;
  std::cout << "x를 입력하세요: ";
  std::cin >> x;
  std::cout << "y를 입력하세요: ";
  std::cin >> y;
  if(x || y <= 0){
    std::cout << "x와 y모두 양수를 입력해주세요.\n";
    std::cout << "x를 입력하세요: ";
    std::cin >> x;
    std::cout << "y를 입력하세요: ";
    std::cin >> y;
  }
  arr.assign(x,std::vector<int>(y));
  for(int i =0; i < x; i++){
    for(int j = 0; j <y; j++){
      arr[i][j] = k;
      k++;
    }
  }
  for(int i =0; i < x; i++){
    for(int j = 0; j <y; j++){
      std::cout << std::setw(3) << arr[i][j] << " ";
    }
    std::cout << "\n";
  }
}
//sort, unique함수 써도됨 #include algorithm
int d35(){
  std::vector<int> myVector = {10,20,30,20,10,10,50};
  for(int i=0; i<myVector.size();i++){
    for(int k=i+1;k<myVector.size();k++){
      if(myVector[i] == myVector[k]){
      myVector.erase(myVector.begin()+k);
      //myVector.insert(myVector.begin(),0);
      k--;
      }
    }
  }
  //myVector.erase(myVector.begin(),myVector.begin() + j);
  std::cout << "결과 : {";
  for(int i =0; i<myVector.size();i++){
    if(i == myVector.size()-1){
      std::cout << myVector[i];
    } 
    else{
      std::cout << myVector[i] << ", ";
    }
  }
  std::cout << "}";
}
namespace seoul{
  int n;
  std::string l;
}
namespace busan{
  int n;
  std::string l;
}
using namespace busan;
int main(){
  std::cout << "서울의 지역번호와 랜드마크를 입력하세요 : ";
  std::cin >> seoul::n >> seoul::l;
  std::cout << "부산의 지역번호와 랜드마크를 입력하세요 : ";
  std::cin >> n >> l;
  std::cout << "서울의 지역번호와 랜드마크 : " << seoul::n << " " << seoul::l << "\n";
  std::cout << "부산의 지역번호와 랜드마크 : " << n << " " << l << "\n";
}
