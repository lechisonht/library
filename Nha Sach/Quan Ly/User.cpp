#include "User.h"
void User::setTK(string t)
{
	TK = t;
}
void User::setMK(string m)
{
	MK = m;
}
string User::getTK()
{
	return TK;
}
string User::getMK()
{
	return MK;
}
User::User() {}
User::~User() {
	TK = '\0';
	MK = '\0';
}