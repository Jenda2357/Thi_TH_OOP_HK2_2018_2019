#pragma once
#include "NhanVat.h"
class Machine_Gun_Guy :
	public NhanVat
{
private:
	string hinhanh = "Machine_Gun_Guy";
public:
	Machine_Gun_Guy(int a, int b, int c) : NhanVat(a, b, c) {};
	~Machine_Gun_Guy() {};

	static int dai, rong;
	string GetTen() { return hinhanh; }
};

