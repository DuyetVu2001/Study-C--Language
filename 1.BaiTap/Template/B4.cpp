#include <iostream>
#include <cmath>

using namespace std;

template <class T> T minSecond(T *a, int n){
	T min = a[0], min2 = a[1];
	for(int i = 1; i < n; i++){
		if(min > a[i]){
			min2 = min;
			min = a[i];
		}
		else if(min < a[i] && min2 > a[i]){
			min2 = a[i];
		}
	}
	return min2;
}

int main(){
	float a[] = {4.2f, 12.12f, 4.2f, 7.6f, 9.8f};
	cout << minSecond<float>(a, 5);
	return 0;
}


