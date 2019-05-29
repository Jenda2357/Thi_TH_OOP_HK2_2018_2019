#pragma once
#include "NhanVat.h"
class Runner :
	public NhanVat
{
private:
	string hinhanh = "Runner";
public:
	Runner(int a, int b, int c) : NhanVat(a, b, c) {};
	~Runner() {};

	static int dai, rong;
	string GetTen() { return hinhanh; }
};

