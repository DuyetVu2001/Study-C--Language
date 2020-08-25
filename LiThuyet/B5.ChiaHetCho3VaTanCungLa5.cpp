#include<iostream>
#include<math.h>

using namespace std;

int dem(int a[], int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 3 == 0 && a[i] % 10 == 5){
			dem++;
		}
	}
	return dem;
}
int main(){
	int a[8] = {1, 5, 15, 75, 45, 10, 15, 10 }, n = 8;
	cout << "So cac so chia het cho 3 co tan cung la 5 la: " << dem(a, n);
	return 0;
}


