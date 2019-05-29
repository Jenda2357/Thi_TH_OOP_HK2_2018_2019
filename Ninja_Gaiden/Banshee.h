#pragma once
#include "NhanVat.h"
class Banshee :
	public NhanVat
{
private:
	string hinhanh = "Banshee";
public:
	Banshee(int a, int b, int c) : NhanVat(a, b, c) {};
	~Banshee() {};

	static int dai, rong;
	string GetTen() { return hinhanh; }
};

