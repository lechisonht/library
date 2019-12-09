#pragma once
#include"Don_Hang.h"
#include"Hoa_Don.h"
#include"Kho_Sach.h"
#include"NXB.h"
#include"Sach.h"
#include"Tac_Gia.h"
#include"User.h"
#include"UserA.h"
#include"UserN.h"
#include"UserT.h"
#include <windows.h>
void SUDUNG();
void UADMIN(string tk,string mk);
void UNXB(string tk, string mk, string t);
void UTG(string tk, string mk, string t);
void USER(string tk, string mk,string dt);
bool DANGNHAP(int& i, string &tk, string &mk, string& dt);
bool ktdn(string u, string p, int i, string &dt);