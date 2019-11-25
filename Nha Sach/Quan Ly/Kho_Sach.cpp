#include "Kho_Sach.h"
void Kho_Sach::Nhap_Lieu()
{ 
	int i = 1;
	cout << "Nhap du lieu:\n";
	while (i==1)
	{
		Sach s;
		string temp;
		int g;
		cout << "Nhap Ten: "; cin >> temp; s.setTen_Sach(temp);
		cout << "Nhap Ma: "; cin >> temp; s.setMa_Sach(temp);
		cout << "Nhap Gia: "; cin >> g; s.setGia(g);
		cout << "Nhap NXB: "; cin >> temp; s.setNXB(temp);
		cout << "Nhap Tac Gia: "; cin >> temp; s.setTac_Gia(temp);
		K.push_back(s);
		cout << "Nhap 1 de tiep tuc nhap du lieu va 0 de thoat"; cin >> i;
	}
}
void Kho_Sach::setData()
{
	ifstream f;
	f.open("sach.txt");
	while (!f.eof())
	{
		Sach s;
		int d; string temp;
		getline(f, temp); s.setTen_Sach(temp);
		getline(f, temp); s.setMa_Sach(temp);
		f >> d; s.setGia(d);
		getline(f, temp); getline(f, temp); s.setNXB(temp);
		getline(f,temp); s.setTac_Gia(temp);
		K.push_back(s);
	}
	f.close();
}
void Kho_Sach::Xuat_Lieu()
{
	int n = K.size();
	cout << "Kho SACH: ";
	for (int i = 0; i < n; i++)
	{
		cout << "\nSach " << i + 1 << ": ";
		K[i].xuat();
	}
}
Sach Kho_Sach::Seach(string t)
{
	int d = K.size();
	for (int i = 0; i < d; i++)
	{
		if (t == K[i].getTen_Sach()) return K[i];
	}
	Sach a;//khi khong co sach trong kho
	return a;
}
void Kho_Sach::Them(Sach s)
{
	K.push_back(s);
}
void Kho_Sach::Xoa(string t)
{
	int i = 0;
	int k = 0;
	for (; i < K.size(); i++)
	{
		if (t == K[i].getTen_Sach()) { k = 1; break; }
	}
	for (; i < K.size() - 1; i++)
	{
		K[i] = K[i + 1];// vi kieu sach k co con tro nen k can cai dat toan tu "="
	}
	if (k == 1) K.pop_back();//xoa phan tu cuoi
}
Kho_Sach::Kho_Sach()
{

}
Kho_Sach::~Kho_Sach()
{
	K.clear();
}