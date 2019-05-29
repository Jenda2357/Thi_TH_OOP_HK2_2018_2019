#pragma once
#include "NhanVat.h"
class Armor_Sword_Man :
	public NhanVat
{
private:
	string hinhanh = "Armor_Sword_Man";
public:
	Armor_Sword_Man(int a, int b, int c) : NhanVat(a, b, c) {};
	~Armor_Sword_Man() {};

	static int dai, rong;
	string GetTen() { return hinhanh; }
};

