#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a, b;
	do{
		cout << "Nhap vao lan luot hai so tu nhien a, b: (a,b > 0)\n";
		cin >> a >> b;
	}while(a < 0 || b < 0);
	
	int tich = a * b;
	
	while(a != b){
		if(a > b){
			a -= b;
		}
		else{
			b -= a;
		}		
	}
	
	cout << "UCLN = " << a;
	cout << "\nBCNN = " << tich / a;
	return 0;
}


