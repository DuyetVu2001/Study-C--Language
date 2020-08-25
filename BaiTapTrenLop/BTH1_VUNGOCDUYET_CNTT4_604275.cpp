#include <iostream>
#include <cmath>

using namespace std;

int nhap_n();
void baiToan1();
void baiToan2();
void baiToan3();
void baiToan4();
void baiToan5();

int main(){	
	int n = 0;
	do{
		cout << "\n\n=====MENU=====\n";
		cout << "\nBam 1 de lua chon giai bai toan 1.\n";
		cout << "Bam 2 de lua chon giai bai toan 2.\n";
		cout << "Bam 3 de lua chon giai bai toan 3.\n";
		cout << "Bam 4 de lua chon giai bai toan 4.\n";
		cout << "Bam 5 de lua chon giai bai toan 5.\n";
		cout << "Bam 0 de thoat chuong trinh.";
		cout << "\nBan chon? ";
		cin >> n;
		
		
		switch(n){
			case 0:{
				
				break;
			}
			case 1:{
				baiToan1();
				break;
			}
			case 2:{
				baiToan2();
				break;
			}
			case 3:{
				baiToan3();
				break;
			}
			case 4:{
				baiToan4();
				break;
			}
			case 5:{
				baiToan5();
				break;
			}
			default:{
				cout << "Sai chuc nang, vui long chon lai.";
				break;
			}
		}
	}while(n > 0 && n <= 5);
	
	return 0;
}

void baiToan1(){
	int a = 0, b = 0;
	float x = 0, y = 0;
	
	cout << "Co bieu thuc: " << endl;
	cout << "S = 5*cos(3*x+2) - ln(x*x+2) + sqrt(a*a+b*b) - fabs(x-y)/(pow(a,6)+1)" << endl;
	
	cout << "\nNhap vao so nguyen a: ";
	cin >> a;
	cout << "Nhap vao so nguyen b: ";
	cin >> b;
	cout << "Nhap vao so thuc x: ";
	cin >> x;
	cout << "Nhap vao so thuc y: ";
	cin >> y;
	
	float s = 0;
	s = (float)5*cos(3*x+2) - log(x*x+2) + sqrt(a*a+b*b) - fabs(x-y)/(pow(a,6)+1);
	
	cout << "\nGia tri cua bieu thuc tren la: S = " << s;
}
void baiToan2(){
	float x = 0, y = 0, z = 0, GTLN = 0, GTNN = 0;
	cout << "\nTim GTLN , GTNN cua ba so x, y, z.\n\n";
	
	cout << "Nhap vao so thuc x: ";
	cin >> x;
	cout << "Nhap vao so thuc y: ";
	cin >> y;
	cout << "Nhap vao so thuc z: ";
	cin >> z;
	
	x < y ? (x < z ? GTNN = x : GTNN = z) : (y < z ? GTNN = y : GTNN = z);
	x > y ? (x > z ? GTLN = x : GTLN = z) : (y > z ? GTLN = y : GTLN = z);
	
	cout << "Gia tri nho nhat trong 3 so la: "	<< GTNN << endl;
	cout << "Gia tri lon nhat trong 3 so la: "	<< GTLN << endl;
}
void baiToan3(){
	float diem;
	int d = 1;
	cout << "\nNhap diem tong ket va in ra xep loai hoc tap.\n\n";
	cout << "Nhap diem: ";
	cin >> diem;
	
	if(diem > 10 || diem < 0) cout << "Sai gia tri! Vui long chon lai!\n";
	else if(diem >= 8) cout << "Xep loai gioi.";
	else if(diem >= 7) cout << "Xep loai kha.";
	else if(diem >= 5) cout << "Xep loai trung binh.";
	else if(diem >= 3) cout << "Xep loai yeu.";
	else if(diem >= 0 || diem <= 3) cout << "Xep loai kem.";
	
}
void baiToan4(){
	float a, b;
	cout << "Co phuong trinh tong quat:\nax + b = 0\n";
	cout << "\nNhap vao lan luot he so a, b:";
	cin >> a >> b;	
	
	if(a == 0){
		if(b ==0) cout << "Phuong trinh vo so nghiem.";
		else cout << "Phuong trinh vo nghiem.";
	}
	else{
		cout << "Nghiem cua phuong trinh la: " << -b/a;
	}
}
void baiToan5(){
	int thang = 0;
	char k = 1;
	cout << "\nNhap vao mot thang trong nam 2020 va in ra so ngay.\n\n";
	

		k = 1;
		cout << "Nhap thang: \n" << endl;
		cin >> thang;	
		switch(thang){
			case 1:{
				thang = 31;
				break;
			}
			case 2:{
				thang = 29;
				break;
			}
			case 3:{
				thang = 31;
				break;
			}
			case 4:{
				thang = 30;
				break;
			}
			case 5:{
				thang = 31;
				break;
			}
			case 6:{
				thang = 30;
				break;
			}
			case 7:{
				thang = 31;
				break;
			}
			case 8:{
				thang = 31;
				break;
			}
			case 9:{
				thang = 30;
				break;
			}
			case 10:{
				thang = 31;
				break;
			}
			case 11:{
				thang = 30;
				break;
			}
			case 12:{
				thang = 31;
				break;
			}
			default:{
				cout << "Sai gia tri! Vui long chon lai.\n";
				k = 0;
				break;
			}
		}		

			
	
	if(k == 1)
		cout << thang << " ngay.";
}
