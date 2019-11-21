#pragma once
#include"Sach.h"
#include<vector>
#include<iostream>
using namespace std;
class Kho_Sach
{
private:
	vector<Sach> K;
public:
	void Nhap_Lieu();
	void Xuat_Lieu();
	Kho_Sach();
	~Kho_Sach();
};

