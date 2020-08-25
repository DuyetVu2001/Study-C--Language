#include <iostream>
#include <cmath>

using namespace std;

int kiemTraSoNT(int k){
	int i = 2;
	if(k < 2) return 0;
	for(;i <= sqrt(k); i++){
		if(k % i == 0) return 0;
	}
	return 1;
}

void baiToan2(int n, int &demNT, int &tongNT){
	for(int i = 2; i <= n; i++){
		if(kiemTraSoNT(i)){
			tongNT += i;
			demNT++;
		}
	}
}

int main(){
	int n = 20, demNT = 0, tongNT = 0;
	baiToan2(n, demNT, tongNT);
	cout << demNT << "\t" << tongNT;
	return 0;
}


