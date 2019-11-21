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
		cout << "\nTen: " << K[i].getTen_Sach();
		cout << "\nMa: " << K[i].getMa_Sach();
		cout << "\nGia: " << K[i].getGia();
		cout << "\nNXB: " << K[i].getNXB();
		cout << "\nTac Gia: " << K[i].getTac_Gia();
	}
}
Sach Kho_Sach::Seach(string s)
{

}
Kho_Sach::Kho_Sach()
{}
Kho_Sach::~Kho_Sach()
{
	K.clear();
}