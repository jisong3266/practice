#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <fstream>
#include "snack.h"
#ifndef CANDY_H
#define CANDY_H
using namespace std;

class Candy : public Snack {
	string flavor;
public:
	Candy(string flavor);
	virtual void show_info();
};
#endif
