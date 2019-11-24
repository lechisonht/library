#pragma once
#include "Sach.h"
#include <iostream>
using namespace std;
class Don_Hang :
	public Sach
{
private: 
	int sl;
public:
	void setsl(int n);
	int getsl();
	int Tien();
	void xuat();//override lai hom o class cha "Sach"
	//Don_Hang& operator=(const Don_Hang&);
	Don_Hang(Sach S, int n);//n la so luong
	Don_Hang();
	~Don_Hang();
};

