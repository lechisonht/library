#include"Run.h"
void SUDUNG()
{
	int i;
	string tk, mk;
	string dt;
	if (DANGNHAP(i, tk, mk, dt)) {
		cout << "DANG NHAP THANH CONG.";
		Sleep(1000);
		switch (i)
		{
		case(1): {UADMIN(tk,mk); break; }
		case(2): {UNXB(tk,mk,dt); break; }
		case(3): {UTG(tk,mk,dt); break; }
		case(4): {USER(tk,mk,dt); break; }
		default:
			break;
		}
	}
	else { cout << "DANG NHAP THAT BAI."; return; }
}
void UADMIN(string tk,string mk)
{
	Kho_Sach K; 
	K.setData();
	UserA UA;
	UA.setTK(tk);
	UA.setMK(mk);
	//K.Xuat_Lieu();
	int i;
	reset:
	system("cls");
	cout << "-----ADMIN-----" << endl;
	cout << "Chon thao tac: \n";
	cout << "1. Them.\n2. Xoa.\n3. Sua.\n4. Thong bao.\n5. Khoa Sach.\n"; cin >> i;
	switch (i)
	{
	case(1): {
		cout << "---THEM---\n";
		K.add();
		break;
	}
	case(2): {
		cout << "---XOA---\n";
		string temp;
		cin.ignore();
		cout << "Nhap Ten cuon sach muon xoa: "; getline(cin, temp); ;
		K.Xoa(temp);
		break;
	}
	case(3): {
		cout << "---SUA---\n";
		string temp;
		cin.ignore();
		cout << "Nhap Ten cuon sach muon sua gia: "; getline(cin, temp);
		K.Sua(temp);
		break;
	}
	case(4): {
		IB("ADMIN");
		break;
	}
		   ////Thieu
	default:
		break;
	}
	cout << "Nhap 0 de quay lai thao tac. "; cin >> i;
	if (i == 0) goto reset;
	K.Dong_Bo();
}
void UNXB(string tk, string mk,string t)
{
	Kho_Sach K;
	K.setData();
	NXB U(t);
	U.setDaTa();
	int i;
	Sach temp;
	string s;
	int n;
reset:
	system("cls");
	cout << "-----NXB: "<<t<<"-----" << endl;
	cout << "Chon thao tac: \n";
	cout << "1. Them.\n2. Xoa.\n3. Sua.\n4. Thong bao.\n5. Khoa Sach.\n"; cin >> i;
	switch (i)
	{
	case(1): {
		cout << "---THEM---\n";
		U.add(K);
		break;
	}
	case(2): {
		cout << "---XOA---\n";
		string temp;
		cin.ignore();
		cout << "Nhap Ten cuon sach muon xoa: "; getline(cin, temp); ;
		U.Xoa(temp);
		break;
	}
	case(3): {
		cout << "---SUA---\n";
		string temp;
		cin.ignore();
		cout << "Nhap Ten cuon sach muon sua gia: "; getline(cin, temp);
		U.Sua(temp);
		break;
	}
	case(4): {
		IB(t);
		break;
	}
		   ////Thieu
	default:
		break;
	}
	cout << "Nhap 0 de quay lai thao tac. "; cin >> i;
	if (i == 0) goto reset;
	K.Dong_Bo();
	U.Dong_Bo();
}
void UTG(string tk, string mk,string t)
{
	Kho_Sach K;
	K.setData();
	Tac_Gia T(t);
	T.setDaTa();
	int i;
	Sach temp;
	string s;
	int n;
reset:
	system("cls");
	cout << "-----NXB: " << t << "-----" << endl;
	cout << "Chon thao tac: \n";
	cout << "1. Them.\n2. Xoa.\n3. Sua.\n4. Thong bao.\n5. Khoa Sach.\n"; cin >> i;
	switch (i)
	{
	case(1): {
		cout << "---THEM---\n";
		T.add(K);
		break;
	}
	case(2): {
		cout << "---XOA---\n";
		string temp;
		cin.ignore();
		cout << "Nhap Ten cuon sach muon xoa: "; getline(cin, temp); ;
		T.Xoa(temp);
		break;
	}
	case(3): {
		cout << "---SUA---\n";
		string temp;
		cin.ignore();
		cout << "Nhap Ten cuon sach muon sua gia: "; getline(cin, temp);
		T.Sua(temp);
		break;
	}
	case(4): {
		IB(t);
		break;
	}
		   ////Thieu
	default:
		break;
	}
	cout << "Nhap 0 de quay lai thao tac phim khac de thoat. "; cin >> i;
	if (i == 0) goto reset;
	K.Dong_Bo();
	T.Dong_Bo();
}
void USER(string tk, string mk, string dt)
{
	Kho_Sach K;
	K.setData();
	Hoa_Don H;
	//K.Xuat_Lieu();
	system("cls");
	cout << "-----USER-----" << endl;
	H.HOADON(K,dt);
}
bool DANGNHAP(int &i,string &tk,string &mk, string &dt)
{
	cout << "------DANG NHAP-----\n";
	cout << "Chon doi tuong: \n1.Admin\n2.NXB\n3.Tac gia\n4.Khach hang\n"; cin >> i;
	string u, p;//dt la bien doi tuong
	cout << "Username: "; cin >> u;
	cout << "Password: "; cin >> p;
	if (ktdn(u, p, i, dt)) return true;
	return false;
}
void IB(string t) {
	cin.ignore();
	cout << "Nhap tin nhan: ";
	string temp;
	getline(cin, temp);
	ifstream f;
	string tk, mk;
	f.open("D:/Nam 2/Ki 1/OOP/library/Nha Sach/Data/User/User.txt");
	while (!f.eof())
	{
		getline(f, tk);
		getline(f, mk);
		string s = "D:/Nam 2/Ki 1/OOP/library/Nha Sach/Data/User/";
		s += tk;
		s += "/";
		s += t;
		s += ".txt";
		ofstream f1;
		f1.open(s);
		f1 << temp;
		f1.close();
	}
	f.close();
}
bool ktdn(string u, string p, int i,string &dt)
{
	ifstream f;
	string t;
	string m;
	if (i == 1)
		f.open("D:/Nam 2/Ki 1/OOP/library/Nha Sach/Data/Admin/UserA.txt");
	else if (i == 2)
		f.open("D:/Nam 2/Ki 1/OOP/library/Nha Sach/Data/NXB/UserN.txt");
	else if (i == 3)
		f.open("D:/Nam 2/Ki 1/OOP/library/Nha Sach/Data/TG/UserT.txt");
	else if (i == 4)
		f.open("D:/Nam 2/Ki 1/OOP/library/Nha Sach/Data/User/User.txt");
	if((i==1)||(i==4))
	while (!f.eof())
	{
		getline(f, t);
		getline(f, m);
		if ((u == t) && (p == m)) {
			if (i == 4) dt = t;
			return true; }
	}
	if ((i == 2) || (i == 3))
		while (!f.eof())
		{
			getline(f, t);
			getline(f, m);
			getline(f, dt);
			if ((u == t) && (p == m)) return true;
		}
	return false;
}