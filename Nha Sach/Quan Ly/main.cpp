#include"Kho_Sach.h"
#include"Hoa_Don.h"
#include"NXB.h"
#include"Tac_Gia.h"
void main()
{
	Kho_Sach D;
	//D.Nhap_Lieu();
	D.setData();
	D.Xuat_Lieu();
	Hoa_Don HD;
	HD.HOADON(D);
	/*NXB N("GD");
	N.setDaTa();
	N.Xuat_Lieu();
	Tac_Gia T("Gosho");
	T.setDaTa();
	T.Xuat_Lieu();*/
}