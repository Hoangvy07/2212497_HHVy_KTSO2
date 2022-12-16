#define MAX 100


struct Sinhvien {
	char maSV[8];
	char hoVaTen[26];
	char lop[11];
	double diemTB;
};


//khai bao nguyen mau
void Nhap1_SV(Sinhvien& b);
void NhapDS_SV(Sinhvien a[MAX], int& n);
void Xuat1_SV(Sinhvien b);
void XuatDS_SV(Sinhvien a[MAX], int n);
int TimVaXuatThongTin(Sinhvien a[MAX], int n, char hovaten[26]);
//dinh nghia ham
void Nhap1_SV(Sinhvien& b) {
	cout << "\nnhap ma so sinh vien: ";
	cin.ignore();
	gets_s(b.maSV, 8);
	cout << "\nnhap HO VA TEN sinh vien : ";
	_flushall();
	gets_s(b.hoVaTen, 26);
	cout << "\nnhap lop: ";
	_flushall();
	gets_s(b.lop, 11);
	cout << "\nnhap diem trung binh ";
	_flushall();
	cin >> b.diemTB;

}
void NhapDS_SV(Sinhvien a[MAX], int& n) {
	cout << "\nnhap so luong sinh vien :";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "\nnhap thong tin sinh vien thu " << i + 1;
		Nhap1_SV(a[i]);
	}
}
//==============================

void Xuat1_SV(Sinhvien b) {
	cout << setiosflags(ios::left) << ":"
		<< setw(8) << b.maSV << ":"
		<< setw(26) << b.hoVaTen << ":"
		<< setw(11) << b.lop << ":"
		<< setiosflags(ios::fixed) << setprecision(2) << b.diemTB;
}
void XuatDS_SV(Sinhvien a[MAX], int n) {
	for (int i = 0; i < n; i++) {
		cout << endl;
		Xuat1_SV(a[i]);
	}
}

// "\n4.Tim va xuat thong tin cua sinh vien co ho va ten cho truoc";
int TimVaXuatThongTin(Sinhvien a[MAX],int n,char hoVaTen[26]) {
	int kq = -1;
	for (int i = 0; i < n; i++) {
		if(strcmp(a[i].hoVaTen,hoVaTen)==0){
		kq = i;
		break;
		}
	}
	 return kq;
}