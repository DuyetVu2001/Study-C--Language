#include <iostream>
#include <cmath>

using namespace std;

long baiToan1(int n){
	if(n == 1 || n == 0){
		return 1;		
	}
	else{
		cout << n;
		return n * baiToan1(n - 1);
	}
}

int main(){

	return 0;
}


