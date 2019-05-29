#pragma once
#include "NhanVat.h"
class Bomberhead :
	public NhanVat
{
private:
	string hinhanh = "Bomberhead";
public:
	Bomberhead(int a, int b, int c) : NhanVat(a, b, c) {};
	~Bomberhead() {};

	static int dai, rong;
	string GetTen() { return hinhanh; }
};

