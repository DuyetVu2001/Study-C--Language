#include <iostream>
#include <cmath>

using namespace std;

void baiToan6(int *a, int n){
	int tongChan = 0, tongLe = 0, tongPtChiaHetCho3 = 0;
	for(int i = 0; i < n; i++){
		cout << "Nhap so nguyen thu " << i + 1 << " : ";
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			tongChan += a[i];
		}
		else{
			tongLe += a[i];
		}
		if(a[i] % 3 == 0){
			tongPtChiaHetCho3 += a[i];
		}
	}
	cout << "\nTong cac phan tu chan la: " << tongChan << endl;
	cout << "\nTong cac phan tu le la: " << tongLe << endl;
	cout << "\nTong cac phan tu chia het cho 3 la: " << tongPtChiaHetCho3 << endl;	
}

int main(){
	int a[100], n = 10;
	baiToan6(a, n);
	return 0;
}


