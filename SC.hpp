#pragma once
#include<iostream>
#include<fstream>
#include<iomanip>
#include<list>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

struct CSet{
  int c;
  int index; // unit cost
  vector<int> elements;
};
int input_graph(vector<CSet>&, string);
double Solution(vector<CSet>&, int, vector<int>&);
