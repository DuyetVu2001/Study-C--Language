#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, i, s1 = 0, s2 = 0, s3 = 0;
	cout << "Nhap vao so tu nhien n: ";
	cin >> n;
	
	if(n < 0) cout << "Hay nhap vao so tu nhien n (>0)!";
	else{
		for(i = 1; i <= n; i++){
			s1 += i;
			if(i % 2 == 0){
				s3 += i;
			}
			else s2 += i;
		}
	
		cout << "Tong cac so tu nhien khong lon hon n la: " << s1;
		cout << "\nTong cac so tu nhien le khong lon hon n la: " << s2;
		cout << "\nTong cac so tu nhien chan khong lon hon n la: " << s3;
	}
	
	return 0;
}


