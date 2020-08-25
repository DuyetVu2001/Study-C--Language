#include <iostream>
#include <cmath>

using namespace std;

void baiToan2(int n){
	float sum = 0;
	if(n % 2 == 0){	
		for(size_t i = 0; i <= n; i++){
			sum +=(float) 1/pow(2, i);
		}
	}
	else{
		sum =(float) sqrt(n*n + 1);
	}	
	cout << sum << endl;
}

int main(){
	int n= 3;
	baiToan2(n);
	return 0;
}


