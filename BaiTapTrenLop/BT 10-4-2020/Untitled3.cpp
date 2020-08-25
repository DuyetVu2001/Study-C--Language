#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n = 6, t = 0;
	for(int i = 1; i <= n; i++){
		t = (i*(i+1))/2;
	}
	cout << "\n T = " << t;
	return 0;
}


