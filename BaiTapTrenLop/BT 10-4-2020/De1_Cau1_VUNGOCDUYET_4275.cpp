#include <iostream>
#include <cmath>
using namespace std;

int nhap_n(){
	int n;
	do{
		cout << "Nhap vao so nguyen duong n: ";
		cin >> n;
	}while(n < 1);
	return n;
}

int main(){
	int n = nhap_n();
	float x = 0;
	cout << "Nhap so thuc x: ";
	cin >> x;
	float s = 0;
	int tong = 0;
	for(int i = 1; i <= n; i++){
		tong += i;
		s += float(pow(x, i)/tong);
	}
	
	cout << "Bieu thuc S = " << s;
	return 0;
}


