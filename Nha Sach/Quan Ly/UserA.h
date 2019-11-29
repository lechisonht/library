#pragma once
#include "User.h"
#include"NXB.h"
#include"Tac_Gia.h"
class UserA :
	public User
{
private:
	NXB N;
	Tac_Gia T;
public:
	UserA();
	~UserA();
};

