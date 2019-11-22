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
	int getTT();
	void mua(Kho_Sach D);
	void xuathd();
	void capnhat(Kho_Sach D);
	void inHD();
	Hoa_Don();
	~Hoa_Don();
};

