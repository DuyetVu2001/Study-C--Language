#include<iostream>

using namespace std;

void nhap_mang(int a[], int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "Nhap [" << i << "]: ";
		cin >> a[i];
	}
}
void max_second(int a[], int n) {
	int max1 = a[0], max2;
	for (size_t i = 1; i < n; i++){
		if (a[i] > max1) {
			max2 = max1;
			max1 = a[i];
		}
		else if (max1 > a[i] && max2 < a[i]) {
			max2 = a[i];
		}
	}
	cout << "So lon thu 2 trong mang la: " << max2 << endl;
}
void min_second(int a[], int n) {
	int min1 = a[0], min2;
	for (size_t i = 1; i < n; i++)
	{
		if (a[i] < min1) {
			min2 = min1;
			min1 = a[i];
		}
		else if (min1 < a[i] && min2 > a[i]) {
			min2 = a[i];
		}
	}
	cout << "So nho thu 2 trong day la: " << min2;
}
int main() {
	int a[30], n = 8;
	cout << "Nhap vao mang 8 phan tu: \n";
	nhap_mang(a, n);
	max_second(a, n);
	min_second(a, n);
	return 0;
}

