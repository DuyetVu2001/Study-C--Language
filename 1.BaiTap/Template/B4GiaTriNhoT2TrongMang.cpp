#include <iostream>
#include <cmath>

using namespace std;

template <class T> T maxSecond(T *a, int n){
	T max = a[0], max2 = a[1];
	for(int i = 1; i < n; i++){
		if(max < a[i]){
			max2 = max;
			max = a[i];
		}
		else if(max > a[i] && max2 < a[i]){
			max2 = a[i];
		}
	}
	return max2;
}

int main(){
	int a[] = {10, 8, 10, 7, 6};
	cout << maxSecond<int>(a, 5) << endl;
	return 0;
}


