#pragma once
#include "NhanVat.h"
class Bat :
	public NhanVat
{
private:
	string hinhanh = "Bat";
public:
	Bat(int a, int b, int c) : NhanVat(a, b, c) {};
	~Bat() {};

	static int dai, rong;
	string GetTen() { return hinhanh; }
};

