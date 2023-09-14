#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <fstream>
#ifndef SNACK_H
#define SNACK_H
using namespace std;
class Snack {
protected:
	int price;
	string name;
	string maker;
	static int count;
public:
	Snack();
	virtual ~Snack();
	static int get_count();
	string get_name();
	virtual void show_info(); 
};


static int sum = 0;
class util{
public:
  static int add(){
    sum++;
    return sum;
  }
};
#endif