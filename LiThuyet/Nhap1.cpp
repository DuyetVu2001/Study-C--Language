#include<iostream>

using namespace std;

void nhap_mang(int a[], int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "Nhap [" << i << "]: ";
		cin >> a[i];
	}
}
int tim_max(int a[], int n) {
	int max1 = a[0];
	for (size_t i = 1; i < n; i++){
		if (a[i] > max1) {
			max1 = a[i];
		}
	}
	return max1;
}
int tim_min(int a[], int n) {
	int min1 = a[0];
	for (size_t i = 1; i < n; i++)
	{
		if (a[i] < min1) {
			min1 = a[i];
		}
	}
	return min1;
}
int min_second(int a[], int n, int min) {
	int min2;
	for (size_t i = 0; i < n; i++)
	{
		if (a[i] != min) {
			min2 = a[i];
			break;
		}
	}
//	Khoi tao 1 gia tri khac min.
	for (size_t i = 0; i < n; i++)
	{
		if (a[i] != min && min2 > a[i]) {
			min2 = a[i];
		}
	}
	return min2;
}
int max_second(int a[], int n, int max) {
	int max2;
	for (size_t i = 0; i < n; i++)
	{
		if (a[i] != max) {
			max2 = a[i];
			break;
		}
	}
	for (size_t i = 0; i < n; i++)
	{
		if (a[i] != max && max2 < a[i])
			max2 = a[i];
	}
	return max2;
}
int main() {
	int a[30], n = 8;
	int min = tim_min(a, n);
	int max = tim_max(a, n);
	cout << "Nhap vao mang 8 phan tu: \n";
	nhap_mang(a, n);
	tim_min(a, n);
	cout << min << endl;
	if (min == max) {
		cout << "Khong co gia tri lon thu hai va nho thu hai!" << endl;
	}
	else {
		int seMin = min_second(a, n, min);
		int seMax = max_second(a, n, max);
		cout << "Gia tri lon thu hai la: " << seMax << endl;
		cout << "Gia tri nho thu hai la: " << seMin << endl;
	}
	return 0;
}
