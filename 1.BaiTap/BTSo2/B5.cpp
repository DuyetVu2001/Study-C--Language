#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, s = 0, t = 1;
	
	do{
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
	}while(n < 0);
	
	for(int i = 1; i <= n; i++){
		t *= i;
		s += t;
	}
	
	cout << "S = " << s;
	return 0;
}


