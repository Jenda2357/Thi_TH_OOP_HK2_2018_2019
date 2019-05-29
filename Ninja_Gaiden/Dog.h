#pragma once
#include "NhanVat.h"
class Dog :
	public NhanVat
{
private:
	string hinhanh = "Dog";
public:
	Dog(int a, int b, int c) : NhanVat(a, b, c) {};
	~Dog() {}

	static int dai, rong;
	string GetTen() { return hinhanh; }
};

