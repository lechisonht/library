#include "Tac_Gia.h"
void Tac_Gia::setDaTa()
{
	ifstream f;
	f.open("D:/Nam 2/Ki 1/OOP/library/Nha Sach/Data/DLSach/sach.txt");
	while (!f.eof())
	{
		Sach s;
		int d; string temp;
		getline(f, temp); s.setTen_Sach(temp);
		getline(f, temp); s.setMa_Sach(temp);
		f >> d; s.setGia(d);
		getline(f, temp); getline(f, temp); s.setNXB(temp);
		getline(f, temp); s.setTac_Gia(temp);
		if (s.getTac_Gia() == Ten) Them(s);
	}
	f.close();
}
void Tac_Gia::Xuat_Lieu()
{
	cout << "\n---Tac Gia: " << Ten << "---\n";
	Kho_Sach::Xuat_Lieu();
}
void Tac_Gia::Them1(Kho_Sach D, Sach s)
{
	D.Them(s);//Them vao kho sach
	Them(s);//Them vao kho sach cua tac gia
}
Tac_Gia::Tac_Gia(string t) { Ten = t; }
Tac_Gia::Tac_Gia(){}
Tac_Gia::~Tac_Gia(){}