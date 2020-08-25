#include<iostream>
#include<math.h>

using namespace std;

void nhap_mang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
void xuat_mang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << endl;
	}
}
void xoa_pt(int a[], int n){
	int x, dem;
	cout << "Nhap vao phan tu can xoa: ";
	cin >> x;
	for(int i = 0; i < n;){
		dem = 1;
		if(a[i] == x){
			dem = 0;
			for(int j = i; j < n; j++){
				a[j] = a[j+1];
			}
			n--;
		}
		if(dem)
			i++;
	}
	if(dem)
		cout << "Mang khong co gia tri can xoa!";
	else{
		cout << "Mang sau khi xoa: " << endl;
		xuat_mang(a, n);
	}
}
int main(){
	int a[100], n = 10;
	cout << "Nhap vao mang 10 phan tu: " << endl;
	nhap_mang(a, n);
	xoa_pt(a, n);
	return 0;
}


