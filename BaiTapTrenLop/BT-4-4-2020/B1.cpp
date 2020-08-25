#include <iostream>
#include <cmath>

using namespace std;

void baiToan1(int n, int &demChan, int &demLe){
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0){
			demChan++;
		}
		else{
			demLe++;
		}
	}	
}

int main(){
	int n = 11, demChan = 0, demLe = 0;
	baiToan1(n, demChan, demLe);
	cout << demChan << demLe;
	return 0;
}


