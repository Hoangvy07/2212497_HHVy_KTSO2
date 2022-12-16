#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
#include"2212497_Thuvien.h"
#include"2212497_Menu.h"
void ChayChuongTrinh();
int main() {
	
	ChayChuongTrinh();
	return 0;
}
void ChayChuongTrinh() {
	int chon, soMenu = 4;
	int n = 5;
	Sinhvien a[MAX] = { {"2212497","HA HOANG VY","CTK46A",7.32112},
		{"2231423","PHAM THI CUC","CTK46B",8.3211},
		{"2218429","DINH DUC THIEN","CTK46B",8.975431},
		{"2235847","NGUYEN VAN THA","CTK46A",6.99885},
		{"2249476","CHAU NHUAN PHAT","CTK46A",5.99832} };
	XuatMenu();
	do {
		chon = ChonMenu(soMenu);
		XuLyMenu(chon, a, n);
	} while (chon != 0);
	return;
}