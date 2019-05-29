#pragma once
#include "NhanVat.h"
class Sword_Man :
	public NhanVat
{
private:
	string hinhanh = "Sword_Man";
public:
	Sword_Man(int a, int b, int c) : NhanVat(a, b, c) {};
	~Sword_Man() {};

	static int dai, rong;
	string GetTen() { return hinhanh; }
};

