#include <iostream>
#include "dsNhanVat.h"

using namespace std;

int main()
{
	dsNhanVat a;
	a.Khoitao();
		/*cout << endl << endl;
		cout << Ryu::dai << " " << Ryu::rong << endl;
		cout << Armor_Sword_Man::dai << " " << Armor_Sword_Man::rong << endl;
		cout << Banshee::dai << " " << Banshee::rong << endl;
		cout << Bat::dai << " " << Bat::rong << endl;
		cout << Bat_Man::dai << " " << Bat_Man::rong << endl;
		cout << Boxer::dai << " " << Boxer::rong << endl;
		cout << Dog::dai << " " << Dog::rong << endl;
		cout << Knife_Thrower::dai << " " << Knife_Thrower::rong << endl;
		cout << Machine_Gun_Guy::dai << " " << Machine_Gun_Guy::rong << endl;
		cout << Runner::dai << " " << Runner::rong << endl;
		cout << Sword_Man::dai << " " << Sword_Man::rong << endl;
		cout << Barbarian::dai << " " << Barbarian::rong << endl;
		cout << Bomberhead::dai << " " << Bomberhead::rong << endl;*/
	a.Nhap();
	cout << "\nSo luong nhan vat theo tung loai la:\n";
	a.Xuat_theo_soluong();
	cout << "\nXuat nhan vat theo thu tu hoanh do tang dan:\n";
	a.Xuat_custom();
	return 0;
}