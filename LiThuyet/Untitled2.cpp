
#include<iostream>

using namespace std;
int max(int a[], int n){
	int i, max1 = a[0];
	for(i = 1; i < n; i++){
		if(a[i] > max1){
			max1 = a[i];
		}
	}
	return max1;
}
int main(){
	int a[5] = {2,2,2,2,2}, n = 5;
	int maX = max(a, n);
	cout << maX;
	return 0;
}


