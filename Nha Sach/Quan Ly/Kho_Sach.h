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
	Sach Seach(string t);//t la ten sach
	void Them(Sach s);
	void Xoa(string t);//t la ten sach
	Kho_Sach();
	~Kho_Sach();
};

