#pragma once
#include "User.h"
#include"Tac_Gia.h"
class UserT :
	public User
{
private: 
	Tac_Gia T;
public:
	UserT();
	~UserT();
};

