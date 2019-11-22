#pragma once
#include "Sach.h"
class Don_Hang :
	public Sach
{
private: 
	int sl;
public:
	void setsl(int n);
	int getsl();
	Don_Hang();
	~Don_Hang();
};

