#include "Hoa_Don.h"
void Hoa_Don::mua(Kho_Sach D)
{
	cin.ignore();
	cout << endl;
	int k = 1;
	while (k == 1)
	{
		string s;
		cout << "Nhap ten cuon sach can mua: ";
		//fflush(stdin);
		//getchar();
		//cin.ignore();
		//cin.clear();
		//cin.ignore(100, '\n');
		getline(cin, s);
		Sach temp = D.Seach(s);
		if (temp.getGia() == 0) { cout << "Khong co sach.\n"; }//truong hop k co sach
		else {
			int n;
			cout << "So luong: "; cin >> n;
			Don_Hang D(temp, n);
			HD.push_back(D);
		}
		cout << "Nhap 1 de tiep tuc va phim khac de dung mua hang: "; cin >> k;
		cin.ignore();
	}
	thanhTien();
}
void Hoa_Don::xoa()
{
	cin.ignore();
	int k = 1;
	while (k == 1)
	{
		string s;
		cout << "\nNhap ten cuon sach muon xoa: ";
		getline(cin, s);
		int i;
		int d = 0;//bien de xac dinh co tim dc sach can xoa k
		for (i = 0; i < HD.size(); i++)
		{
			if (s == HD[i].getTen_Sach()) { d = 1; break; }
		}
		for (; i < HD.size() - 1; i++)
		{
			HD[i] = HD[i + 1];
		}
		if (d == 1) HD.pop_back();
		else cout << "Khong co sach trong HOA DON.\n";
		cout << "Nhap 1 de tiep tuc xoa va phim cac de ket thuc: "; cin >> k;
		cin.ignore();
	}
	thanhTien();
}
void Hoa_Don::thanhTien()
{
	for (int i = 0; i < HD.size(); i++)
	{
		tt += HD[i].Tien();
	}
}
void Hoa_Don::xuathd()
{
	cout << "\n-----HOA DON-----\n";
	for (int i = 0; i < HD.size(); i++)
	{
		cout << "\n--DON " << i + 1 << "--";
		HD[i].xuat();
	}
	cout << "\nTong tien: " << tt;
}
void Hoa_Don::inHD(string t)
{
	ofstream f;
	string s = "D:/Nam 2/Ki 1/OOP/library/Nha Sach/Data/User/";
	s += t;
	s += "/HD1.txt";
	f.open(s);
	f << "\n-----HOA DON-----\n";
	for (int i = 0; i < HD.size(); i++)
	{
		f << "\n--DON " << i + 1 << "--\n";
		f << HD[i].getTen_Sach() << endl;
		f << HD[i].getMa_Sach() << endl;
		f << HD[i].getGia() << endl;
		f << HD[i].getNXB() << endl;
		f << HD[i].getTac_Gia() << endl;
		f << HD[i].getsl() << endl;
	}
	f << "\nTong tien: " << tt;
	f.close();
}
void Hoa_Don::HOADON(Kho_Sach D,string t)
{
	cout << "\n----TIEN HANH MUA HANG:----";
	mua(D);
	xuathd();
CONG://cong day lai
	cout << "\n---CHINH SUA---";
	cout << "\n1. Xoa DON HANG trong HOA DON.\n" << "2. Them DON HANG moi vao HOA DON\n";
	int i;
	cout << "Nhap yeu cau: ";
	cin >> i;
	switch (i)
	{
	case(1): {xoa(); break; }
	case(2): {mua(D); break; }
	default:
		break;
	}
	cout << "Nhap 0 de quay lai chinh sua: ";
	cin >> i;
	if (i == 0) goto CONG;
	xuathd();
	inHD(t);
}
Hoa_Don::Hoa_Don() {
	tt = 0;
}
Hoa_Don::~Hoa_Don(){
	HD.clear();
	tt = 0;
}