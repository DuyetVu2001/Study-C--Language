#include <iostream>
#include <cmath>

using namespace std;

double baiToan4(double x, int n){
	if(n == 0){
		return 1;
	}
	else{
		return (double)(x * baiToan4(x, n-1));
	}
}

int main(){
	double x = 2.1112125;
	int n = 4;
	double c = baiToan4(x, n);
	cout << c;
	
	return 0;
}


