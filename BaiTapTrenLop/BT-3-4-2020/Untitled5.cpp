#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a = 5, b = 3, ucln = 0;
	int r = a % b;
	if(r == 0){
		ucln = b;
	}
	else{
		a = b;
		b = r;
		r = a % b;
	}
	return 0;
}


