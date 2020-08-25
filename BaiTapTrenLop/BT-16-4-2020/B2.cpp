#include <iostream>
#include <iomanip>
using namespace std;

int nhap_n(){
	int n;
	do{
		cout << "Nhap so phan tu cua mang ( >0): ";
		cin >> n;
	}while(n < 1);
	return n;
}

void nhap_arr(int *a, int n){
	for(int i = 0; i < n; i++){
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void xuat_arr(int *a, int n){
	for(int i = 0; i < n; i++){
		cout << setw(5) << a[i];
	}
}

void tim_chan_max(int *a, int n){
	int max = 0, index = -1;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0 && a[i] > max){
			max = a[i];
			index = i;
		}
	}
	if(index != -1){
		cout << "\nSo chan lon nhat cua mang la: " << max;
		cout << "\nTai vi tri: " << index;
	}
	else{
		cout << "\nKhong co so chan trong day.\n";
	}
}

void xoa_so_chan(int *a, int &n){
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			for(int j = i; j < n - 1; j++){
				a[j] = a[j+1];	
			}
			i--;
			n--;
		}
	}
	cout << "\nDay sau khi xoa cac phan tu chan: \n";
	for(int i = 0; i < n; i++){
		cout << setw(5) << a[i];
	}
}

void swap(int &a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}

void sort(int *a, int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] < a[j]){
				swap(a[i], a[j]);
			}
		}
	}
}

void tach_mang(int *a, int n){
	int b[50], c[50];
	int m = 0, k = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			c[k] = a[i];
			k++;
		}
		else{
			b[m] = a[i];
			m++;
		}
	}
	if(m != 0){
		cout << "\nMang le b: \n";
	xuat_arr(b, m);
	}
	else{
		cout << "\nMang a ko co so le.\n";
	}
	if(k != 0){
		cout << "\nMang chan c: \n";
		xuat_arr(c, k);
	}
	else{
	cout << "\nMang a ko co so chan.\n";
	}
}

int main(){
	int n = nhap_n();
	int *a = new int[n];
	
	cout << "Nhap mang: \n";
	nhap_arr(a, n);
	cout << "Day vua nhap: \n";
	xuat_arr(a, n);
	tim_chan_max(a, n);
	cout << "\nDay giam dan: \n";
	sort(a, n);
	xuat_arr(a, n);
	tach_mang(a, n);
	xoa_so_chan(a, n);
	
	return 0;
}


