//khai bao nguyen mau
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int chon, Sinhvien a[MAX], int& n);
//Dinh nghia ham
void XuatMenu() {
	cout << "\n0.====Thoat=====";
	cout << "\n1.nhap danh sach sinh vien tu ban phim";
	cout << "\n2.nhap co dinh danh sach it nhat 5 sinh vien";
	cout << "\n3.Xuat danh sach sinh vien";
	cout << "\n4.Tim va xuat thong tin cua sinh vien co ho va ten cho truoc";
}
int ChonMenu(int soMenu) {
	int chon;
	do {
		cout << "\nnhap chon[0.." << soMenu << "]=";
		cin >> chon;
		if (0 <= chon && chon <= soMenu)
			break;
	} while (1);
	return chon;
}
void XuLyMenu(int chon, Sinhvien a[MAX], int& n) {
	switch (chon)
	{
		char hoVaTen[26];
		int kq;
	case 0:
		cout << "\n0.====Thoat=====";
		
		break;
	case 1:
		cout << "\n1.nhap danh sach sinh vien tu ban phim";
		cout << endl;
		NhapDS_SV(a, n);
		break;
	case 2:
		cout << "\n2.nhap co dinh danh sach it nhat 5 sinh vien";
		
		break;
	case 3:
		cout << "\n3.Xuat danh sach sinh vien";
		cout << "\nDanh sach sinh vien hien hanh ";
		XuatDS_SV(a, n);
		break;
	case 4:
		cout << "\n4.Tim va xuat thong tin cua sinh vien co ho va ten cho truoc";
		XuatDS_SV(a, n);
		cout << "\nnhap ho va ten can tim :";
		cin.ignore();
		gets_s(hoVaTen);
		cout << endl;
		kq=TimVaXuatThongTin(a, n, hoVaTen);
		if (kq == -1)
			cout << "\nkhong co sinh vien co ho va ten :" << hoVaTen;
		else
		{
			cout << "\nthong tin sinh vien tim thay ";
			Xuat1_SV(a[kq]);
		}
		break;
		
	default:
		break;
	}
}
