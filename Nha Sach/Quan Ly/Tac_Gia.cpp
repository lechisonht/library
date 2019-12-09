#include "Tac_Gia.h"
void Tac_Gia::setDaTa()
{
	ifstream f;
	string s = "D:/Nam 2/Ki 1/OOP/library/Nha Sach/Data/TG/";
	s += Ten;
	s += "/sach.txt";
	f.open(s);
	while (!f.eof())
	{
		Sach s;
		int d; string temp;
		getline(f, temp); s.setTen_Sach(temp);
		getline(f, temp); s.setMa_Sach(temp);
		f >> d; s.setGia(d);
		getline(f, temp); getline(f, temp); s.setNXB(temp);
		getline(f, temp); s.setTac_Gia(temp);
		Them(s);
	}
	f.close();
}
void Tac_Gia::Xuat_Lieu()
{
	cout << "\n---Tac Gia: " << Ten << "---\n";
	Kho_Sach::Xuat_Lieu();
}
void Tac_Gia::add(Kho_Sach D)
{
	Sach s;
	string temp;
	int g;
	cin.ignore();
	cout << "Nhap Ten: ";
	getline(cin, temp);
	s.setTen_Sach(temp);
	cout << "Nhap Ma: ";
	getline(cin, temp);
	s.setMa_Sach(temp);
	cout << "Nhap Gia: ";
	cin >> g;
	s.setGia(g);
	cin.ignore();
	cout << "Nhap NXB: ";
	getline(cin, temp);
	s.setNXB(temp);
	cout << "Nhap Tac Gia: ";
	getline(cin, temp);
	s.setTac_Gia(temp);
	Them(s);
	D.Them(s);
}
void Tac_Gia::Them1(Kho_Sach D, Sach s)
{
	D.Them(s);//Them vao kho sach
	Them(s);//Them vao kho sach cua tac gia
}
void Tac_Gia::Dong_Bo()
{
	ofstream f;
	string s = "D:/Nam 2/Ki 1/OOP/library/Nha Sach/Data/TG/";
	s += Ten;
	s += "/sach.txt";
	f.open(s);
	for (int i = 0; i < K.size(); i++)
	{
		f << K[i].getTen_Sach() << endl;
		f << K[i].getMa_Sach() << endl;
		f << K[i].getGia() << endl;
		f << K[i].getNXB() << endl;
		f << K[i].getTac_Gia() << endl;
	}
	f.close();
}
Tac_Gia::Tac_Gia(string t) { Ten = t; }
Tac_Gia::Tac_Gia(){}
Tac_Gia::~Tac_Gia(){}