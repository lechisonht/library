#include "Sach.h"
#include <iostream>
void Sach::setTen_Sach(string ts)
{
	Ten_Sach = ts;
}
void Sach::setMa_Sach(string ms)
{
	Ma_Sach = ms;
}
void Sach::setGia(int g)
{
	Gia = g;
}
void Sach::setNXB(string nxb)
{
	NXB = nxb;
}
void Sach::setTac_Gia(string tg)
{
	Tac_Gia = tg;
}
string Sach::getTen_Sach()
{
	return Ten_Sach;
}
string Sach::getMa_Sach()
{
	return Ma_Sach;
}
int Sach::getGia()
{
	return Gia;
}
string Sach::getNXB()
{
	return NXB;
}
string Sach::getTac_Gia()
{
	return Tac_Gia;
}
void Sach::xuat()
{
	cout << "\nTen: " << Ten_Sach;
	cout << "\nMa: " << Ma_Sach;
	cout << "\nGia: " << Gia;
	cout << "\nNXB: " << NXB;
	cout << "\nTac Gia: " << Tac_Gia;
}
/*Sach Sach::getSach()
{
	Sach temp;
}*/
/*Sach& Sach::operator=(const Sach& a)
{
	if (this == &a)
		return *this;
	this->Ten_Sach = a.Ten_Sach;
	this->Ma_Sach = a.Ma_Sach;
	this->Gia = a.Gia;
	this->NXB = a.NXB;
	this->Tac_Gia = a.Tac_Gia;
	return *this;
}*/
Sach::Sach(string ts,string ms,int g,string nxb,string tg)
{
	Ten_Sach = ts;
	Ma_Sach = ms;
	Gia = g;
	NXB = nxb;
	Tac_Gia = tg;
}
Sach::Sach() {
	Ten_Sach = "Default";
	Ma_Sach = "Default";
	Gia = 0;
	NXB = "Default";
	Tac_Gia = "Default";
}
Sach::~Sach() {
	Ten_Sach = '\0';
	Ma_Sach = '\0';
	Gia = 0;
	NXB = '\0';
	Tac_Gia = '\0';
}