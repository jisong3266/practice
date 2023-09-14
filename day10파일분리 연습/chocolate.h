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
#ifndef CHOCOLATE_H
#define CHOCOLATE_H
using namespace std;

class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape);
	virtual void show_info();
};
#endif