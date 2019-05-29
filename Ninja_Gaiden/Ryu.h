#pragma once
#include "NhanVat.h"
class Ryu :
	public NhanVat
{
private:
	string hinhanh = "Ryu";
public:
	Ryu(int a, int b, int c) : NhanVat(a, b, c) {};
	~Ryu() {};

	static int dai, rong;
	string GetTen() { return hinhanh; }
};

