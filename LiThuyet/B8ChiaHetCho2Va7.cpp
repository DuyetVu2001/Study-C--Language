#include<iostream>
#include<math.h>

using namespace std;

void tbc(int a[], int n){
	int dem = 0, tong = 0;
	float tbc = 1.0f;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0 && a[i] % 7 == 1){
			tong += a[i];
			dem++;
		}
	}
	tbc = (float)tong / dem;
	if(dem == 0)
		cout << "Khong co gia tri thoa man!" << endl;
	else 
		cout << "Tbc: " << tbc;
}
int main(){
	int a[8] = {2, 7, 8 , 23, 36, 50, 14, 77}, n = 8;
	tbc(a, n);
	return 0;
}


