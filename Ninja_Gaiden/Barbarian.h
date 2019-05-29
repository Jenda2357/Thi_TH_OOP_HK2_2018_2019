#pragma once
#include "NhanVat.h"
class Barbarian :
	public NhanVat
{
private:
	string hinhanh = "Barbarian";
public:
	Barbarian(int a, int b, int c) : NhanVat(a, b, c) {};
	~Barbarian() {};

	static int dai, rong;
	string GetTen() { return hinhanh; }
};

