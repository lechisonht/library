#pragma once
#include "Kho_Sach.h"
class NXB :
	public Kho_Sach
{
private: 
	string Ten;
public:
	void setDaTa();
	void Xuat_Lieu();
	void add(Kho_Sach D);
	//ham xoa dung lai cua class cha
	void Them1(Kho_Sach D,Sach s);
	void Dong_Bo();
	NXB(string t);//t la ten cua NXB
	NXB();
	~NXB();
};

