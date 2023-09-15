#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;
//난수생성 예제
int main1(){
  srand(time(NULL));
  int i = 0;
  vector<int> nn;
  int n = rand();
  nn.push_back(n % 45 + 1);
  while(i != 5){
    n = rand();
    if(n % 45 + 1 != nn[i]){
       nn.push_back(n % 45 + 1);
       i++;
    }
  } 
  cout << "당첨번호 : ";
  for(int i =0; i<6; i++){
    cout << nn[i] << " ";
  } 
}
int main2() {
	
	std::srand(time(NULL));
	
	int lotto[6];
	int check[46] = {0, };
	int num;
	for (int i = 0; i < 6; i++) {
		do {
			num = std::rand() % 45 + 1;
		} while (check[num] == 1);
		lotto[i] = num;
		check[num] = 1;
	}

	for (auto n : lotto) {
		cout << n << " ";
	}
	return 0;
}
