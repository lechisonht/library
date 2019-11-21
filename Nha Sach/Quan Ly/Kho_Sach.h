#pragma once
#include"Sach.h"
#include<vector>
#include<iostream>
#include<fstream>
using namespace std;
class Kho_Sach
{
private:
	vector<Sach> K;
public:
	void Nhap_Lieu();
	void Xuat_Lieu();
	void setData();
	Sach Seach(string s);
	Kho_Sach();
	~Kho_Sach();
};

