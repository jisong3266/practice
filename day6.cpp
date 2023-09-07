#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>
#include <sstream>
#include <algorithm>

using namespace std;
//약수의 합
int solution1(int n) {
    int answer = 0;
    for(int i= 1; i<=n; i++){
        if(n % i == 0){
            answer += n;
          std::cout << n << std::endl;
        }
    }
    return answer;
}

int solution3(int n)
{
    int answer = 0;
    while(n !=0){
        answer += n % 10;
        n /= 10;
    }
  cout << answer;
    return answer;
}

int solution4(vector<int> sides) {
    int answer = 2;
    int box =0;
    int sum = 0;
    for(int i=0;i<2;i++){
        if(sides[i] > sides[i+1]){
            box = sides[i];
        }
        else{
            box = sides[i+1];
        }
    }
    for(int i=0;i<3;i++){
      sum += sides[i];
    }
    if(box < sum- box){
        answer = 1;
    }
  cout << sum <<"XDFd\n";
    return answer;
}
int solution5(vector<int> numbers) {
    int answer = 0;
    int a;
    for(int i=0; i<10;i++){
      answer += i;
    }
    for(int j =0;j<numbers.size();j++){
      answer -= numbers[j];
        }
    return answer;
}    
//substr 쓰면 간단함
int solution6(string t, string p) {
    int answer = 0;
    int j = 0;
    string ab;
    for(int i=0;i<t.size();i++){
      ab = "";
      j = i;
      for(int a = 0; a < p.size(); a++ ){
        ab += t[j];
        j++;
        if(j == t.size()){
          break;
        }
      }
      if(ab.size() % p.size() == 0){
        cout << ab << endl;
        if(stol(ab) <= stol(p)){
        answer ++;
      }
      }
    }
  cout << answer;
    return answer;
}
int main(){
  solution2({"ayaye", "uuuma", "ye", "yemawoo", "ayaa"});  
}