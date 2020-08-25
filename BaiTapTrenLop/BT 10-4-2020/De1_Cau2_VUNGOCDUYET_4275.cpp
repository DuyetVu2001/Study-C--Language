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

int tim_so_chu_so(int n){
	if(n / 10 == 0){
		return 1;
	}
	return 1 + tim_so_chu_so(n / 10);
}

int main(){
	int n = nhap_n();
	cout << "So cac chu so cua n la: " << tim_so_chu_so(n);
	return 0;
}


