#pragma once
#include<string>
using namespace std;
class User
{
private: 
	string TK;
	string MK;
public:
	void setTK(string t);
	void setMK(string m);
	string getTK();
	string getMK();
	User();
	~User();
};

