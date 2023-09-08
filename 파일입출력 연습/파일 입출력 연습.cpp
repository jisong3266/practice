#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <fstream>
int d71(){
  ifstream file("hello.txt");
  ofstream file2("Output.txt");
  vector<string >file_str;
  string line;
  int i=0;
	while (getline(file, line)) {
    // get_line() file의 내용을 한 줄씩 읽어옴
		file_str.insert(file_str.begin()+i,line + "\n");
    i++;
	}
	file.close();
  file.open("Output.txt");
  for(vector<string>::reverse_iterator it = file_str.rbegin(); it !=file_str.rend();it++){
      file2 << *it;
  } 
  file2.close();
}
int d72(){
  ifstream member("member.txt");
  ofstream member2("member.txt");
  vector<string >file_str;
  string line;
  int j = 0;
  cout << "3명의 회원에 대한 이름 비밀번호를 순차적으로 입력하세요." << endl;
  string n,p;
  for(int i=1;i<4;i++){
    cout << i << "번째 회원 : ";
    cin >> n >> p;
    member2 << n << " " << p << endl;
  }
  while (getline(member, line)) {
    // get_line() file의 내용을 한 줄씩 읽어옴
		file_str.insert(file_str.begin()+j,line + "\n");
    j++;
	}
  for(vector<string>::iterator it = file_str.begin(); it != file_str.end(); it++){
    cout << *it;
  }
  member.close();
}
int main(){
  ifstream member("member.txt");
  ofstream number("member_tel.txt");
  vector<string >file_str;
  string line;
  string n, p;
  string pn;
  int count =0;
  while(1){
    cout << "이름을 입력하세요 : ";
    cin >> n;
    cout << "비번을 입력하세요 : ";
    cin >> p;
   // string c = n + " " + p;
    while (getline(member, line)) {
    // get_line() file의 내용을 한 줄씩 읽어옴
		  file_str.push_back(line + "\n");
	}
    count = 0;
    for(int i=0;i<file_str.size();i++){
      if(file_str[i].find(p) == 1 + n.size() && file_str[i].find(n) ==0){
      count ++;
    }
  }
    if(count >0){
      cout << "로그인 성공" << endl;
      cout << "전화번호를 입력하세요 : ";
      cin >> pn;
      number << n << pn << endl;
      
    }
    else{
      cout << "로그인 실패" << endl;
    }
  }
}