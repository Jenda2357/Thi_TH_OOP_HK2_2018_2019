#pragma once
#include <string>
#include <iostream>

using namespace std;

class NhanVat
{
protected:
	int tung, hoanh;
public:
	NhanVat(int a, int b, int c): stt(a), hoanh(b), tung(c) {};
	~NhanVat() {};
	int stt;

	virtual string GetTen() = 0;	// require polymorphism :3
	int GetHoanh() { return hoanh; }
	void Xuat()
	{
		cout << GetTen() << " " << hoanh << " " << tung << endl;
	}
};

