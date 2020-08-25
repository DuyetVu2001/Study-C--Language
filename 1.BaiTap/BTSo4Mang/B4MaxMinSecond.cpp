#include<iostream>

using namespace std;

void nhap_mang(int *a, int);
int find_max(int *a, int n);
int find_min(int *a, int n);
int find_minSecond(int *a, int n, int min);
int find_maxSecond(int *a, int n, int max);
void xuat_mang(int * , int);
int findMax(int* a, int n);

int main(){
	int n = 8;
	cout << "Nhap vao so phan tu cua mang: " << endl;
	cin >> n;
	int* a = new int[n];
	if(n > 0){
	cout << "Nhap vao mang 8 phan tu: " << endl;
	nhap_mang(a, n);
	int min = find_min(a, n);
	int max = find_max(a, n);
	cout << max << min;
	if(max = min) cout << "Khong co gia tri lon thu hai va nho thu hai!";
	else{
		cout << "So lon thu hai la: " << find_maxSecond(a, n, max) << endl;
//		cout << "Tai vi tri: " << 
		cout << "So nho thu hai la: " << find_minSecond(a, n, min) << endl;
//		cout << "Tai vi tri: " << 
	}
	}
	
	return 0;
}
void nhap_mang(int *a, int n){
	for(int i = 0; i < n; i++){
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
int find_max(int *a, int n){
	int max = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	return max;
}
int findMax(int* a, int n) {
	int max = 0;
	for (size_t i = 1; i < n; i++)
	{
		if (a[i] > max) {
			max = a[i];
		}
	}

	return max;
}
int find_min(int *a, int n){
	int min = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] < min){
			min = a[i];
		}
	}
	return min;
}
int find_maxSecond(int *a, int n, int max){
	int max2;
	for(int i = 0; i < n; i++){
		if(a[i] != max){
			max2 = a[i];
			break;
		}
	}
	for(int i = 0; i < n; i++){
		if(a[i] != max && a[i] > max2){
			max2 = a[i];
		}
	}
	return max2;
}
int find_minSecond(int *a, int n, int min){
	int min2;
	for(int i = 0; i < n; i++){
		if(a[i] != min){
			min2 = a[i];
			break;
		}
	}
	for(int i = 0; i < n; i++){
		if(a[i] != min && a[i] > min2){
			min2 = a[i];
		}
	}
	return min2;
}
