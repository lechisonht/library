#include "NXB.h"
void NXB::setDaTa()
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
		if(s.getNXB()==Ten) Them(s);
	}
	f.close();
}
void NXB::Xuat_Lieu()
{
	cout << "\n---NXB: " << Ten << "---\n";
	Kho_Sach::Xuat_Lieu();
}
void NXB::Them1(Kho_Sach D,Sach s)
{
	D.Them(s);//them sach vao kho
	Them(s);//them sach vao kho cua NXB
}
NXB::NXB(string t)
{
	Ten = t;
}
NXB::NXB(){
}
NXB::~NXB(){
	Ten = '\0';
}