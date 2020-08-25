#include<stdio.h>
#include<math.h>
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
	int a[5] = {1,2,3,4,5}, n = 5;
	int maX = max(a, n);
	printf("%d", maX);
	return 0;
}


