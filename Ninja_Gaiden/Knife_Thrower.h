#pragma once
#include "NhanVat.h"
class Knife_Thrower :
	public NhanVat
{
private:
	string hinhanh = "Knife_Thrower";
public:
	Knife_Thrower(int a, int b, int c) : NhanVat(a, b, c) {};
	~Knife_Thrower() {};

	static int dai, rong;
	string GetTen() { return hinhanh; }
};

