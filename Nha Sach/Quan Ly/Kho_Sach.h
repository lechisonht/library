#pragma once
#include"Sach.h"
#include<vector>
#include<iostream>
#include<fstream>
using namespace std;
class Kho_Sach
{
protected:
	vector<Sach> K;
public:
	void Nhap_Lieu();
	void Xuat_Lieu();
	void setData();
	void Dong_Bo();
	Sach Seach(string t);//t la ten sach
	void add();
	void Them(Sach s);
	void Xoa(string t);//t la ten sach
	void Sua(string t);//sua sach;
	Kho_Sach();
	~Kho_Sach();
};

