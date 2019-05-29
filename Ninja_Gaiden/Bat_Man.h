#pragma once
#include "NhanVat.h"
class Bat_Man :
	public NhanVat
{
private:
	string hinhanh = "Bat_Man";
public:
	Bat_Man(int a, int b, int c) : NhanVat(a, b, c) {};
	~Bat_Man() {};

	static int dai, rong;
	string GetTen() { return hinhanh; }
};

