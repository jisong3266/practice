#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
int d41(){
  int x,y;
  cout << "행과 열의 수를 입력하세요: ";
  cin >> x >> y;
  int **arr = new int *[x];
  int *sum1 = new int[x];
  int *sum2 = new int[y];
  for(int i =0; i<x;i++){
    arr[i] = new int[x];
  }
  cout << "행렬 원소를 입력하세요: \n";
  for(int i =0;i<x;i++){
    for(int j=0;j<y;j++){
      cin >> arr[i][j];
      sum2[i] += arr[i][j];
    }
  }
  for(int i =0;i<x;i++){
    for(int j=0;j<y;j++){
      sum1[i] += arr[j][i];
    }
  }
  /*for(int i =0; i <x; i++){
      for(int j =0;j<y;j++){
        rowsum[i] += arr[i][j];
        colsum[j] += arr[i][j];
  }
  }*/ 
  cout << "각 행의 합 : \n";
  for(int i=0;i<y;i++){
    cout << "행" << i+1 << ": " << sum2[i] << "\n";
  }
  cout << "각 열의 합 : \n";
  for(int i=0;i<x;i++){
    cout << "열" << i+1 << ": " << sum1[i] << "\n";
  }
  for (int i = 0; i < x; i++){
    delete[] arr[i];
  }
  delete[] arr;
  delete[] sum1;
  delete[] sum2;
}

int d42(){
  vector<int> v, v1;
  int box,num,x;
  cout << "5개의 정수를 입력하세요 : ";
  for(int i =0; i<5;i++){
    cin >> x;
    v.push_back(x);
  }
  cout << "벡터 크기: " << v.size() << "\n";
  cout << "벡터의 모든 원소: ";
  for(int i =0; i<5;i++){
    cout << v[i] << " ";
  }
  for(int i =0;i<4;i++){
    if(v[i] >= v[i+1]){
      box = v[i];
    }
    else{
      box = v[i+1];
    }
  }
  cout << "\n가장 큰 값 : " << box;
  cout << "\n모든 원소를 두배 :" << "\n";
  for(int i =0; i<5;i++){
    v1.push_back(v[i]*2);
    cout << v1[i] << " ";
  }
  cout << "\n삭제할 인덱스를 입력하세요: ";
  cin >> num;
  v.erase(v.begin()+num);
  for(int i =0; i<4;i++){
    cout << v[i] <<" ";
  }
  cout << "\n추가할 인덱스를 입력하세요: ";
  cin >> num;
  v.insert(v.begin()+num,100);
  for(int i =0; i<5;i++){
    cout << v[i] << " ";
  }
}
int d43(){
  vector<int> v;
  int n;
  cout << "정수 5개를 입력하세요 : ";
  for(int i=0; i<5;i++){
    cin >> n;
    v.insert(v.begin()+i,n);
  }
  for(int i = 0; i < v.size(); i++){
      if(v[i] % 2 != 0){
        v.erase(v.begin()+i);
      }
  }
  for(int i =0; i< v.size();i++){
      cout << v[i] << " ";
  }
} 
int programmers() {
    int answer = 0;
    int box = 0;
    vector<int> citations = {3,0,6,1,5};
    vector<int> count;
    int b = citations.size();
    int a;
    sort(citations.begin(), citations.end());
    for(int i = 0; i<citations.size();i++){
        if(b >= citations[i]){
          a = b - citations[i];
        }
      else{
        a = citations[i]-b;
      }
      count.insert(count.begin()+i,a);
    }
    for(int i=0; i<citations.size();i++){
        if(count[i] <= citations[i]){
            if(count[i] > box){
                box = count[i];
            }
        }
    }
    return box;
}
int d44(){
  list<int> myList = {5,4,3,4,2,1,1};
  list<int> my1 = {0};
  list<int> my2 = {6,7};
  list<int>::iterator it;
  int count = 0;
  for(it = myList.begin();it != myList.end();it++){ 
      if(*it == 4){
        count++;
      }
    }
  cout << count << "\n";
  myList.sort();
  for(it = myList.begin();it != myList.end();it++){ 
      cout << *it << " ";
  }
  cout << "\n";
  myList.unique();
  for(it = myList.begin();it != myList.end();it++){ 
      cout << *it << " ";
  }
  cout << "\n";
  myList.splice(myList.end(), my2);
  for(it = myList.begin();it != myList.end();it++){ 
      cout << *it << " ";
  }
  cout << "\n";
  my1.merge(myList);
  for(it = my1.begin();it != my1.end();it++){ 
      cout << *it << " ";
  }
}
int main(){
  int a[5] = {1,2,3,4,5};
  for(int i = 3; i >=0; i--){
    a[i+1] = a[i]; 
  }
  /* int temp;
  int a, b;
  temp = a;
  a = b;
  b = temp; */
  a[0] = 0;
  for(int i = 0; i<5;i++){
    cout << a[i] << " ";
  }
}
