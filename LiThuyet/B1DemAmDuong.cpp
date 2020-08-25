#include<iostream>

using namespace std;
void ham_dem(int a[], int n){
	int dema = 0, demd = 0;
	for(int i; i < n; i++){
		if(a[i] < 0)
			dema++;
		if(a[i] > 0)
			demd++;
	}
	cout << "Co" << " " << dema << " " << "phan tu am trong mang." << endl;
	cout << "Co" << " " << demd << " " << "phan tu duong trong mang.";
}
int main(){
	int a[10] = {-1, -2, -3, -4, 3, 5, 7, 9, 9, 13}, n = 10;
	ham_dem(a, n);
	return 0;
}
