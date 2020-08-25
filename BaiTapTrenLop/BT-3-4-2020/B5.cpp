#include <iostream>
#include <cmath>

using namespace std;

int baiToan5(int n){
	if(n > 0 && n < 10)
		return 1;
	else
		return 1 + baiToan5(n / 10);
}

int main(){
	int n =10;
	int c = baiToan5(n);
	cout << c;
	return 0;
}


