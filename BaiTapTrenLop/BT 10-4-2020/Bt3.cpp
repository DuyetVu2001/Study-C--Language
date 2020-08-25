#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

void xuat_chuoi(char *a){
	for(int i = 0; a[i] != '\0'; i++){
		cout << a[i];
	}
}

void dem_chu_in(char *a){
	int dem = 0;
	for(int i = 0; a[i] != '\0'; i++){
		if(a[i] > 64 && a[i] < 91){
			dem++;
		}
	}
	cout << "So chu cai in hoa la: " << dem << endl;
}

void chen_ki_tu(char *a){
	char c;
	int k;
	cout << "\nNhap ki tu can chen: ";
	cin >> c;
	fflush(stdin);
	cout << "\nNhap va vi tri muon chen: ";
	cin >> k;
	int n = strlen(a) - 1;
	for(int i = 0; i < n - k; i++){
		a[n-i] = a[n-1-i];
	}
	a[k] = c;
	n++;
	cout << "\nMang sau chen: \n";
	xuat_chuoi(a);
	cout << endl;
}

void kiem_tra_chuoi_hop_le(char *a){
	int dem = 0;
	for(int i = 0; a[i] != '\0'; i++){
		if(a[i] == ' ' && a[i+1] == ' '){
			cout << "\nChuoi khong hop le!" << endl;
			break;
		}
		if(a[i] != ' ' && a[i+1] != ' ' && a[i+1] != '\0'){
			dem++;
		}
		else{
			dem = 0;
		}		
	}
	if(dem == 10){
		cout << "\nChuoi khong hop le!\n";
	}
}

void dao_chuoi(char *a){
	char b[100];
	int n = strlen(a) - 1;
	for(int i = 0; a[i] != '\0'; i++){
		b[i] = a[n - 1 -i];
	}
	cout << "\nChuoi moi: \n";
	for(int i = 0; i < n; i++){
		cout << b[i];
	}
	cout << endl;
}
int main(){
	char a[100];
	cout << "Nhap chuoi: ";
	fgets(a, 99, stdin);
	int chon = 0;
	do{
		cout << "Ban chon: ";
		cin >> chon;
		switch(chon){
			case 0:{
				
				break;
			}
			case 1:{
				dem_chu_in(a);
				break;
			}
			case 2:{
				chen_ki_tu(a);
				break;
			}
			case 3:{
				kiem_tra_chuoi_hop_le(a);
				break;
			}
			case 4:{
				dao_chuoi(a);
				break;
			}
		}
	}while(chon);
	return 0;
}


