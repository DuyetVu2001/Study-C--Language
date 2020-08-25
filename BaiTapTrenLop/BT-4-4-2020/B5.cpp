#include <iostream>
#include <cmath>

using namespace std;

void swap(float &a, float &b){
	float tmp = a;
	a = b;
	b = tmp;
}

void baiToan5(float *x){
	for(int i = 0; i < 6 / 2; i++){
		swap(x[i], x[6 - 1 - i]);
	}
	for(int i = 0; i < 6; i++){
		cout << x[i] << "  ";
	}	
}

int main(){
	float x[] = {12.3, -45.4, 12, 15, 10.1, 12.5};
	baiToan5(x);
	return 0;
}


