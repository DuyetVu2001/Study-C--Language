#include <iostream>
#include <cmath>

using namespace std;

int baiToan3(int a, int b){
	int r = a % b;
	if(r == 0){
		return b;
	}
	else{
		a = b;
		b = r;
		return baiToan3(a, b);
	}	
}

int main(){
	int a = 11, b = 3;
	int c = baiToan3(a, b);
	cout << c;
	return 0;
}


