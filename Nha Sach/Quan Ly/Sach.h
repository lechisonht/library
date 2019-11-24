#pragma once
#include<string>
using namespace std;
class Sach
{
private: 
	string Ten_Sach;
	string Ma_Sach;
	int Gia;
	string NXB;
	string Tac_Gia;
public:
	void setTen_Sach(string ts);
	void setMa_Sach(string ms);
	void setGia(int g);
	void setNXB(string nxb);
	void setTac_Gia(string tg);
	string getTen_Sach();
	string getMa_Sach();
	int getGia();
	string getNXB();
	string getTac_Gia();
	void xuat();
	//Sach getSach();
	//Sach& operator=(const Sach&);
	Sach(string ts,string ms,int g,string nxb,string tg);
	Sach();
	~Sach();
};

