#pragma once
#include "NhanVat.h"
class Boxer :
	public NhanVat
{
private:
	string hinhanh = "Boxer";
public:
	Boxer(int a, int b, int c) : NhanVat(a, b, c) {};
	~Boxer() {};

	static int dai, rong;
	string GetTen() { return hinhanh; }
};

