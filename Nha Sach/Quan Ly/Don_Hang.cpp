#include "Don_Hang.h"
void Don_Hang::setsl(int n)
{
	sl = n;
}
int Don_Hang::getsl()
{
	return sl;
}
void Don_Hang::xuat()
{
	Sach::xuat();
	cout << "\nSo luong: "<<sl;
}
int Don_Hang::Tien() {
	return this->getGia()* sl;
}
/*Don_Hang& Don_Hang::operator=(const Don_Hang& a)
{
	if (this == &a)
		return *this;
	Sach::operator=(a);
	sl = a.sl;
	return *this;
}*/
Don_Hang::Don_Hang(Sach S, int n):Sach(S.getTen_Sach(),S.getMa_Sach(),S.getGia(),S.getNXB(),S.getTac_Gia())
{
	sl = n;
}
Don_Hang::Don_Hang() { sl = 0; }
Don_Hang::~Don_Hang() { sl = 0; }