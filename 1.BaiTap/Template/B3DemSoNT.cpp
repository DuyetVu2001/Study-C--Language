#include<iostream>

using namespace std;

int kiem_tra(int k){
	for(int i = 2; i < k; i++){
		if(k % i == 0) return 0;
	}
	return 1;
}
int dem_NT(int a[], int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(kiem_tra(a[i]) && a[i] >= 2){
			dem++;
		}
	}
	return dem;
}
int main(){
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11}, n = 10;
	cout << "So so nguyen to co trong mang la: " << dem_NT(a, n);
	return 0;
}
