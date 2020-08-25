#include<iostream>

using namespace std;
int min2(int *a, int n){
	int min1 = a[0], min2 = a[3], i;
	for(i = 1; i < n; i++){
		if(a[i] < min1){
			min2 = min1;
			min1 = a[i];
		}
		else if(a[i] > min1 && a[i] < min2){
			min2 = a[i];
		}
	}
	return min2;
}
int main(){
	int a[30] = {1,2,3,4,5}, n = 5;
	int minS = min2(a, n);
	cout << minS;
	return 0;
}


