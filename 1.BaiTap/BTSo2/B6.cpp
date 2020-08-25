#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, k, s = 0;
	do{
		cout << "Nhap vao lan luot hai so tu nhien n , k: (n,k > 0)\n";
		cin >> n >> k;
	}while(n < 0 || k < 0);
	
	for(int i = 1; i <= n; i++){
		if(i % k == 0){
			s += i;
		}
	}
	
	cout << "Tong cac so tu nhien khong lon hon n va chia het cho k la: " << s;
	return 0;
}


