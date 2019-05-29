#pragma once
#include "NhanVat.h"
#include "Ryu.h"
#include "Armor_Sword_Man.h"
#include "Banshee.h"
#include "Bat.h"
#include "Bat_Man.h"
#include "Boxer.h"
#include "Dog.h"
#include "Knife_Thrower.h"
#include "Machine_Gun_Guy.h"
#include "Runner.h"
#include "Sword_Man.h"
#include "Barbarian.h"
#include "Bomberhead.h"
#include <vector>
#include <algorithm>

class dsNhanVat
{
private:
	vector <NhanVat*> nv;
	int soluong[13] = { 0 };	// array count the elements of figure type.
public:
	dsNhanVat() {};
	~dsNhanVat() {};

	void Khoitao()
	{
		// initial default value for static members.
		cin >> Ryu::dai >> Ryu::rong;
		cin >> Armor_Sword_Man::dai >> Armor_Sword_Man::rong;
		cin >> Banshee::dai >> Banshee::rong;
		cin >> Bat::dai >> Bat::rong;
		cin >> Bat_Man::dai >> Bat_Man::rong;
		cin >> Boxer::dai >> Boxer::rong;
		cin >> Dog::dai >> Dog::rong;
		cin >> Knife_Thrower::dai >> Knife_Thrower::rong;
		cin >> Machine_Gun_Guy::dai >> Machine_Gun_Guy::rong;
		cin >> Runner::dai >> Runner::rong;
		cin >> Sword_Man::dai >> Sword_Man::rong;
		cin >> Barbarian::dai >> Barbarian::rong;
		cin >> Bomberhead::dai >> Bomberhead::rong;
	}
	void Nhap()
	{
		int i = 0;
		for (i = 0; i < 10; ++i)
		{
			int tmp_stt, tmp_ID, tmp_hoanh, tmp_tung;
			cin >> tmp_stt >> tmp_ID >> tmp_hoanh >> tmp_tung;
			soluong[tmp_ID]++;
			switch (tmp_ID)
			{
			case  0: nv.emplace_back(new Ryu(tmp_stt,tmp_hoanh,tmp_tung)); break;
			case  1: nv.emplace_back(new Armor_Sword_Man(tmp_stt,tmp_hoanh,tmp_tung)); break;
			case  2: nv.emplace_back(new Banshee(tmp_stt,tmp_hoanh,tmp_tung)); break;
			case  3: nv.emplace_back(new Bat(tmp_stt,tmp_hoanh,tmp_tung)); break;
			case  4: nv.emplace_back(new Bat_Man(tmp_stt,tmp_hoanh,tmp_tung)); break;
			case  5: nv.emplace_back(new Boxer(tmp_stt,tmp_hoanh,tmp_tung)); break;
			case  6: nv.emplace_back(new Dog(tmp_stt,tmp_hoanh,tmp_tung)); break;
			case  7: nv.emplace_back(new Knife_Thrower(tmp_stt,tmp_hoanh,tmp_tung)); break;
			case  8: nv.emplace_back(new Machine_Gun_Guy(tmp_stt,tmp_hoanh,tmp_tung)); break;
			case  9: nv.emplace_back(new Runner(tmp_stt,tmp_hoanh,tmp_tung)); break;
			case 10: nv.emplace_back(new Sword_Man(tmp_stt,tmp_hoanh,tmp_tung)); break;
			case 11: nv.emplace_back(new Barbarian(tmp_stt,tmp_hoanh,tmp_tung)); break;
			case 12: nv.emplace_back(new Bomberhead(tmp_stt,tmp_hoanh,tmp_tung)); break;
			}
		}
	}
	
	void Xuat_theo_soluong()
	{
		if (soluong[0]) cout << "Co " << soluong[0] << " phan tu Ryu" << endl;
		if (soluong[1]) cout << "Co " << soluong[1] << " phan tu Armor_Sword_Man" << endl;
		if (soluong[2]) cout << "Co " << soluong[2] << " phan tu Banshee" << endl;
		if (soluong[3]) cout << "Co " << soluong[3] << " phan tu Bat" << endl;
		if (soluong[4]) cout << "Co " << soluong[4] << " phan tu Bat_Man" << endl;
		if (soluong[5]) cout << "Co " << soluong[5] << " phan tu Boxer" << endl;
		if (soluong[6]) cout << "Co " << soluong[6] << " phan tu Dog" << endl;
		if (soluong[7]) cout << "Co " << soluong[7] << " phan tu Knife_Thrower" << endl;
		if (soluong[8]) cout << "Co " << soluong[8] << " phan tu Machine_Gun_Guy" << endl;
		if (soluong[9]) cout << "Co " << soluong[9] << " phan tu Runner" << endl;
		if (soluong[10]) cout << "Co " << soluong[10] << " phan tu Sword_Man" << endl;
		if (soluong[11]) cout << "Co " << soluong[11] << " phan tu Barbarian" << endl;
		if (soluong[12]) cout << "Co " << soluong[12] << " phan tu Bomberhead" << endl;
	}
	void Xuat_custom()
	{
		sort(nv.begin(), nv.end(), [](auto & a, auto & b) { return a->GetHoanh() < b->GetHoanh(); });
		for (auto& tmp : nv)
			tmp->Xuat();
	}
};
