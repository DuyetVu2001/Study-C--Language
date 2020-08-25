#include <iostream>
#include <cmath>

using namespace std;

int kiemTraSoNT(int k){
	int i = 2;
	if(k < 2) return 0;
	for(;i <= sqrt(k); i++){
		if(k % i == 0) return 0;
	}
	return 1;
}

void baiToan7(int *a, int n){
	int tongNT = 0;
	for(int i = 0; i < n; i++){
		cout << "Nhap so nguyen thu " << i + 1 << " : ";
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		if(kiemTraSoNT(a[i])){
			tongNT += a[i];
		}
	}
	cout << "\nTong cac phan tu la so NT la: " << tongNT << endl;	
}

int main(){
	int a[100], n = 10;
	baiToan7(a, n);
	return 0;
}


