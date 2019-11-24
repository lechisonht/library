#include"Kho_Sach.h"
#include"Hoa_Don.h"
void main()
{
	Kho_Sach D;
	//D.Nhap_Lieu();
	D.setData();
	D.Xuat_Lieu();
	Hoa_Don HD;
	HD.mua(D);
	HD.xuathd();
	HD.xoa();
	HD.xuathd();
}