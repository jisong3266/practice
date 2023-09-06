#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>
#include <sstream>
using namespace std;
int d51(){
  string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";
  cout << s.size() << endl;
  cout << s[100] <<endl;
  cout << s.find("two")<<endl;
  cout << s.find("two",s.find("two")+1) << endl;
}
int d52(){
  string s1, s2, s3;
  cout << "입력";
  cin >> s1;
  cin >> s2;
  getline(cin,s3);
  int a =0;
  while(1){
  for(int i=0;i<s1.size();i++){
    a = 0;
    if(!isdigit(s1[i]) || !isdigit(s2[i])){
      a++;
      cout << "숫자를 입력하세요";
      cin >> s1;
      cin >> s2;
      getline(cin,s3);
    }
  }
    if(a ==0){
      break;
    }
  } 
  s3 = s1;
  cout << s1.append(s2) << endl;
  cout << stoi(s3) + stoi(s2);
}
int d53(){
  string s1, s2, s3;
  cout << "입력";
  cin >> s1;
  cin >> s2;
  getline(cin,s3);
  int a = 0;
  stringstream ss1(s1);
  stringstream ss2(s2);
  char a1, a2;
  while(1){
    while (ss1 >> a1 && ss2 >> a2){
      a = 0;
      if(!isdigit(a1) || !isdigit(a2)){
        a++;
        cout << "숫자를 입력하세요";
        cin >> s1;
        cin >> s2;
        getline(cin,s3);
        stringstream ss1(s1);
        stringstream ss2(s2);
      }
    }
      if(a == 0){
        break;
      }
    }
  s3 = s1;
  cout << s1.append(s2) << endl;
  cout << stoi(s3) + stoi(s2);
}

int d54(){
  string s = "Codingon";
  string ss = "oooo";
  s[0] = tolower(s[0]);
  cout << s << endl;
  cout << s.substr(2,4) <<endl;
  cout << s.replace(2,4,ss) <<endl;
  cout << s.erase(1,5);
}