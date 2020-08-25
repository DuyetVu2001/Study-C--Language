#include <iostream>
#include <cmath>

using namespace std;

template <class T> T max(T *a, size_t n){
	T max = a[0];
	for(size_t i = 1; i < n; i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	return max;
}

int main(){
	int a[] = {1, 3, 4, 2, 9, 7};
	char b[] = {'A', 'C', 'g', 'b'};
	double c[] = {12.2, 123.2, 1231.2, 1.2};
	cout << max<int>(a, sizeof(a) / sizeof(int)) << endl;
	cout << max<char>(b, sizeof(b) / sizeof(char)) << endl;
	cout << max<double>(c, sizeof(c) / sizeof(double));
	return 0;
}


