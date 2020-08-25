#include <iostream>
#include <cmath>
using namespace std;

int nhap(){
	int n;
	do{
		cout << "Nhap vao so nguyen duong n: ";
		cin >> n;
	}while(n < 1);
	return n;
}

int tinhS(int n){
	if(n == 1){
		return 1;
	}
	return (pow(-1, n+1)*n) + tinhS(n-1);
}

long long tinhP(int n){
	if(n == 1){
		return 1;
	}
	return n*n + tinhP(n-1);
}

int main(){
	int n = nhap();
	cout << "Gia tri cua bieu thuc:\nS(n) = " << tinhS(n) << endl;
	cout << "P(n) = " << tinhP(n);
	return 0;
}






