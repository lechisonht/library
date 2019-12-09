#pragma once
#include "Kho_Sach.h"
class Tac_Gia :
	public Kho_Sach
{
private:
	string Ten;
public:
	void setDaTa();
	void Xuat_Lieu();
	void add(Kho_Sach D);
	void Them1(Kho_Sach D, Sach a);
	void Dong_Bo();
	Tac_Gia(string t);//t la ten tac gia
	Tac_Gia();
	~Tac_Gia();
};

