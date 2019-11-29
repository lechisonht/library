#pragma once
#include"Don_Hang.h"
#include<vector>
#include"Kho_Sach.h"
using namespace std;
class Hoa_Don
{
private: 
	vector<Don_Hang> HD;
	int tt;//thanh tien
public:
	void mua(Kho_Sach D);
	void thanhTien();
	void xuathd();
	void xoa();
	//void capnhat(Kho_Sach D);
	void inHD();
	void HOADON(Kho_Sach D);
	Hoa_Don();
	~Hoa_Don();
};

